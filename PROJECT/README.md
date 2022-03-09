# PROJECT FOLDER:
<h1 align="center"> SPACE WARRIOR </h1>
<i><h3 align = "center"> Guard your galaxy </h3></i>
<i><h3 align = "center"> SPACE WARRIOR is a arduino based gaming console that runs a game space war.  </h3></i>

<p align="center">
  <img width="1080 "height="600 " src="https://github.com/Y-133/M2-EmbSys/blob/a2454516c7c7140fc056e7bcaf77e192b621d79b/PROJECT/IMAGES/space%20battle.jpg" alt="FM_pic">
</p>


## SUMMARY ##
 The handhed gaming console is simulated using SIMULIDE software. The development board Arduino UNO based out of ATMEGA 328P , which is the brain of the console is used.The cooling system for the console and the battery is used to keep the temoerature in limit. The RTD 2 wire sensor is used to capture the temperature. The DC brushless motor ( BDLC) is used for effective ventilation purpose. The OLED screen acts as the face of the console, where the game play is displayed. The piezo buzzer is used for the game play audio output. This gives the user an immersive experience. 
 
 | STORYLINE |  |
 |---| ---|
 | The galaxy is under the threat of a unknown alien invasion. As the guardian of the galaxy its your duty to save the galaxy. The invaders have powerful weapons though, with smart and strong mind stop the invasion.Your ship can only take 5 attacks. <br> <h2><p align="center">YOUR THE GUARDIAN, Guard your galaxy!</p> </h2>| ![game](https://github.com/Y-133/M2-EmbSys/blob/0bc6c02fcb55fb9eec4579e5df1970e94660ea11/PROJECT/IMAGES/GAME%20TIME.jpg) |
|<h2>GAMEPLAY: </h2>
The gameplay of Spacewar! involves two monochrome spaceships called "the needle" and "the wedge", each controlled by a player, attempting to shoot one another while maneuvering on a two-dimensional plane. <br> The ships have a limited number of lives. The player controls one of the ships and must attempt to shoot down the other ship while avoiding a collision with the missiles or the opposing ship. | |


---------------------------------------------------------------------------
## Folder structure ##
| Folder | Description|
| --- | --- |
| 1_Requirements | Documents detailing requirements and research |
| 2_Architecture | Documents specifying design details |
| 3_Implementation | All code and documentation |
| 4_Test_plan | Documents with test plans and procedures |
| 5_Report | Document describing all about the project |
| 6_ImagesAndVideos | Contains the video explaining the project |
| 7_other | The folder contains other additional information about the project |
| README| This file describes the overview of the project and all the required components to know about the project.

----------------------------------------------------------------------------
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
