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

#define input_capture _getche()
#define clear_screen system("cls")
#define ESC 27
void admin_dashboard_screen();
void admin_dashboard(char user_id[]);
void welcome_screen();
void admin_menu();
void main_menu();
char admin_dashboard_redirect_menu(choice);
void welcome_screen();
void manage_doctor();
void manage_receptionist();
void manage_patient();
void manage_appointments();
void manage_bills();
void search_user_by_id();
#endif