# Doom Cricket
The game of violent fantasy cricket.  




# Developer update 11th October 2023

I will be spending 60 sessions to create a new prototype.  
- Game engine will be written in C  

Sessions Overview:

Sessions 1-6: Git Refresher & C Programming Basics.
Sessions 7-10: Introduction to Data Structures in C.
Sessions 11-55: Game Development, Data Structures Integration, and Data Capture.
Sessions 56-60: Preparing for Web Deployment, WebAssembly, and Online Feedback Collection.
Sessions 1-55: [Unchanged from Plan 3.0]

Sessions 56-60: Web Deployment and Feedback Collection
56. Session 56: Introduction to WebAssembly and Emscripten: How to compile C code to run on the web.

Session 57: Compiling your game using Emscripten, creating a basic HTML/JS wrapper to host your game.
Session 58: Setting up a basic server and hosting configuration for www.doomcricket.com. (Consider using a platform like Netlify or Vercel for easy deployment).
Session 59: Deploy the game prototype on www.doomcricket.com. Ensure the game runs smoothly, and add a feedback form for users (using a tool like Google Forms).
Session 60: Analyze the initial feedback, test data collection mechanisms, and make any urgent refinements to the game or deployment setup.




# Credits

## Fonts
Fette Trump-Deutsch
Blood Crow

## Images
Cricket icons from AdobeStock_38041298  






# Style Guide  

## Colour palette

To arrive at the colour palette I first made everything as 'proper' colour as I could,  
then inverted it.  

### Greens

2c854f dark oval green  

### Wood
d7cb89 willow wood  

### Cricket ball red  
E43414


# DevLog

## Day One

Decided on the concept.  

Doom Cricket.  

Found four pictures which bring the concept to life:  

- Viv Richards  
- Battle Chess  
- Blood Bowl  
- Hyborian Arena  

## Day Two

Looked up a tutorial on [pixel artwork](http://www.yarrninja.com/pixeltutorial/index.html).   

Made a grass tile in Aseprite.  

Made a tileset in Tiled.  

Put it on a map in Tiled.  

Exported the map as an image.  

Found some cricket icons and placed, trying to make it look like they are doing battle.    

Inverted colour palette.  


## Day Three

Created a Lucid diagram about how I will spend time.

Tricked it up  a bit.  


## Day Four  

Worked on the Foundry VTT module.  

Created release and manifest URL so system can be installed by Foundry VTT.  

Development of rules (system) and game (world) is now possible.  

I am struggling a bit with the release cycle and also how to simply change the character sheet.  

More research required but I *think* I have the scaffolding in place.  


## Day Five

The dimensions of the Adelaide Oval are:  

167 x 124 metres , 2100 sqm  

A cricket pitch is 20m long and 3m wide  

I need to make a map which incorporates these dimensions somehow.  

I will try to divide everything by 3:  

height of oval =  167/3 = 56  
width of oval = 41  
length of pitch = 7  
with of pitch = 1  

Map dimensions  

Tile width and height 32 px  

41 width =  1312 (at double is 2624)  
56 height = 1792 (at double is 3584)


## Day Six  

Having trouble defining attributes for the actors.  

## Day Ten

Decided to rebuild the entire Foundry back-end and use the Simple Worldbuilding System.  
This will allow for more rapid prototyping.  
Successfully deployed this and successfully tested locally and on The Forge.  
Adjusted oval dimensions.  
Created wicket tile.  


## Day Eleven

Continued progress on basic assets for the game. Made a ball and a batsman and an
umpire. Did some troubleshooting to fix the way actors are created TODO- must update the package itself
(by copying doomcricket from local into the remote).   
