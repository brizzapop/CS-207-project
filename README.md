# CS-207-project-arduino-preset-piano
This is a beginner project for my computer science course at the University of Regina.
The project is called Preset Piano Arduino and it is built from a previously made project called "Unravel Preset Piano Easy Arduino (Even A Ghoul Can Make It)" by ExeCuteLi. This project is essentially a replication of a piano and when a button is pressed, a preset song is played from the piezo speaker. In the original project I found online, the song was an Anime theme song called “Unravel” from a show called Tokyo Ghoul. To make this project more of my own, I decided to choose a different song, which is “Another Brick in the Wall Pt. 2” by Pink Floyd. 
This project uses pushbuttons as “piano keys” and each pushbutton represents a different note, so it is replicating a piano. When a button is pressed, the piezo speaker on the breadboard plays a sound. One of the pushbuttons is different from the others because when it is pushed, a preprogrammed song plays in full, but does not loop. 

<img src="img/April 10.jpg">

This is an image of what my hardware looked like when using ExeCuteLi's circuit:

<img src="img/March 22-2.jpg">

<img src="img/March 24-1.jpg">

# Repository Contents
/src - this includes the software for the device (.ino files)

/img - these are the images that are used in the readme file

/LICENSE - the license file

/README.md - the file you are reading now

# Requirements and Materials
The pitches.h file must be included in your code. This is where all of the note definitions are so that each note you call plays a specific tone. Save the pitches.h file into the same folder as the project code.

  Bill of materials:
  - Arduino UNO
  - breadboard
  - 1 x piezo speaker
  - 1 x red LED
  - 1 x 560 ohm resistor
  - 3 x 10k ohm resistor
  - 3 x 2.2k ohm resistor
  - 6 x pushbutton
  - 10 x jumper wires
 
# Build Instructions
The build is quite simple if you follow this breadboard diagram:

<img src="img/preset piano breadboard 2.png">

Make sure that the resistors are connected to the negative rail and that the jumper wire from pin 13 is connected to the same rail as the piezo speaker. 

# Usage
Once you have the code uploaded to your Arduino and your hardware built, all you need to do is press the button on the very left had side of the board and it will start playing the preset song of "Another Brick in the Wall, Pt. 2." Press any other button on the board and it will play a specific note and the LED will light up. Have fun folks and try coding your own song into it!

# Credits
This is the project that I based mine off of and used the code from:

ExeCuteLi (May 25, 2018). Unravel Preset Piano Easy Arduino (Even a Ghoul Can Make It). [online] Arduino Project Hub. Available at: https://create.arduino.cc/projecthub/executeli/unravel-preset-piano-easy-arduino-even-a-ghoul-can-make-it-17c472?ref=platform&ref_id=424_trending__beginner_&offset=217. [Accessed 24 January, 2020].

Here is the sheet music for "Another Brick in the Wall, Pt. 2" that helped me when coding the song:

Sheet Music Direct. Another Brick in the Wall, Part 2. Words and Music by Roger Waters (1979). Published by Hal Leonard. [online: digital sheet music] Sheet Music Direct. Available at: https://www.sheetmusicdirect.com/se/ID_No/96962/Product.aspx. [Accessed 30 March, 2020].
