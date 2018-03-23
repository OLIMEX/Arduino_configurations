This folder contains:  
1) Bootloaders - Bootloaders of the different supported boards. These bootloaders have to be uploaded with external programmers (empty since STM32F4xx have embedded bootloader).  
2) Tools - Compiling/uploading tools for some of the boards.  
3) Versions - Here are stored legacy versions of the package as well as the latest one.  
4) package_olimex_avr_index.json - This is the file which describes the whole package. The link of the file must be added inside the list of "Additional Boards Manager URLs" in order to install the package.  
  
  
Log:  
  
1.0.1 - 2018/03/23  
STM32-H407 added to the list of supported boards.  

  
1.0.0 - 2016/04/15  
Initial package. Supported board - STM32-E407 with GPIO (LED and button) examples. Limited software support for STM32F4xx at this stage.  
  