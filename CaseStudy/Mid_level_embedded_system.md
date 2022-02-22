<h1 align="center">Mid_level_embedded_system - Inkjet thermal bubble</h1>
<h2 align = "center"> Print your colorful imagination </h2>

<p align="center">
  <img width="680" src="https://github.com/Y-133/M2-EmbSys/blob/main/images/hp-deskjet-3755.jpg" alt="Inkjet">
</p>

## Description:
Printers have found a way to our desk a long ago. The printed output are most popular form  of output. The significant decrease in the price of printers itself and improved print quality have made them to be popular, almost found at all the offices and homes. There are various kinds depending on the printing methods, most popular one is the inkjet printer. These kinds of printers are affordable and produce a high quality photo realistic photograph beside prints. The technology behind these printers is amazing and the same is explained here.  
Technically to define, a printer is basically an output device which prints a hard copy of the electronic data that is stored in the computer or any other devices. The electronic data may include documents, text, images or even the combination of all three. Particular printers are available for printing particular data types.

## Important components:
* USB interface cable connector: Connects the USB cable from the computer to the printer.
* Paper tray/feeder - Most inkjet printers have a tray that you load the paper into.
*  Rollers powered by the stepper motor pull the paper in from the tray or feeder. Beside this there are passive rollers that support the paper movement of the paper while
printing.
* Print head:
  * Print head has a series of nozzles 10 micrometers ranging in few thousands in number, sprays the drop of ink on the paper.
  * The nozzles are in 10 micrometers in diameter and are placed at 1 mm from the paper, and ink ejection velocities are in the range of 5 to 10 meters per second.
  * A small heater is formed using a thin film resistive metallic layer less than 1 micrometer thick in the wall of the ink channel leading to each nozzle.
  * A pulse of electrical current is flowed through the heater resistor for about 1 microsecond in duration.
  * The stepper motor allows the print head to move back and forth across the page.
  * A belt is used to attach the print head assembly to the stepper motor. 
* Ink cartridge- is available in several combinations as separate black and colour cartridges, and colour and black come in one cartridge.
* Stabiliser bar - The print head assembly uses a stabiliser bar to ensure that movement is precise and controlled.
* Power supply - Printers use a standard power supply that is incorporated into the printer itself.
* Control circuitry - A small but sophisticated amount of circuitry is built into the printer to control all the mechanical aspects of operation, as well as decode the information sent to the printer from the computer.
* Gears and shafts -  There are some mechanical gears used for the internal mechanism.
* Interfacing connectors - Printers connect using a serial port or small computer system interface (SCSI) port or USB.
* Indication LED - Used to indicate the error during printing or refill of ink required.
* Button - Button is used to continue the printing if the printing is stopped in the middel.
* Optical encoders - This helps to precisely control the location of the printed dots, both across and down the page.

## Block diagram:
|WiFi enabled inkjet Printer (Thermal)|
|:--:|
|![Complex embedded system - Wifi printer](https://user-images.githubusercontent.com/98869524/154610641-2bd0a37f-89fc-4b91-978f-a4a1ef549afa.jpg)|

  ## Printer working: 
* When the printer is connected to the system using the USB or serial connector, a driver software is installed for interlinking them. 
* The data is sent through the connector or using WiFi. 
* The driver translates the data into a format that the printer can understand. The data is sent by the driver from the computer to the printer via the connection interface.
* The printer receives the data from the computer. It stores a certain amount of data in a buffer. 
* The control circuitry activates the paper feeding rollers which is driven by the stepper motor.
* The paper can also be fed using the vaccumsucking mechanism but here we use the top loading 
* Once the paper is fed into the printer and positioned at the start of the page, the print head stepper motor uses the belt to move the print head assembly across the page. 
* The motor pauses for the merest fraction of a second each time that the print head sprays dots of ink on the page and then moves a tiny bit before stopping again. 
* Ink drops are commonly printed at a resolution of 600 or 1200 dots per inch. 
* Multiple dots are made at each stop. It sprays the CMYK colours in precise amounts to make any other colour imaginable.
* At the end of each complete pass, the paper feed stepper motor advances forward the paper a fraction of an inch and reverses direction and begins to move back across the page  as it prints.
* This process continues until the page is printed. 
* The paper feed stepper motor spins the rollers to finish pushing the completed page into the output tray. 
* Most printers today use inks that are very fast-drying, so that you can immediately pick up the sheet without smudging it.
* Button is used to continue the printing if the printing is stopped in the middel.
* The indication LED are used to provide the info on the papper jam or alert indication to refill the tonner.   

## Printing mechanism:
* A high-pressure pump directs the ink from the reservoir via a nozzle, creating a stream of the ink.
* In a thermal inkjet printer, tiny resistors create heat that boils the ink and creates a bubble.
* As the bubble expands, some of the ink is pushed out of a nozzle onto the paper. 
* When the bubble pops out of the nozzle, a vacuum is created. This pulls more ink into the print head from the cartridge. 
* A typical bubble jet print head has 300 or 600 tiny nozzles per print head, and all of them fire a droplet in sequence. 
* Optical encoders precisely control the location of the printed dots, both across and down the page. 
* The synchronization signals insure that the ink drops are printed in accurate locations even if there is some variation in the carriage velocity, or if the carriage is accelerating or decelerating near the beginning or end of its travel.

## HIGH LEVEL REQUIREMENTS:-
| ID | Description | Category | 
| ----- | ----- | ------- | 
|HLR01|User should able to feed the paper |technical|  
|HLR02|User should able to check the indication LED|technical|
|HLR03|The system should be able to change the ink catridge |technical|

## LOW LEVEL REQUIREMENTS:-
| ID | Description | Category | 
| ----- | ----- | ------- |
|LLR01|The user should be able to place number of pages as possible |technical|  
|LLR02|The user indication LED should be working |technical|
|LLR03|The user should be able to change the catridge |technical|
## Factors affecting the image quality:
1. Brightness of paper: Smooth paper are better than than the rough paper 
2. Absorption quality of the paper:
    * When the ink is sprayed onto the paper, it should stay in a tight, symmetrical dot. If not, the dot gets spread out.

## Application:
1) Inkjet printers in almost all homes and offices to print photos, homework, invoices, newsletters, quotes, color business documents for business. 
2) Advantages of the Inkjet Printers
3) It dries fast and can be grabbed without smudging the sheet.
4) Quieter when printing 
5) High-quality prints
6) Affordable
7) Upon turning on, the device is ready for use
8) Compact design

## Disadvantages of the inkjet printers
1) Inkjet printers employ lightweight heads that can get clogged easily.
2) Inkjet cartridges are expensive
3) When ink is carried sideways away from the intended area it becomes sloppy.
4) Slower than a laser printer.
5) At most, it can hold 100 sheets.
