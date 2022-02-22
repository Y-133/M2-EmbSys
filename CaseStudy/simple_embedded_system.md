<h1 align="center">Simple_embedded_system - GPS tracker with alert system </h1>
<h2 align = "center"> Explore the world without fear </h2>
<p align="center">
  <img width="680" src="https://user-images.githubusercontent.com/98869524/154801859-f97d02cb-d714-40c8-ba47-59d4121c7422.png" alt="GPS tracker">
</p>

<p align="center">
  <img width="680" src="https://user-images.githubusercontent.com/98869524/154886417-6cf39f54-352a-4c43-805f-c787881b6bcc.jpg" alt="GPS tracker with other tools">
</p>

# Description:
This Project presents a safety device with GPS tracking and message alerts using Arduino based on Atmega 328P controller. This detection and messaging system is composed of a GPS receiver, Aduino and a GSM Modem. GPS Receiver gets the location information from satellites in the form of latitude and longitude.The Arduino processes this information and this processed information is sent to the user using GSM modem A GSM modem is interfaced to the Arduino. The GSM modem sends an SMS to the predefined mobile number. By pressing the switch, the entire system will be activated and the GPS location is sent to the defined number using GSM instantly.
This needn't be used only in emergency situation but can also be used to share current location. 

## Materials used:
* GPS - GPS(Global Positioning System) is a satellite-based navigation system. It provides time and location-based information to a GPS receiver, located anywhere on or near the earth surface.GPS can pinpoint a device's location with accuracy and by comparing coordinates, the statistics can be used to calculate a device's direction of movement and speed which makes them popular and widely used choice.
* GSM - The GSM system was designed as a second generation (2G) cellular phone technology which provides communication either mobile voice and data services.
* Battery- Carbon zinc, alkaline batteries, 9V, and coin cell are types of primary batteries (non-rechargeable) that would most likely be utilized in an Arduino project.
* Buzzer - Buzzer acts as the alarm system to alert the near by people.
* Torch - An White LED is used to act as a light source. 
* On/Off switch - switch for torch.
* Battery Indication LED Yellow- This indicated when the power is low but able to operate for few days.
* Battery Indication LED Red- This indicated when the power is very low but able to operate for few hours.

## Requirements:
* Emergency sms alert
* Torch
* GPS 
* GSM/GPRS 
* Battery
* On/Off swtch
* Buzzer
* Safety knife 
* Door breaker 
 
## HIGH LEVEL REQUIREMENTS:-
| ID | Description | Category | 
| ----- | ----- | ------- | 
|HLR01|User should able to use torchlight |technical|  
|HLR02|User should able to send GPS location using GSM|technical|
|HLR03|The system should be able to sound alarm |technical|
|HLR04|User should be able to on/off the torch|technical|   
|HLR05|User should able to use the knife |technical|
|HLR05|User should able to replace the battery |technical|


## LOW LEVEL REQUIREMENTS:-
| ID | Description | Category | 
| ----- | ----- | ------- |
|LLR01|The torchlight should be working when turned on whenever used |technical|  
|LLR02|The GPS location has to be shared using GSM |technical|
|LLR02|The battery should be easily replacable |technical|


## Block diagram:
|GPS tracker|
|:--:|
![Simple embeddded - GPS tracker](https://github.com/Y-133/M2-EmbSys/blob/main/images/simple_ES_GPS_blk_dig.jpg)

## Advantages: 
* Beside the GPS tracker and SOS message sender, the saety knife is helpful in escaping or for self defense.
* The door breaker is very helpful in breaking the glass doors.

## Disadvanatages:
* The system might be able to send SMS at the areas with low network connections.
*  GSM is a recurring cost for service. 

## Application:
This GPS tracker is more of a self defense tool which can be used by general public for their safety.
* Adults, eldery people and even childrens without any hurtable accessories can use this tool.
* One can use it with keychan or just carry in the pocket. 

## Future scope:
The history of the location travelled can be stored here. So it is more benifitial during hiking or trekking.
