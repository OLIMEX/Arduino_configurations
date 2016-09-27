This folder contains:  
1) Bootloaders - Bootloaders of the different supported boards. These bootloaders have to be uploaded with external programmers.  
2) Tools - Compiling/uploading tools for some of the boards (empty for this architecture since tools are part of the ChipKIT's package).  
3) Versions - Here are stored legacy versions of the package as well as the latest one.  
4) package_olimex_avr_index.json - This is the file which describes the whole package. The link of the file must be added inside the list of "Additional Boards Manager URLs" in order to install the package.  
  
  
Log:  
  
  
1.0.1 - 2016/07/08  
Added libraries for SHIELD-LCD16X2 and MOD-IO2. Also added example for Pinguino with MOD-SDMMC (using the default SD library).  
  
  
1.0.0 - 2016/07/08  
Initial release based on the package of ChipKIT. Supported boards: PIC32-Pinguino; PIC32-Pinguino-OTG; PIC32-Pinguino-Micro; PIC32-T795H; DuinoMite-Mega; DuinoMite-eMega.  
  