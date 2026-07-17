#ifndef BLOODBANK_H
#define BLOODBANK_H
// Global Header Files
#include <stdio.h>
#include <windows.h>
#include <unistd.h>
// Local Header Files
#include "bloodbank.h"
// Macros
#define clear_screen system("cls")
#define input_capture _getche()
#define screen_delay sleep(1)
#define ESC 27
// Declare Funtions Prototype Which Are In bloodbank.c
void blood_bank_info();
#endif