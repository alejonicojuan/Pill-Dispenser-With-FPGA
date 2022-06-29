//--------------------------------------------------------------------------------
// Auto-generated by LiteX (a977adf5) on 2022-06-29 17:53:54
//--------------------------------------------------------------------------------
#include <generated/soc.h>
#ifndef __GENERATED_CSR_H
#define __GENERATED_CSR_H
#include <stdint.h>
#include <system.h>
#ifndef CSR_ACCESSORS_DEFINED
#include <hw/common.h>
#endif /* ! CSR_ACCESSORS_DEFINED */
#ifndef CSR_BASE
#define CSR_BASE 0x82000000L
#endif

/* uart1 */
#define CSR_UART1_BASE (CSR_BASE + 0x800L)
#define CSR_UART1_RXTX_ADDR (CSR_BASE + 0x800L)
#define CSR_UART1_RXTX_SIZE 1
static inline uint32_t uart1_rxtx_read(void) {
	return csr_read_simple(CSR_BASE + 0x800L);
}
static inline void uart1_rxtx_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x800L);
}
#define CSR_UART1_TXFULL_ADDR (CSR_BASE + 0x804L)
#define CSR_UART1_TXFULL_SIZE 1
static inline uint32_t uart1_txfull_read(void) {
	return csr_read_simple(CSR_BASE + 0x804L);
}
#define CSR_UART1_RXEMPTY_ADDR (CSR_BASE + 0x808L)
#define CSR_UART1_RXEMPTY_SIZE 1
static inline uint32_t uart1_rxempty_read(void) {
	return csr_read_simple(CSR_BASE + 0x808L);
}
#define CSR_UART1_EV_STATUS_ADDR (CSR_BASE + 0x80cL)
#define CSR_UART1_EV_STATUS_SIZE 1
static inline uint32_t uart1_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x80cL);
}
#define CSR_UART1_EV_STATUS_TX_OFFSET 0
#define CSR_UART1_EV_STATUS_TX_SIZE 1
static inline uint32_t uart1_ev_status_tx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t uart1_ev_status_tx_read(void) {
	uint32_t word = uart1_ev_status_read();
	return uart1_ev_status_tx_extract(word);
}
#define CSR_UART1_EV_STATUS_RX_OFFSET 1
#define CSR_UART1_EV_STATUS_RX_SIZE 1
static inline uint32_t uart1_ev_status_rx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t uart1_ev_status_rx_read(void) {
	uint32_t word = uart1_ev_status_read();
	return uart1_ev_status_rx_extract(word);
}
#define CSR_UART1_EV_PENDING_ADDR (CSR_BASE + 0x810L)
#define CSR_UART1_EV_PENDING_SIZE 1
static inline uint32_t uart1_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x810L);
}
static inline void uart1_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x810L);
}
#define CSR_UART1_EV_PENDING_TX_OFFSET 0
#define CSR_UART1_EV_PENDING_TX_SIZE 1
static inline uint32_t uart1_ev_pending_tx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t uart1_ev_pending_tx_read(void) {
	uint32_t word = uart1_ev_pending_read();
	return uart1_ev_pending_tx_extract(word);
}
static inline uint32_t uart1_ev_pending_tx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void uart1_ev_pending_tx_write(uint32_t plain_value) {
	uint32_t oldword = uart1_ev_pending_read();
	uint32_t newword = uart1_ev_pending_tx_replace(oldword, plain_value);
	uart1_ev_pending_write(newword);
}
#define CSR_UART1_EV_PENDING_RX_OFFSET 1
#define CSR_UART1_EV_PENDING_RX_SIZE 1
static inline uint32_t uart1_ev_pending_rx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t uart1_ev_pending_rx_read(void) {
	uint32_t word = uart1_ev_pending_read();
	return uart1_ev_pending_rx_extract(word);
}
static inline uint32_t uart1_ev_pending_rx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void uart1_ev_pending_rx_write(uint32_t plain_value) {
	uint32_t oldword = uart1_ev_pending_read();
	uint32_t newword = uart1_ev_pending_rx_replace(oldword, plain_value);
	uart1_ev_pending_write(newword);
}
#define CSR_UART1_EV_ENABLE_ADDR (CSR_BASE + 0x814L)
#define CSR_UART1_EV_ENABLE_SIZE 1
static inline uint32_t uart1_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x814L);
}
static inline void uart1_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x814L);
}
#define CSR_UART1_EV_ENABLE_TX_OFFSET 0
#define CSR_UART1_EV_ENABLE_TX_SIZE 1
static inline uint32_t uart1_ev_enable_tx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t uart1_ev_enable_tx_read(void) {
	uint32_t word = uart1_ev_enable_read();
	return uart1_ev_enable_tx_extract(word);
}
static inline uint32_t uart1_ev_enable_tx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void uart1_ev_enable_tx_write(uint32_t plain_value) {
	uint32_t oldword = uart1_ev_enable_read();
	uint32_t newword = uart1_ev_enable_tx_replace(oldword, plain_value);
	uart1_ev_enable_write(newword);
}
#define CSR_UART1_EV_ENABLE_RX_OFFSET 1
#define CSR_UART1_EV_ENABLE_RX_SIZE 1
static inline uint32_t uart1_ev_enable_rx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t uart1_ev_enable_rx_read(void) {
	uint32_t word = uart1_ev_enable_read();
	return uart1_ev_enable_rx_extract(word);
}
static inline uint32_t uart1_ev_enable_rx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void uart1_ev_enable_rx_write(uint32_t plain_value) {
	uint32_t oldword = uart1_ev_enable_read();
	uint32_t newword = uart1_ev_enable_rx_replace(oldword, plain_value);
	uart1_ev_enable_write(newword);
}
#define CSR_UART1_TXEMPTY_ADDR (CSR_BASE + 0x818L)
#define CSR_UART1_TXEMPTY_SIZE 1
static inline uint32_t uart1_txempty_read(void) {
	return csr_read_simple(CSR_BASE + 0x818L);
}
#define CSR_UART1_RXFULL_ADDR (CSR_BASE + 0x81cL)
#define CSR_UART1_RXFULL_SIZE 1
static inline uint32_t uart1_rxfull_read(void) {
	return csr_read_simple(CSR_BASE + 0x81cL);
}

