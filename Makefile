all:
	gcc -o bubble-up bubble-up.c
	gcc -o bubble-down bubble-down.c
clean:
	rm bubble-up
	rm bubble-down
