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
#ifndef ADMIN_H
#define ADMIN_H
// Global Header Files
#include <stdio.h>
#include <windows.h>
#include <unistd.h>
// Local Header Files
#include "login.h"
#include "receptionist.h"
#include "doctor.h"
#include "patient.h"
#include "bloodbank.h"
// Macros
#define clear_screen system("cls")
#define input_capture _getche()
#define screen_delay sleep(1)
#define ESC 27
// Declare Funtions Prototype Which Are In admin.c
void admin_dashboard_screen();
void admin_dashboard(char user_id[]);
void welcome_screen();
void admin_menu();
void main_menu();
void admin_dashboard_redirect_menu(char choice);
void welcome_screen();
void manage_doctor_menu();
void manage_doctor(char choice);
void add_doctor();
void delete_doctor();
void view_doctor();
void manage_receptionist();
void manage_patient();
void manage_appointments();
void manage_bills();
void search_user_by_id();
#endif