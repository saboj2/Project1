import random

file = open("Random.txt", "w")

for x in range(10000):
    if x == 0: 
        file.write("10000\n")
    else: 
        num = str(random.randint(1,100))
        file.write(num + "\n")

file.close()