/* motor_cntrl */
#define CSR_MOTOR_CNTRL_BASE (CSR_BASE + 0x1000L)
#define CSR_MOTOR_CNTRL_NEXT_ADDR (CSR_BASE + 0x1000L)
#define CSR_MOTOR_CNTRL_NEXT_SIZE 1
static inline uint32_t motor_cntrl_next_read(void) {
	return csr_read_simple(CSR_BASE + 0x1000L);
}
static inline void motor_cntrl_next_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1000L);
}

/* ctrl */
#define CSR_CTRL_BASE (CSR_BASE + 0x1800L)
#define CSR_CTRL_RESET_ADDR (CSR_BASE + 0x1800L)
#define CSR_CTRL_RESET_SIZE 1
static inline uint32_t ctrl_reset_read(void) {
	return csr_read_simple(CSR_BASE + 0x1800L);
}
static inline void ctrl_reset_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1800L);
}
#define CSR_CTRL_RESET_SOC_RST_OFFSET 0
#define CSR_CTRL_RESET_SOC_RST_SIZE 1
static inline uint32_t ctrl_reset_soc_rst_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t ctrl_reset_soc_rst_read(void) {
	uint32_t word = ctrl_reset_read();
	return ctrl_reset_soc_rst_extract(word);
}
static inline uint32_t ctrl_reset_soc_rst_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void ctrl_reset_soc_rst_write(uint32_t plain_value) {
	uint32_t oldword = ctrl_reset_read();
	uint32_t newword = ctrl_reset_soc_rst_replace(oldword, plain_value);
	ctrl_reset_write(newword);
}
#define CSR_CTRL_RESET_CPU_RST_OFFSET 1
#define CSR_CTRL_RESET_CPU_RST_SIZE 1
static inline uint32_t ctrl_reset_cpu_rst_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t ctrl_reset_cpu_rst_read(void) {
	uint32_t word = ctrl_reset_read();
	return ctrl_reset_cpu_rst_extract(word);
}
static inline uint32_t ctrl_reset_cpu_rst_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void ctrl_reset_cpu_rst_write(uint32_t plain_value) {
	uint32_t oldword = ctrl_reset_read();
	uint32_t newword = ctrl_reset_cpu_rst_replace(oldword, plain_value);
	ctrl_reset_write(newword);
}
#define CSR_CTRL_SCRATCH_ADDR (CSR_BASE + 0x1804L)
#define CSR_CTRL_SCRATCH_SIZE 1
static inline uint32_t ctrl_scratch_read(void) {
	return csr_read_simple(CSR_BASE + 0x1804L);
}
static inline void ctrl_scratch_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x1804L);
}
#define CSR_CTRL_BUS_ERRORS_ADDR (CSR_BASE + 0x1808L)
#define CSR_CTRL_BUS_ERRORS_SIZE 1
static inline uint32_t ctrl_bus_errors_read(void) {
	return csr_read_simple(CSR_BASE + 0x1808L);
}

