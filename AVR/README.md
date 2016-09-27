This folder contains:  
1) Bootloaders - Bootloaders of the different supported boards. These bootloaders have to be uploaded with external programmers.  
2) Tools - Compiling/uploading tools for some of the boards (such as Olimexino-85).  
3) Versions - Here are stored legacy versions of the package as well as the latest one.  
4) package_olimex_avr_index.json - This is the file which describes the whole package. The link of the file must be added inside the list of "Additional Boards Manager URLs" in order to install the package.  


Log:  

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
  