This folder contains:  
1) Bootloaders - Bootloaders of the different supported boards. These bootloaders have to be uploaded with external programmers.  
2) Tools - Compiling/uploading tools for some of the boards (such as Olimexino-85).  
3) Versions - Here are stored legacy versions of the package as well as the latest one.  
4) package_olimex_avr_index.json - This is the file which describes the whole package. The link of the file must be added inside the list of "Additional Boards Manager URLs" in order to install the package.  


Log:  

2.1.2 - 2020/12/17  
Added MOD-IO library.  
  
  
2.1.1 - 2020/10/16  
Added UEXT_SS macros for Olimexino-328/32u4/Nano to distinguish the original Slave select from the one on the UEXT.  
  
  
2.1.0 - 2020/03/04  
Added support for MOD-ENV which is based on two Adafruit library examples.  
  
  
2.0.2 - 2019/06/24  
Added support for Olimexino-2560.  
  
  
2.0.1 - 2019/03/22  
Updated MOD-LED8x8 matrix library.  
Added functions for drawing a line and reading the value of the LEDs.  
Added example for reading the whole matrix.  
  
  
2.0.0 - 2019/01/10  
This version is recommended with Arduino 1.8.8 or newer due to some issues with the new compiler on older versions: https://github.com/arduino/Arduino/issues/7949.  
Updated AVR-GCC compiler (5.4.0-atmel3.6.1-arduino2) and AVRdude uploader (6.3.0-arduino14) with the latest for the moment.  
Changed some flags and options into platform.txt.  
Added support and example sketches for Olimex board eduArdu.  
  
  
1.4.5 - 2018/11/21  
Added example for Olimexino-328 and MOD-RTC2 inside the package.  
  
  
1.4.4 - 2018/05/01  
Added example for Olimexino-328 and Shield-EKG/EMG inside the package.  
  
  
1.4.3 - 2018/04/13  
Added example for Olimexino-328, ADS1220 and weight measure sensor.
Added ADS1262 library and example based on the library of VenkateshBhat.  
  
  
1.4.2 - 2017/11/14  
Shield-LCD2X16 examples are updated. UART_LCD and UART_GPIO can be uploaded to Olimexino-328 and Olimexino-32U4 (instead of only Olimexino-328).  
Added the LCD1x9 library for Olimexino-85 (it was removed in the previous version).  
  
  
1.4.1 - 2017/11/07  
Uploaded new library for MOD-LCD1x9 that works properly with Olimexino-328, Olimexino-32U4 and Olimexino-Nano with hardware I2C (Wire library) instead of software I2C as it was until now.  
  
  
1.4.0 - 2017/09/21  
Micronuclues uploader replaced with the original one of Digistump so it support Linux OS as well.  
  
  
1.3.7 - 2016/09/27  
Small fix in some of the libraries.  
  
  
1.3.6 - 2016/07/08  
Renamed the I2C library "TinyWireM" to "_TinyWireM" with the purpose to avoid duplication of the names between the original Adafruit library and the customized one for the Olimexino-85 examples.  
  
  
1.3.5 - 2016/06/01  
Added library and examples for MOD-GPS.  
  
  
1.3.4 - 2016/05/25  
Added BB-MP3 library.  
Added numeric value of the onboard button for Olimexino-32U4.  
  
  
1.3.3 - 2016/05/15  
Fixed bugs with I2C examples.  
  
  
1.3.2 - 2016/04/15  
Package updated for Arduino 1.6.8 and newer versions of the IDE.  
  
  
1.2.2 - 2015/10/29  
Fixed bug in some of the demo examples by increasing the USI_BUF_SIZE from 30 to 40.  
Added demo example for RGB-Glasses with accelerometer and EEPROM reading.  
  
  
1.2.1 - 2015/10/06  
Made a fake empty library with "example" subfolder inside with the purpose those examples to be visible inside the Arduino IDE.  
  
  
1.1.1 - 2015/09/16  
Added libraries and examples for Olimexino-85.  
"Digistump_Wire" library replaced with "TinyWireM".  
  
  
1.1.0 - 2015/08/25  
Added support for Olimexino-85.  
  
  
1.0.0 - 2015/07/23  
Supported boards: Olimexino-328; Olimexino-32U4; RGB-Glasses.  
Libraries for MOD-IO2 and Shield-LCD16x2.  
  