/* timer0 */
#define CSR_TIMER0_BASE (CSR_BASE + 0x2000L)
#define CSR_TIMER0_LOAD_ADDR (CSR_BASE + 0x2000L)
#define CSR_TIMER0_LOAD_SIZE 1
static inline uint32_t timer0_load_read(void) {
	return csr_read_simple(CSR_BASE + 0x2000L);
}
static inline void timer0_load_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2000L);
}
#define CSR_TIMER0_RELOAD_ADDR (CSR_BASE + 0x2004L)
#define CSR_TIMER0_RELOAD_SIZE 1
static inline uint32_t timer0_reload_read(void) {
	return csr_read_simple(CSR_BASE + 0x2004L);
}
static inline void timer0_reload_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2004L);
}
#define CSR_TIMER0_EN_ADDR (CSR_BASE + 0x2008L)
#define CSR_TIMER0_EN_SIZE 1
static inline uint32_t timer0_en_read(void) {
	return csr_read_simple(CSR_BASE + 0x2008L);
}
static inline void timer0_en_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2008L);
}
#define CSR_TIMER0_UPDATE_VALUE_ADDR (CSR_BASE + 0x200cL)
#define CSR_TIMER0_UPDATE_VALUE_SIZE 1
static inline uint32_t timer0_update_value_read(void) {
	return csr_read_simple(CSR_BASE + 0x200cL);
}
static inline void timer0_update_value_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x200cL);
}
#define CSR_TIMER0_VALUE_ADDR (CSR_BASE + 0x2010L)
#define CSR_TIMER0_VALUE_SIZE 1
static inline uint32_t timer0_value_read(void) {
	return csr_read_simple(CSR_BASE + 0x2010L);
}
#define CSR_TIMER0_EV_STATUS_ADDR (CSR_BASE + 0x2014L)
#define CSR_TIMER0_EV_STATUS_SIZE 1
static inline uint32_t timer0_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x2014L);
}
#define CSR_TIMER0_EV_STATUS_ZERO_OFFSET 0
#define CSR_TIMER0_EV_STATUS_ZERO_SIZE 1
static inline uint32_t timer0_ev_status_zero_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t timer0_ev_status_zero_read(void) {
	uint32_t word = timer0_ev_status_read();
	return timer0_ev_status_zero_extract(word);
}
#define CSR_TIMER0_EV_PENDING_ADDR (CSR_BASE + 0x2018L)
#define CSR_TIMER0_EV_PENDING_SIZE 1
static inline uint32_t timer0_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x2018L);
}
static inline void timer0_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2018L);
}
#define CSR_TIMER0_EV_PENDING_ZERO_OFFSET 0
#define CSR_TIMER0_EV_PENDING_ZERO_SIZE 1
static inline uint32_t timer0_ev_pending_zero_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t timer0_ev_pending_zero_read(void) {
	uint32_t word = timer0_ev_pending_read();
	return timer0_ev_pending_zero_extract(word);
}
static inline uint32_t timer0_ev_pending_zero_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void timer0_ev_pending_zero_write(uint32_t plain_value) {
	uint32_t oldword = timer0_ev_pending_read();
	uint32_t newword = timer0_ev_pending_zero_replace(oldword, plain_value);
	timer0_ev_pending_write(newword);
}
#define CSR_TIMER0_EV_ENABLE_ADDR (CSR_BASE + 0x201cL)
#define CSR_TIMER0_EV_ENABLE_SIZE 1
static inline uint32_t timer0_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x201cL);
}
static inline void timer0_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x201cL);
}
#define CSR_TIMER0_EV_ENABLE_ZERO_OFFSET 0
#define CSR_TIMER0_EV_ENABLE_ZERO_SIZE 1
static inline uint32_t timer0_ev_enable_zero_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t timer0_ev_enable_zero_read(void) {
	uint32_t word = timer0_ev_enable_read();
	return timer0_ev_enable_zero_extract(word);
}
static inline uint32_t timer0_ev_enable_zero_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void timer0_ev_enable_zero_write(uint32_t plain_value) {
	uint32_t oldword = timer0_ev_enable_read();
	uint32_t newword = timer0_ev_enable_zero_replace(oldword, plain_value);
	timer0_ev_enable_write(newword);
}

