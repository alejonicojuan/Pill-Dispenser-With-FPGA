#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <irq.h>
#include <uart.h>
#include <generated/csr.h>
#include "delay.h"
#include "uart1.h"

static void m1_test(void){
	motor_cntrl_next_write(1);
	delay_ms(100);
	motor_cntrl_next_write(0);
}

static void m2_test(void){
	motor_cntrl_next_write(2);
	delay_ms(100);
	motor_cntrl_next_write(0);
}

static void m3_test(void){
	motor_cntrl_next_write(4);
	delay_ms(100);
	motor_cntrl_next_write(0);
}

static void m4_test(void){
	motor_cntrl_next_write(8);
	delay_ms(100);
	motor_cntrl_next_write(0);
}

static void med_test(void) {
	int m1 =3;
	int m2 =3;
	int m3 =3;
	int m4 =3;

	while(1) {

		char temp;
		int i = 0;
		char str[8] ="";
		char value = '0';
		while(i<8){
			temp = uart1_read();
			str[i] = temp;
			i=i+1;
		}
		if(strcmp(str,"med01_on")==0){
			m1=m1-1;
			printf("%d\n",m1);
			if(m1==0){
				printf("Se termino med 1\n");
				m1=3;
			}
			uart1_write('1');
			uart1_write('_');
			value = value + m1;
			uart1_write(value);
			uart1_write('\n');

			m1_test();
		}

		if(strcmp(str,"med02_on")==0){
			m2=m2-1;
			printf("%d\n",m2);
			if(m2==0){
				printf("Se termino med 2\n");
				m2=3;
			}
			uart1_write('2');
			uart1_write('_');
			value = value + m2;
			uart1_write(value);
			uart1_write('\n');

			m2_test();
		}

		if(strcmp(str,"med03_on")==0){
			m3=m3-1;
			printf("%d\n",m3);
			if(m3==0){
				printf("Se termino med 3\n");
				m3=3;
			}
			uart1_write('3');
			uart1_write('_');
			value = value + m3;
			uart1_write(value);
			uart1_write('\n');
			m3_test();
		}

		if(strcmp(str,"med04_on")==0){
			m4=m4-1;
			printf("%d\n",m4);
			if(m4==0){
				printf("Se termino med 4\n");
				m4=3;
			}
			uart1_write('4');
			uart1_write('_');
			value = value + m4;
			uart1_write(value);
			uart1_write('\n');
			m4_test();
		}

		printf("%s\n",str);
		delay_ms(1000);
	}
}

int main(void)
{
	irq_setmask(0);
	irq_setie(1);

	uart_init();
  uart1_init();
	//timer_init_irq(1000);

  puts("\n                     Prueba Inicial para Proyecto                  \n");
	puts("\nSoC - RiscV project UNAL 2022-1-- CPU testing software built "__DATE__" "__TIME__"\n");

	med_test();

	return 0;
}
