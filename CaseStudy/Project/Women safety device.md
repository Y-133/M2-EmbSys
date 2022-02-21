<h1 align="center">simple_embedded_system - GPS tracking device </h1>
<p align="center">
  <img width="680" src="https://user-images.githubusercontent.com/98869524/154801859-f97d02cb-d714-40c8-ba47-59d4121c7422.png" alt="GPS tracker">
</p>

# Description:
This Project presents a safety device with GPS tracking and message alerts using Arduino based on Atmega 328P controller. This detection and messaging system is composed of a GPS receiver, Aduino and a GSM Modem. GPS Receiver gets the location information from satellites in the form of latitude and longitude.The Arduino processes this information and this processed information is sent to the user using GSM modem A GSM modem is interfaced to the Arduino. The GSM modem sends an SMS to the predefined mobile number. By pressing the switch, the entire system will be activated and the GPS location is sent to the defined number using GSM instantly.
This needn't be used only in emergency situation but can also be used to share current location. 


## Materials used:
GPS - GPS(Global Positioning System) is a satellite-based navigation system. It provides time and location-based information to a GPS receiver, located anywhere on or near the earth surface.GPS can pinpoint a device's location with accuracy and by comparing coordinates, the statistics can be used to calculate a device's direction of movement and speed which makes them popular and widely used choice.
GSM - The GSM system was designed as a second generation (2G) cellular phone technology which provides communication either mobile voice and data services.
Battery- Carbon zinc, alkaline batteries, 9V, and coin cell are types of primary batteries (non-rechargeable) that would most likely be utilized in an Arduino project.
Buzzer - Buzzer acts as the alarm system to alert the near by people.
Torch - An White LED is used to act as a light source. 
  
## Basic requirements:
* Emergency sms alert
* Torch
* GPS 
* GSM/GPRS 
* Battery
*  On/Off swtch
*  Buzzer
*  Safety knife (optional)
*  Door breaker (optional)
## Block diagram:
|Women safety  GPS tracker)|
|:--:|
![Simple embeddded - GPS tracker](https://user-images.githubusercontent.com/98869524/154610636-a0895ac0-849c-41c9-abd8-79eecdea5810.jpg)

## Disadvanatages:
* The system might be able to send SMS at the areas with low network connections.
*  GSM is a recurring cost for service. 
