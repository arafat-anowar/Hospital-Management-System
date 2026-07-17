# ==========================================================
# Makefile for Hospital Management System
# ==========================================================

CC = gcc

CFLAGS = -Wall -Wextra -Iincludes

SRC = main.c \
	src/admin.c \
	src/login.c \
	src/doctor.c \
	src/receptionist.c \
	src/patient.c \
	src/bloodbank.c \

OBJ = $(patsubst %.c,build/%.o,$(SRC))

TARGET = bin/hospital.exe

# ==========================================================

all: $(TARGET)

$(TARGET): $(OBJ)
	mkdir -p bin
	$(CC) $(OBJ) -o $(TARGET)

build/%.o: %.c
	mkdir -p build
	mkdir -p build/src
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf build
	rm -rf bin

rebuild: clean all

.PHONY: all run clean rebuild