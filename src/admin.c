#include <admin.h>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include "login.h"
#include "receptionist.h"
#include "doctor.h"
#include "patient.h"
#include "bloodbank.h"
#define clear_screen system("cls")
#define input_capture _getche()

// Global Variable For User ID
char user_id[20];
void view_doctor(){
    printf("Workin!");
}
void delete_doctor(){
    printf("Workin!");
}
void add_doctor(){
    printf("Workin!");
}
void manage_doctor_menu()
{
    clear_screen;
    welcome_screen();
    admin_dashboard_screen();
    printf("+----------------------[ MANAGE DOCTORS ]-----------------------+\n");
    printf("| [1]   -> Add Doctors                                          |\n");
    printf("| [2]   -> Delete Doctors                                       |\n");
    printf("| [3]   -> View Doctors                                         |\n");
    printf("| [ESC] -> Back to Admin Menu                                   |\n");
    printf("+---------------------[PRESS YOUR CHOICE]-----------------------+\n");
    char choice;
    do
    {
        choice = input_capture;
    } while (choice < '1' && choice > '3');
    manage_doctor(choice);
}
void manage_doctor(char choice)
{
    switch (choice)
    {
    case '1':
        add_doctor();
        break;
    case '2':
        delete_doctor();
        break;
    case '3':
        view_doctor();
        break;
    case ESC:
        admin_menu();
        break;
    }
}
void manage_receptionist()
{
    printf("Working!");
}
void manage_patient()
{
    printf("Working!");
}
void manage_appointments()
{
    printf("Working!");
}
void manage_bills()
{
    printf("Working!");
}
void search_user_by_id()
{
    printf("Working!");
}
void admin_dashboard_redirect_menu(char choice)
{
    switch (choice)
    {
    case '1':
        manage_doctor_menu();
        break;
    case '2':
        manage_receptionist();
        break;
    case '3':
        manage_patient();
        break;
    case '4':
        manage_appointments();
        break;
    case '5':
        manage_bills();
        break;
    case '6':
        search_user_by_id();
        break;
    case ESC:
        main_menu();
        break;
    }
}
void admin_menu()
{
    clear_screen;
    welcome_screen();
    admin_dashboard_screen();
    printf("Welcome %s\n", user_id);
    printf("+-----------------------[ ADMIN MENU ]--------------------------+\n");
    printf("| [1]   -> Manage Doctors                                       |\n");
    printf("| [2]   -> Manage Receptionist                                  |\n");
    printf("| [3]   -> Manage Patient                                       |\n");
    printf("| [4]   -> Manage Appoinment                                    |\n");
    printf("| [5]   -> Manage Blood Bank                                    |\n");
    printf("| [6]   -> Search User By ID                                    |\n");
    printf("| [ESC] -> Logout                                               |\n");
    printf("+---------------------[PRESS YOUR CHOICE]-----------------------+\n");
    char choice;
    do
    {
        choice = input_capture;
    } while (choice < '1' && choice > '7');
    admin_dashboard_redirect_menu(choice);
}
void admin_dashboard_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                        ADMIN PORTAL                           |\n");
    printf("+---------------------------------------------------------------+\n");
}
void admin_dashboard(char userid[])
{
    user_id[20]=user_id;
    clear_screen;
    welcome_screen();
    admin_dashboard_screen();
    admin_menu();
}