/* uart */
#define CSR_UART_BASE (CSR_BASE + 0x2800L)
#define CSR_UART_RXTX_ADDR (CSR_BASE + 0x2800L)
#define CSR_UART_RXTX_SIZE 1
static inline uint32_t uart_rxtx_read(void) {
	return csr_read_simple(CSR_BASE + 0x2800L);
}
static inline void uart_rxtx_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2800L);
}
#define CSR_UART_TXFULL_ADDR (CSR_BASE + 0x2804L)
#define CSR_UART_TXFULL_SIZE 1
static inline uint32_t uart_txfull_read(void) {
	return csr_read_simple(CSR_BASE + 0x2804L);
}
#define CSR_UART_RXEMPTY_ADDR (CSR_BASE + 0x2808L)
#define CSR_UART_RXEMPTY_SIZE 1
static inline uint32_t uart_rxempty_read(void) {
	return csr_read_simple(CSR_BASE + 0x2808L);
}
#define CSR_UART_EV_STATUS_ADDR (CSR_BASE + 0x280cL)
#define CSR_UART_EV_STATUS_SIZE 1
static inline uint32_t uart_ev_status_read(void) {
	return csr_read_simple(CSR_BASE + 0x280cL);
}
#define CSR_UART_EV_STATUS_TX_OFFSET 0
#define CSR_UART_EV_STATUS_TX_SIZE 1
static inline uint32_t uart_ev_status_tx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t uart_ev_status_tx_read(void) {
	uint32_t word = uart_ev_status_read();
	return uart_ev_status_tx_extract(word);
}
#define CSR_UART_EV_STATUS_RX_OFFSET 1
#define CSR_UART_EV_STATUS_RX_SIZE 1
static inline uint32_t uart_ev_status_rx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t uart_ev_status_rx_read(void) {
	uint32_t word = uart_ev_status_read();
	return uart_ev_status_rx_extract(word);
}
#define CSR_UART_EV_PENDING_ADDR (CSR_BASE + 0x2810L)
#define CSR_UART_EV_PENDING_SIZE 1
static inline uint32_t uart_ev_pending_read(void) {
	return csr_read_simple(CSR_BASE + 0x2810L);
}
static inline void uart_ev_pending_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2810L);
}
#define CSR_UART_EV_PENDING_TX_OFFSET 0
#define CSR_UART_EV_PENDING_TX_SIZE 1
static inline uint32_t uart_ev_pending_tx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t uart_ev_pending_tx_read(void) {
	uint32_t word = uart_ev_pending_read();
	return uart_ev_pending_tx_extract(word);
}
static inline uint32_t uart_ev_pending_tx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void uart_ev_pending_tx_write(uint32_t plain_value) {
	uint32_t oldword = uart_ev_pending_read();
	uint32_t newword = uart_ev_pending_tx_replace(oldword, plain_value);
	uart_ev_pending_write(newword);
}
#define CSR_UART_EV_PENDING_RX_OFFSET 1
#define CSR_UART_EV_PENDING_RX_SIZE 1
static inline uint32_t uart_ev_pending_rx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t uart_ev_pending_rx_read(void) {
	uint32_t word = uart_ev_pending_read();
	return uart_ev_pending_rx_extract(word);
}
static inline uint32_t uart_ev_pending_rx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void uart_ev_pending_rx_write(uint32_t plain_value) {
	uint32_t oldword = uart_ev_pending_read();
	uint32_t newword = uart_ev_pending_rx_replace(oldword, plain_value);
	uart_ev_pending_write(newword);
}
#define CSR_UART_EV_ENABLE_ADDR (CSR_BASE + 0x2814L)
#define CSR_UART_EV_ENABLE_SIZE 1
static inline uint32_t uart_ev_enable_read(void) {
	return csr_read_simple(CSR_BASE + 0x2814L);
}
static inline void uart_ev_enable_write(uint32_t v) {
	csr_write_simple(v, CSR_BASE + 0x2814L);
}
#define CSR_UART_EV_ENABLE_TX_OFFSET 0
#define CSR_UART_EV_ENABLE_TX_SIZE 1
static inline uint32_t uart_ev_enable_tx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 0) & mask );
}
static inline uint32_t uart_ev_enable_tx_read(void) {
	uint32_t word = uart_ev_enable_read();
	return uart_ev_enable_tx_extract(word);
}
static inline uint32_t uart_ev_enable_tx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 0))) | (mask & plain_value)<< 0 ;
}
static inline void uart_ev_enable_tx_write(uint32_t plain_value) {
	uint32_t oldword = uart_ev_enable_read();
	uint32_t newword = uart_ev_enable_tx_replace(oldword, plain_value);
	uart_ev_enable_write(newword);
}
#define CSR_UART_EV_ENABLE_RX_OFFSET 1
#define CSR_UART_EV_ENABLE_RX_SIZE 1
static inline uint32_t uart_ev_enable_rx_extract(uint32_t oldword) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return ( (oldword >> 1) & mask );
}
static inline uint32_t uart_ev_enable_rx_read(void) {
	uint32_t word = uart_ev_enable_read();
	return uart_ev_enable_rx_extract(word);
}
static inline uint32_t uart_ev_enable_rx_replace(uint32_t oldword, uint32_t plain_value) {
	uint32_t mask = ((uint32_t)(1 << 1)-1);
	return (oldword & (~(mask << 1))) | (mask & plain_value)<< 1 ;
}
static inline void uart_ev_enable_rx_write(uint32_t plain_value) {
	uint32_t oldword = uart_ev_enable_read();
	uint32_t newword = uart_ev_enable_rx_replace(oldword, plain_value);
	uart_ev_enable_write(newword);
}
#define CSR_UART_TXEMPTY_ADDR (CSR_BASE + 0x2818L)
#define CSR_UART_TXEMPTY_SIZE 1
static inline uint32_t uart_txempty_read(void) {
	return csr_read_simple(CSR_BASE + 0x2818L);
}
#define CSR_UART_RXFULL_ADDR (CSR_BASE + 0x281cL)
#define CSR_UART_RXFULL_SIZE 1
static inline uint32_t uart_rxfull_read(void) {
	return csr_read_simple(CSR_BASE + 0x281cL);
}

#endif
