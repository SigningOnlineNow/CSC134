# CSC-134-0001
# Andrew Norris
# M2LAB2
# Turtle module
# This is a Python Program

from turtle import *

screen = Screen()
screen.bgcolor("black")

t = Turtle()
t.pencolor("blue")
t.pensize(3)

t.fillcolor("brown")
t.begin_fill()
for side in range(4):
    t.forward(100)
    t.right(90)
t.end_fill()

# put the roof on the house
for side in range(3):
    t.forward(100)
    t.left(120)

t.penup()
t.forward(300)
t.pendown()
for mycolor in ("blue","yellow","green"):
    t.color(mycolor)
    t.forward(100)
    t.right(120)

#worlds slowest circle
for side in range(36):
    t.forward(10)
    t.left(10)

t.circle(100,360) # 180 degrees is half of a circle












