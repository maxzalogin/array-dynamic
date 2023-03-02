CC=gcc
CFLAGS=-Wall -Wextra -Werror
BUILD=build/
SRC=src/

main:
	$(CC) $(CFLAGS) $(SRC)main.c -o $(BUILD)main
clean:
	rm $(BUILD)main

run:
	build/main