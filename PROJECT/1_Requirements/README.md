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
## Future scope ##
####
1) Multi user
2) Erganomical design
3) Fast charger with rechargeable batreries
4) Powerful processor
####
---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
## MATERIALS  REQUIRED:
9. BATTERY:
10. RESISTOR AND CAPACITOR:

| Sl.no | Description | Pic |
|  | -----| :----: |
| 1 | Arduino UNO <br> <p align = "justify"> The ATmega328P is the brain of the Arduino UNO. The board operates at 5 volt. DC Current for all input/output pin is 40 mA. It features 14 digital input/output pins, 6 analog inputs, 2 UARTs,1 I2C, an ICSP headerand a reset button It can be powered either with a USB B type cable or directly power using the Vin pin in the board. The Arduino UNO meets the console's necessary requirement such as sufficient number of I/O Pins, memory and processing capabilities. Although arduino performance in simulide is slow, the real hardware meets the expected performance. </p> | ![UNO](https://github.com/Y-133/M2-EmbSys/blob/e7265c727bc5bc9a7367844f674d3fcffba10c60/PROJECT/IMAGES/UNO.jfif) |
| 2 | BLDC fan <br><p align = "justify"> A brushless DC motor (also known as a BLDC motor or BL motor) is an electronically commuted DC motor which does not have brushes. The controller provides pulses of current to the motor windings which control the speed and torque of the synchronous motor. Here 5V </p> | ![BLDC](https://github.com/Y-133/M2-EmbSys/blob/338a9a43702ffbfe365a5e691b152cfae9c07217/PROJECT/IMAGES/12v-dc%20cooling-fan.jpg) |
| 3 | OLED DISPLAY SSD1306: <br> <p align = "justify"> OLED is organic light emitting diode that emits light in response to an electric current. OLED display works with no backlight so it can display deep black levels. It is small in size and light in weight than Liquid Crystal Displays 128 x 64 OLED display is simple dot matrix graphic display.  By just turning on/off these pixel’s led we can display graphical image of any shape on it. </p>| ![OLED](https://github.com/Y-133/M2-EmbSys/blob/fd0ed877e9a20256062a1eb71e5f74bf8af4d888/PROJECT/IMAGES/oled_SS1306.jfif) |  
| 4 | Buzzer: <br> <p align ="justify"> Whenever an electric potential is applied across a piezoelectric material, a pressure variation is generated. A piezo buzzer consists of piezo crystals in between two conductors. When a potential difference is applied across these crystals, they push one conductor and pull the other conductor by their internal property. The continuous pull and push action generates a sharp sound wave. </p>| ![Buzzer](https://github.com/Y-133/M2-EmbSys/blob/593694c64d9b753d07b59f6b3207d79461aad9fa/PROJECT/IMAGES/buzzer.jfif) |
| 5 | LM358:  <br> <p align ="justify"> The LM358 IC is a great, low power and easy to use dual channel op-amp IC. It consists of two internally frequency compensated, high gain, independent op-amps. This IC is designed for specially to operate from a single power supply over a wide range of voltages. It has large voltage gain of 100 dB </p>| ![LM358](https://github.com/Y-133/M2-EmbSys/blob/e996c1071cc07582b5e01ac64c7e561d0445bad6/PROJECT/IMAGES/lm358.jpg) |

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
