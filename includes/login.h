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
#ifndef LOGIN_H
#define LOGIN_H
// Global Header Files
#include <stdio.h>
#include <windows.h>
#include <unistd.h>
// Local Header Files
#include "admin.h"
#include "receptionist.h"
#include "doctor.h"
#include "patient.h"
// Macros
#define clear_screen system("cls")
#define input_capture _getche()
#define screen_delay sleep(1)
#define ESC 27
// Declare Funtions Prototype Which Are In login.c
void login();
void login_screen();
void login_success_screen();
void login_invaild_screen();
char login_verify(char user_name[], char user_password[]);
void redirect_to_dashboard(char role);
#endif