import math
print("Enter the coordinates x and y")
x = float(input("x = "))
y = float(input("y = "))
if (x > -1 and x < 1 and y > 0 and y < 1):
    if (y >= x):
        if (y >= -x):
            print("The point is belong to the area")
        else:
            print("The point doesn't belong to the area")
    else:
        print("The point doesn't belong to the area")        
else:
    print("The point doesn't belong to the area")