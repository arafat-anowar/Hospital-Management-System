/*
Group - 4
Members :
    FAIZA LABIBA
    ID : 2026-2-60-013
    MD ARAFAT ANOWAR
    ID : 2026-2-60-020
    KAMRUL HASAN RIFAT
    ID : 2026-2-60-022
*/
// Header File Guard
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
#define EOF (-1)
// Declare Funtions Prototype Which Are In bloodbank.c
void blood_bank_info();
void show_blood_available_information(char location[], char blood_group[]);
#endif