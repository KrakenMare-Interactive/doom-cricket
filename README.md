# Doom Cricket
The game of violent fantasy cricket.  

This repo is for general capturing of activities and asset creation.  

The main deliverable is in a different repo, dedicated to the Foundry VTT system.  


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
