targets = konventor.bin 
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean: rm -rf dist
prep: mkdir dist
compile: konventor.bin

konventor.bin : src/konventor.c
    $(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
    ./dist/konventor.bin
doxygen:
    doxygen Doxyfile
format: #TODO

tidy: # TODO
