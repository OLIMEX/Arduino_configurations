# How can I use Olimex PINGUINO boards with Arduino IDE?

1. First and most important – PIC32 PINGUINO boards come with a bootloader that is compatible only with Pinguino IDE. You need to program the PIC32 PINGUINO board with a different bootloader which is suitable for chipKIT/Arduio operation. This requires a PIC32-compatible programmer. The hex files with the boootloader code for different PINGUINO boards are available in folder "Bootloaders".

2. An example for PIC32-comaptible programmer is PIC-KIT3. Note that PINGUINO boards typically have the small 0.05" step connector for programming. Consider the PIC-ICSP adapter to make the connection easier. You don't need to purchase any software since Microchip provides free software solution that allows uploading a binary to a target.

3. After you have programmed the board with the binary, download the newest Arduino IDE (since there are frequent changes in the additional board support package part)

4. Start Arduino IDE and navigate to File –> Preferences then load our json file and the chipKIT json. The links are avalable below:

  https://raw.githubusercontent.com/OLIMEX/Arduino_configurations/master/PIC/package_olimex_pic_index.json

  https://raw.githubusercontent.com/chipKIT32/chipKIT-core/master/package_chipkit_index.json

  It should look like this:

  ![Preferences](https://raw.githubusercontent.com/OLIMEX/Arduino_configurations/master/PIC/Images/2.png)

5. At this point navigate to Tools –> Board... –> Boards Manager... and find “Olimex PIC boards” package and install it. This takes some time since the compiler is > 200 MB of size. It should look like this:

  ![Package installation](https://raw.githubusercontent.com/OLIMEX/Arduino_configurations/master/PIC/Images/4.png)

  There is no need to install the chipKIT board package – you just need to load it; but if you install this will not be a problem (it doesn’t interfere with our json).

6. Load blinking LED example, select your PINGUINO board and test compiling the example.

7. To upload the code to the PINGUINO board remember to enter bootloader mode! Press and hold the user button, press and release the reset button, release the user button! 


## This repsitory contains:

  1. Folder "Bootloaders" - Binaries with bootloaders compatible with Arduino IDE for the different PIC32 supported boards. These bootloaders have to be uploaded via an external PIC32-compatible programmer.
  
  2. Folder "Versions" - the folder contains stored legacy versions of the package as well as the latest one.
  
  3. Folder "Images" - contains images that show some of the steps required to configure Arduino IDE for PIC32-PINGUINO-OTG board
  
  4. File "package_olimex_avr_index.json" - the file which describes the whole package. The link to the file must be added inside File -> Preferences in Arduino IDE to install the package.

  Change log:  
  
  1.0.1 - 2016/07/08
  Added libraries for SHIELD-LCD16X2 and MOD-IO2. Also added example for PINGUINO with MOD-SDMMC (using the default SD library).  
  
  1.0.0 - 2016/07/08
  Initial release based on the package of ChipKIT. Supported boards: PIC32-PINGUINO; PIC32-PINGUINO-OTG; PIC32-PINGUINO-MICRO; PIC32-T795H; DuinoMite-Mega; DuinoMite-eMega.  
  
