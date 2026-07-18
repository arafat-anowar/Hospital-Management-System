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
	src/bloodbank.c

OBJ = build/main.o \
	build/admin.o \
	build/login.o \
	build/doctor.o \
	build/receptionist.o \
	build/patient.o \
	build/bloodbank.o

TARGET = bin/hospital.exe

# ==========================================================

all: $(TARGET)

$(TARGET): $(OBJ)
	mkdir -p bin
	$(CC) $(OBJ) -o $(TARGET)

build/main.o: main.c
	mkdir -p build
	$(CC) $(CFLAGS) -c $< -o $@

build/%.o: src/%.c
	mkdir -p build
	$(CC) $(CFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf build
	rm -rf bin

rebuild: clean all

.PHONY: all run clean rebuild