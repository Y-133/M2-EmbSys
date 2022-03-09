<h1 align="left">REPORT: </h1>
<h1 align="center"> SPACE WARRIOR </h1>
<i><h3 align = "center"> Guard your galaxy </h3></i>
<i><h3 align = "center"> SPACE WARRIOR is a arduino based gaming console that runs a game space war.  </h3></i>

<p align="center">
  <img width="1080 "height="600 " src="https://github.com/Y-133/M2-EmbSys/blob/a2454516c7c7140fc056e7bcaf77e192b621d79b/PROJECT/IMAGES/space%20battle.jpg" alt="FM_pic">
</p>


## SUMMARY ##
<p align="justify">
 The handhed gaming console is simulated using SIMULIDE software. The development board Arduino UNO based out of ATMEGA 328P , which is the brain of the console is used.The cooling system for the console and the battery is used to keep the temoerature in limit. The RTD 2 wire sensor is used to capture the temperature. The DC brushless motor ( BDLC) is used for effective ventilation purpose. The OLED screen acts as the face of the console, where the game play is displayed. The piezo buzzer is used for the game play audio output. This gives the user an immersive experience.  </p>
 
 
| STORYLINE:                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |                                                                                                                              |
|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|------------------------------------------------------------------------------------------------------------------------------|
| <p align="justify"> The galaxy is under the threat of a unknown alien invasion. As the guardian of the galaxy its your duty to save the galaxy. The invaders have powerful weapons though, with smart and strong mind stop the invasion.Your ship can only take 5 attacks. <br> <h2><p align="center">YOUR THE GUARDIAN, Guard your galaxy!</p> </h2> </p>                                                                                                                                                                                                                                                                                                                                                                                                                                | ![space_ship](https://github.com/Y-133/M2-EmbSys/blob/2be834b032cb1a5981618580a8b2758b9c52a80b/PROJECT/IMAGES/spaceship.jpg) |
| GAMEPLAY:                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |                                                                                                                              |
| <p align="justify"> The gameplay of Spacewar! involves two monochrome spaceships called "the needle" and "the wedge", each controlled by a player, attempting to shoot one another while maneuvering on a two-dimensional plane. The ships have a limited number of lives. The player controls one of the ships and must attempt to shoot down the other ship while avoiding a collision with the missiles or the opposing ship. </p> \|                                                                                                                                                                                                                                                                                                                                                  | ![space](https://github.com/Y-133/M2-EmbSys/blob/f0a2d1aeb76e196935ca394dfff496fe00ef81a9/PROJECT/IMAGES/GAME%20TIME.jpg)    |
| HARDWARE CONSOLE:                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         |                                                                                                                             
| <p align="justify"> The project is all about developing and playing the fun nintendo like games using the Atmega based Arduino controller. The project can be more precisely defined as handheld game console which is a small, portable self-contained video game console with a built-in screen, game controls and speakers. Handheld game consoles are smaller than home video game consoles and contain the console, screen, speakers, and controls in one unit, allowing people to carry them and play them at any time or place.  This console is brained by Arduino with a marvelous display screen. The game is controlled using the joystick and few buttons. The console has  dedicated on/off switch and a dedicated automatic cooling system that keeps the console cool.</p> |                                                                                                                              |                                                                                                                     
 
----------------------------------------------------------------------------
# Requirements: #

## Product research ## 
####
The gaming industry is arguably one of the most important and innovative sectors in tech today. Its importance to culture, social networking and entertainment cannot be understated. As many enjoy the immersive gaming, there is also a cheering audience who are willing to play the old gold games like Mario bros, Pac Man and so on. The best handheld gaming consoles can keep you entertained anywhere. Unlike PC or other gaming consoles they are portable and lightweight. These are moderately powerful, lightweight machines that are easy to stash in a backpack, or even a pocket, and come at low cost when DIY'ed.  With an ever growing audience in the gaming world it is more reasonable to develop a handheld gaming console at low cost.
####
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## BENIFITS: ##  
#### 
1. Entertaining partner at anywhere anytime
2. Helps to improve cognitive skills 
3. New way to engage socially with peers
####

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## FEATURES: ##
####
1. OLED screen
2. Effective auto cooling system
3. Portable console and has an USB chargeable features.
4. Powerful audio
####
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## SWOT Analysis ##
####
**STRENGTHS**   
* Console has an auto cooling system.
* Portable console and has an USB chargeable features.
* Low cost. 

**WEAKNESSES**  
* Doesn't support multiplayer
* Doesn't support gaming over internet

**OPPORTUNITIES**    
* Ever growing gaming market, the product has a great oppurtunity to make a great business and even pave paths to even more creative, cheaper and powerful DIY gaming console ahead. This project has more potential to expand it into commercial one.  

**THREATS**  
* Comepetetive market with more attracted towards more powerful immersive high graphics PC or other type of gaming console. 
####
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
####
4W's and 1'H

### What ###
* To build a gaming console that could run the simple nintendo like games using low cost controller. 
### Where ###
* The console can be used at anywhere anytime by the user.
### When ###
* The product is expected to be delivered within the deadline mentioned.
### Who ###
* Common public who are interested in small and simple games. 
## Why ##
* Although it is not an essential product the projects aims to explore the possibilities to make a DIY gaming console using low cost controller.  
### How ###
* The gadget runs the game using the Arduino and controlled using the joystick and buttons. The console also has good display screen.

####
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# Requirements: #
## HIGH LEVEL REQUIREMENTS:- ##
| ID | Description |  
| :-----: | ----- | 
| HLR01 | The console shall be able to display the game played |
| HLR02 | The console button shall control the game play |
| HLR03 | The console shall initiate cooling system automatically when required |
| HLR04 | The on/off shall On/Off the console |  
| HLR05 | The battery shall be removed and replaced |
| HLR06 | The console shall be designed for an ergonomical and comfortable user experience.|

## LOW LEVEL REQUIREMENTS:- ##
| HLR_ID |LLR_ID | Design_consideration | 
| :-----: | :-----: | -------------------- | 
| HLR_1 | LLR_1.1 | The console's OLED display shall display the game play refreshing the frames at faster rate |
| HLR_2 | LLR_2.1 | The push buttons shall be able to work |  
| HLR_3 | LLR_3.1 | The thermistor shall detect the temperature rise accurately | 
| | LLR_3.2 | The cooling system is turned on by the controller automatically |
| | LLR_3.3 | The cooling system turns on the fan using the PWM signal with 50% duty cycle from the controller until the temperature downs to 25°C |
| | LLR_3.3 | The cooling system shall control the speed of the fan when it cools down | 
| | LLR_3.4 | The cooling system turns off the fan when the temperature is down to 25°C |  
| HLR_4 | LLR_4.1 | The button shall be used to turn On/off the console |
| HLR_5 | LLR_5.1 | The battery in the console shall be removable and replaceable |
| HLR_6 | LLR_6.1 | The console shall be designed for an ergonomical and comfortable user experience.|

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## SYSTEM DESIGN
### Behavioural Diagram:

### USE CASE :
![USE CASE](https://github.com/Y-133/M2-EmbSys/blob/2d2585d59268072132e2a7b9f36f30c7274cac27/PROJECT/IMAGES/USE%20CASE.jpg)

## Structural Diagram
![Structural Diagram](https://github.com/Y-133/M2-EmbSys/blob/f3818e41823b79becf762dbda089d22529fc1d5c/PROJECT/IMAGES/STRUCTURAL%20DIAGRAM.jpg )

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
# TEST PLAN:
 * Test plans are very helpful in checking the behaviour of the program, variables and function for different values
------------------------------------------------------------------------------------------------
## How to run the test? ##
* Load the Simulide file and arduino file in Simulide software and run the project.  
* RTD sensor value is changed using the knob feature and corresponding temperature change can be observed.
* Use the control buttons to move the space ship.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## FEATURES: ##
####
1. OLED screen
2. Effective auto cooling system
3. Portable console and has an USB chargeable features.
4. Powerful audio
####
----------------------------------------------------------------------------------------------------------------
## High level test plan

## TABLE_NO: HL_1 ##
| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test** |    
| :---------: | :----------------------------------------------------------: | :---------: | :---------: | :------------: | :-------------: |
|  H_01       | Console shall turn on and the game runs | Power supply | Game running without error| no error |Mannual |
|  H_02       | Audio output: When the console is turned on the speaker shall turn on| Signal from the controller | Speaker works | no error |Mannual |
|  H_03       | RTD sensor working is checked by varying the temperature | The temperature knob in the IDE is changed to obervee the change in temperature| Temperature change and auto cooling system turns on | no error |Mannual |
|  H_04       | Fan runs when poewred using the PWM signal from the controller | Controller signal | Fan turns on | Fan turns on  |Mannual |
|  H_05       | Fan turns off after cooling the console  |  Controller signal | Fan turns off | Fan turns off  |Mannual |
|  H_06       | OLED screen turns on and the game is viewed | Controller signal | Displays game | Game is displayed |Mannual |


------------------------------------------------------------------------------------------------------------------------------------------------------------------
## Table no: Low level test plan

## TABLE_NO: LL_1 ##
| **High_leve_Test ID** | **Low_leve_Test ID** | **Description**       | **Exp IN** | **Exp OUT** | **Actual Out** |**Type Of Test**  |    
| :-------------------: | :------------------: | :-------------------: | :--------: | :---------: |:-------------: | :--------------: |
| H_01 | L_01.1 | Console shall turn on with 5V | 5V supply | Game running without error | The game starts run with audio ouput| mannual |
| H_02  | L_2.1 | Audio output: When the console is turned on the speaker shall turn on  |  Signal from the controller |Speaker works |The intro notes and the game sound is played using the speaker | mannual |
| H_03 | L_3.1 | RTD sensor working is checked by varying the temperature | The temperature knob in the IDE is changed to obervee the change in temperature |Temperature change and auto cooling system turns on | no error |Mannual |
| H_04  | L_.4.1| Fan runs when poewred using the PWM signal from the controller | Controller signal | Fan turns on | Fan turns on  |Mannual ||
|  H_05 | L_5.1 | Fan turns off after cooling the console  |  Controller signal | Fan turns off | Fan turns off  |Mannual |
|  H_06 | L_6.1 | OLED screen turns on and the game is viewed | Controller signal | Displays game | Game is displayed |Mannual |
------------------------------------------------------------------------------------------------
# PROJECT PROGRAM SNAP SHOTS
--------------------------------------
#### Some of the project runing snapshot
#### Simulide schematics ####
![schematics](https://github.com/Y-133/M2-EmbSys/blob/fd107bb19f2aa8b9470a7d2c967eeb2e11556738/PROJECT/IMAGES/1_entryy.jpg)
----------------------------------------------------
#### Program entry run ####
![1](https://github.com/Y-133/M2-EmbSys/blob/c9bef5f9072bec7be865cbd1b60c0648207050b6/PROJECT/IMAGES/2.jpg)
----------------------------------------------------
#### Program run ####
![2](https://github.com/Y-133/M2-EmbSys/blob/c9bef5f9072bec7be865cbd1b60c0648207050b6/PROJECT/IMAGES/3.jpg)
----------------------------------------------------

## CHALLENGES FACED: ##
####
1. Component tuning in Simulide as it mis behaves sometimes/ crashes.
2. Make the game run at playable speed in the simulide. Due to more number of hidden processing layers the game runs slower than when implemented in hardware.
####

## REFERENCES:
1. (Project) https://create.arduino.cc/projecthub/12345hoxdipan/how-to-make-a-star-wars-game-using-arduino-and-oled-retro-g-c137bd?ref=search&ref_id=OLED%20game&offset=18
2. https://create.arduino.cc/projecthub/herolivechannel/weather-station-arduino-dht11-sensor-oled-display-2f8e50
3. https://embeddedinventor.com/guide-to-configure-doxygen-to-document-c-source-code-for-beginners/#Doxygen_pages
5. Various other websites were used for programmiing references


#### Modification done: ####
####
   *I felt that existing arduino based gaming console mss the auto cooling system so I added the cooling systen to the existing console.  
####
-----------------------------------------------------------

#### Future updates: ####
1) Multi user
2) Erganomical design
3) Fast charger with rechargeable batreries
4) Powerful processor
5) Bigger screen
-----------------------------------------------------------

