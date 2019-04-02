import random

file = open("Random.txt2", "w")

for x in range(10000):
    if x == 0: 
        file.write("10000\n")
    else: 
        num = str(10000-x)
        file.write(num + "\n")

file.close()