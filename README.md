# Snake Game

Warning this code is not complete yet!!!!!!!

This is a little snake game for the ternimal written in C++

Figure 1 Shows a cartesian plane which best repersents this concept We first start by making a cartesian plane this will not be a physical render on our scene / ternimal / console. But a concept using two for loops we draw an invisible plane this plane then can be used to map functions and points with both y and x values Please do note I have reversed the x and y axis to make it easier to code so the x axis is now the y axis do not worry about this to much its just a misatke on my part Figure 5 shows this reverse as well. Also please note x and y can be positive and negative values i.e

y ∈ ℤ
x ∈ ℤ

                          increase in x
                              |
                              |
                              |
                              |
    decrease in y ____________|____________ increase in y
                              |
                              |
                              |
                              |
                              |
                         decrease in x
                  
                          
                          Figure 1 ⬆︎

Snake Game is not complete yet but either way once the plane is 'drawn' the next step is to draw the " " i.e the empty spaces this cleans the canvas and allows us to paint on it next we draw "#" at the edges of the plane if the snake passes the boundray we check this through an if statement in the statement we compare if the player is in a certain range if they are greater then this range i.e greater then # the game should end and updates the canvas if smaller then '#'then the screen should also end and exit the console. 




# What still needs to be completed ->

Firstly the game still has many unfinished parts such as the fruit generates every time after an input into a console this is unideal due to the player not being able to get the fruit fast enough. 

Secondly The player moves only once each input this needs to be fixed so a contuiness movement is prevlent.

Thidly the players input i.e point accumlates to highr example instead of moving from (0,0) to (1,0) to (2,0) to (3,0) and son the player will accumlate the inputs already i.e (0,0) to (1,0) to (3,0).

Lastly the snake must increase with each consumption of the fruit.


# Other little things -> 

A sound system would be nice

As well as an improvement on the record system and score system.
