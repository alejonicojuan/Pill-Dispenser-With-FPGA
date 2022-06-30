# Pill-Dispenser-with-FPGA and ALEXA

# Autores 🖋️

* Juan Manuel Sarmiento 🧑‍🔧
* Nicolás Moreno Zamora 🧑‍💻
* Alejandro Fernández Astaiza 🧑‍💼

Este es el repositorio del proyecto final de la asignatura **Electrónica Digital II** del semestre 2022-1 (**Universidad Nacional de Colombia - Sede Bogotá**). A continuación se mostrará el proyecto de un Dispensador de medicamentos conformado por una arquitectura de SoC, donde a partir de un microprocesador y diferentes periféricos se realizan operaciones que permiten al dispensador de medicamentos indicarle a un paciente en que horario y que medicamentos debe consumir específicamente.


Los periféricos que se utilizaron en el proyecto, para complementar al procesador, fueron el asistente de voz de Alexa, el modulo Nodemcu V3 (ESP 8266) y un motor paso a paso (28byj-48).

El diagrama que describe cómo se encuentra conformado el **Prototipo** y las diversas conexiones entre el SoC, el microprocesador, el modulo Nodemcu y los periféricos usados es el siguiente:


<p align="center">
    <img src="https://user-images.githubusercontent.com/108309588/176552823-2e0e0865-bdf3-46ad-9c46-53004a50af78.png" />
</p>



El mapa de memoria se encuentra detalladamente en el archivo Soc_MemoryMap.csv, las bases correspondientes para cada driver del SoC son las siguientes:


<p align="center">
    <img src="https://user-images.githubusercontent.com/108309588/176672848-5782f690-c615-4ed1-8e38-c178c0d2058f.png" />
</p>




A continuación haremos una breve explicación del Soc, el firmware y los perfiféricos integrados al Soc junto a sus respectivos links en donde se puede observar su funcionamiento más en detalle.

# SoC 🤖


En este enlace se describe la arquitectura del dispensador de medicametos y el proceso que se llevo a cabo usando el entorno Litex para el ensamble y la integración del microprocesador picoRV32, el bus de datos Wishbone y los diferentes módulos de los periféricos que componen el dispensador. Para mas informacion remitase a Soc.

# Firmware 👨‍💻

Dentro del enlace de firmware se encuentra la información del código usado para el desarrollo del funcionamiento del dispensador, de igual forma se puede observar la explicación de las funciones que se encuentran dentro del archivo main.c. Para mas informacion remitase a firmware.
# Periféricos 🔌

Aquí presentamos una lista de los periféricos usados en el propyecto, cada uno de estos links mostraran el módulo en verilog y a su vez se hace una explicación detallada del código utilizado para el funcionamiento del módulo de cada periférico.

    Motor 28byj-48
    Modulo Nodemcu (ESP8266) controlado por protocolo UART
    
    
# Alimentación:

El proyecto en general se alimenta directamente de la red domiciliaria a excepción de los motores que se alimentan con una bateria de 9V.

# Modelamiento 3D:



<p align="center">
    <img src="https://user-images.githubusercontent.com/108309588/176673113-eb866c6a-7837-4e9c-8fee-f00a424d7116.png" />
</p>

			

