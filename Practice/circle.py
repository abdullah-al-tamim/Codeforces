import turtle
skk = turtle.Turtle()
num = 6
angle = 360/num
skk.speed(1)
# skk.tiltangle(100)
for i in range(6):
    skk.forward(70)
    # skk.center()
    skk.right(angle)

turtle.done()
