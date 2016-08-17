Demo library and examples compatible with Olimex MOD-GPS with U-blox chip.

The GPS parser library and the examples are written by Mikal Hart (http://arduiniana.org/) and part of the original library TinyGPSPlus. We modified the examples so the communication between the module and the host board is done through Serial/Serial1 (depending on whether the host board is Olimexino-328 or Olimexino-32U4) instead of SoftwareSerial. The default baudrate is set to 9600 for this module. If you use any of this code in your project, please respect the original creator of this library and examples.

Tested with Olimex OLIMEXINO-328 and OLIMEXINO-32U4 board and Arduino IDE v1.6.8.

Revision 1.0.0, Olimex, 01.06.2016
