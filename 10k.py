import random

file = open("Random2.txt", "w")

for x in range(10001):
    if x == 0: 
        file.write("10000\n")
    elif x < 5000:
        num = str(random.randint(0,4999))
        file.write(num + "\n")
    else:
        num = str(random.randint(5000,10001))
        file.write(num + "\n") 

file.close()