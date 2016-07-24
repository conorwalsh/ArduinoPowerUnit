# Arduino Power Unit

Description
-----------

This project is a power unit for an Arduino Microcontroller.
The unit is supplied power using a 9V wall adapter and a 9V battery.
When AC power is available the unit draws power from the wall adapter, if there is a power cut the unit seamlessly switches to the battery as a power source and back when power is available.
During a power cut an LED is lit to alert the user that mains power is not available. There is also an LED to warn the user when the batteries are low.

Schematics
-----------

This is a very basic schamatic of how the device switches between mains and battery power using diodes. It will always use the side with the highest voltage and since the wall adapter will always have a higher voltage (≈9.3V) it will draw from that and not the battery (≤9V) but when the power goes out the adapter voltage falls to 0V and it draws from battery. There should be little to no leakage from the battery using this method.<br/>
<img src="http://www.conorwalsh.net/APU/backup-simple.png" width="350"/>

This is a breadboard schematic of the final circuit.<br/>
<img src="http://www.conorwalsh.net/APU/ARDUINO-POWER-SCHEMATIC_bb.png" width="350"/>

This a photo of the breadboard circuit.<br/>
<img src="http://www.conorwalsh.net/APU/BREADBOARD-COM.jpg" width="350"/>

This is a standard schamatic of the final circuit.<br/>
<img src="http://www.conorwalsh.net/APU/ARDUINO-POWER-SCHEMATIC_schem_eagle.png" width="350"/>

This is the Printed Circuit Board Layout of the circuit.<br/>
<img src="http://www.conorwalsh.net/APU/ARDUINO-POWER-BOARD_eagle.png" width="350"/>

This is a photo of the PCB without components.<br/>
<img src="http://www.conorwalsh.net/APU/BOARD-REAL-RAW.jpg" width="350"/>

This is a photo of the finished PCB with components.<br/>
<img src="http://www.conorwalsh.net/APU/BOARD-COM.png" width="350"/>

License (MIT)
------
Copyright (c) 2016 Conor Walsh 

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

Thanks
------

Thank you for taking the time to look at this project I hope that it is of use to you,<br/>
<img src="http://conorwalsh.net/sig.png" /><br/>
Conor Walsh.
