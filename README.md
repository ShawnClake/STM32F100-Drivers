# STM32F100-Drivers
Driver libraries for ARM based STM32F100 development boards

## C++ Setup
* In Keil uVision 5, choose project options and click on the linker tab. Check the 'Use Memory Layout from Target Dialog' box
* In Keil uVision 5, choose project options and click on the C/C++ tab. Uncheck C99 Mode and add '--cpp11' to the Misc Controls text box.
* Add the retarget.cpp file to your project, but dont include it anywhere. It is public scoped and works fine out of the box. 
  * These functions override system functions which error out on embedded systems and cause hangs
  * If required, modify the implementation of the UART functions inside of retarget.cpp
