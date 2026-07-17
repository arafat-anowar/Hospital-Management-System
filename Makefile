# ==========================================================
# Hospital Management System - Makefile
# ==========================================================

CC = gcc
CFLAGS = -Wall -Wextra -Iincludes

TARGET = bin/hospital.exe

SRC = $(wildcard src/*.c)
OBJ = $(patsubst src/%.c,build/%.o,$(SRC))
OBJ += build/main.o

# ==========================================================

all: directories $(TARGET)

directories:
directories:
	mkdir -p build
	mkdir -p bin

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

build/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

build/main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

run: all
	.\bin\hospital.exe

clean:
	del /Q build\*.o 2>nul
	del /Q bin\hospital.exe 2>nul

rebuild: clean all
