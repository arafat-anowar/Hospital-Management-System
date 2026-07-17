# ==========================================================
# Hospital Management System - Makefile
# ==========================================================

CC = gcc
CFLAGS = -Wall -Wextra -Iincludes

TARGET = hospital

SRC = main.c \
      src/admin.c \
      src/bloodbank.c \
      src/doctor.c \
      src/login.c \
      src/patient.c \
      src/receptionist.c

OBJ = $(SRC:.c=.o)

# ==========================================================

all: directories $(TARGET)

directories:
	if not exist build mkdir build
	if not exist bin mkdir bin

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	del /Q *.o 2>nul
	del /Q src\*.o 2>nul
	del /Q $(TARGET).exe 2>nul

run: $(TARGET)
	.\$(TARGET).exe

rebuild: clean all