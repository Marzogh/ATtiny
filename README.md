# ATtiny
### ATtiny 13/44/84/45/85 cores for Arduino 1.6.x
###### Version 1.0
  
Currently contains cores for the following:

1. ATtiny 44/84 - with the following clocks
  - 1MHz (internal)
  - 8MHz (internal)
  - 8MHz (external)
  - 16MHz (external)
  - 20MHz (external)
  
2. ATtiny 45/85 - with the following clocks
  - 1MHz (internal)
  - 8MHz (internal)
  - 8MHz (external)
  - 16MHz (external)
  - 20MHz (external)

3. ATtiny13 - with the following clocks
  - 128KHz (internal)
  - 600KHz (internal)
  - 1.2MHz (internal)
  - 4.8MHz (internal)
  - 9.6MHz (internal)

##### To do
- Add support for ATtiny 24/25/2313/4313 - w.i.p
- Add support for other ATtiny cores when possible

### Installation instructions
Please click on "Download zip file" to the right. Extract the contents and rename the folder to *attiny* and copy it to your *~/sketches/hardware* folder

### Credits
- The ATtiny13 core in this version of ATtiny cores for Arduino is built on the work done by <a href = "http://forum.arduino.cc/index.php?action=profile;u=23936"> John "smeezekitty" </a> and based on his <a href = "http://sourceforge.net/projects/ard-core13/"> Core13 </a> release which can be downloaded separately if you wish. Support for this core can be found <a href ="http://arduino.cc/forum/index.php/topic,89781.0.html"> here </a> on the Arduino Forums.
- The ATtiny44/84/45/85 cores in this version of ATtiny cores for Arduino are built on the work done by <a href = "http://highlowtech.org/?p=66"> David Mellis "damellis" </a> from the <a href = "http://highlowtech.org/"> High-Low Tech Group MIT Media Lab </a> and based on his <a href = "https://github.com/damellis/attiny/"> attiny </a> release which can be downloaded separately if you wish.
- The boards.txt which brings it all together, along with some minor tweaks to the cores themselves are by yours truly.
- If you find any bugs in this release, please raise an issue here on Github before contacting any of the original authors of the cores directly. It is very likely that my fiddling around with their code is what caused your issue.
- That said, the cores have all been tested to work perfectly for me as of 3 May 2015 on Arduino 1.6.3 on a Mac running OSX 10.10.3

### Disclaimer
 Copyright (c) 2008 David A. Mellis.  All rights reserved.
 Modified and added to by John "smeezekitty".
 Modified and added to by Prajwal "Marzogh".
 
 This library is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 3 of the License, or (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.
 
 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
