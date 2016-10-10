# How can I use Olimex PINGUINO boards with Arduino IDE?

1. First and most important – PIC32 PINGUINO boards come with a bootloader that is compatible only with Pinguino IDE. You need to program the PIC32-PINGUINO-OTG with a different bootloader which is suitable for chipKIT/Arduio operation. This requires a PIC32-compatible programmer. The hex files with the boootloader code for different PINGUINO boards are available in folder "Bootloaders".

2. An example for PIC32-comaptible programmer is PIC-KIT3. Note that PINGUINO boards typically have the small 0.05" step connector for programming. Consider the PIC-ICSP adapter to make the connection easier. You don't need to purchase any software since Microchip provides free software solution that allows uploading a binary to a target.

3. After you have programmed the board with the binary, download the newest Arduino IDE (since there are frequent changes in the additional board support package part)

4. Start Arduino IDE and navigate to File –> Preferences then load our json file and the chipKIT json. The links are avalable below:

  https://raw.githubusercontent.com/OLIMEX/Arduino_configurations/master/PIC/package_olimex_pic_index.json

  https://raw.githubusercontent.com/chipKIT32/chipKIT-core/master/package_chipkit_index.json

5. At this point navigate to Tools –> Board... –> Boards Manager... and find “Olimex PIC boards” package and install it. This takes some time since the compiler is > 200 MB of size.

  There is no need to install the chip board package – you just need to load it; but if you install this will not be a problem (it doesn’t interfere with our json).

4. Finally, load blinking LED example, select PIC32-PINGUINO-OTG board and test the compiling.


## This repsitory contains:

  1. Bootloaders - Binaries with bootloaders compatible with Arduino IDE for the different PIC32 supported boards. These bootloaders have to be uploaded via an external PIC32-compatible programmer.
  
  2. Tools - Compilling/uploading tools for some of the boards (empty for the PIC architecture since tools are part of the ChipKIT's package).
  
  3. Versions - the folder contains stored legacy versions of the package as well as the latest one.
  
  4. package_olimex_avr_index.json - the file which describes the whole package. The link to the file must be added inside File -> Preferences in Arduino IDE to install the package.

  Change log:  
  
  1.0.1 - 2016/07/08
  Added libraries for SHIELD-LCD16X2 and MOD-IO2. Also added example for Pinguino with MOD-SDMMC (using the default SD library).  
  
  1.0.0 - 2016/07/08
  Initial release based on the package of ChipKIT. Supported boards: PIC32-Pinguino; PIC32-Pinguino-OTG; PIC32-Pinguino-Micro; PIC32-T795H; DuinoMite-Mega; DuinoMite-eMega.  
  
