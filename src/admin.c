#include <admin.h>
#include <stdio.h>
#include <windows.h>

#include "login.h"
#include "receptionist.h"
#include "doctor.h"
#include "patient.h"
#include "bloodbank.h"
// #define clear_screen system("cls")
void manage_doctor()
{
    printf("Working!");
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
char admin_dashboard_redirect_menu(choice)
{
    switch (choice)
    {
    case '1':
        manage_doctor();
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
    printf("+------------------------[ MAIN MENU ]--------------------------+\n");
    printf("| [1]   -> Manage Doctors                                       |\n");
    printf("| [2]   -> Manage Receptionist                                  |\n");
    printf("| [3]   -> Manage Patient                                       |\n");
    printf("| [4]   -> Manage Appoinment                                    |\n");
    printf("| [5]   -> Manage Blood Bank                                    |\n");
    printf("| [6]   -> Search User By ID                                    |\n");
    printf("| [ESC] -> Main Menu                                            |\n");
    printf("+---------------------[PRESS YOUR CHOICE]-----------------------+\n");
    char choice;
    do
    {
        choice = input_capture;
    } while (choice < '1' && choice > '7' || choice != ESC);
    admin_dashboard_redirect_menu(choice);
}
void admin_dashboard_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                        ADMIN PORTAL                           |\n");
    printf("+---------------------------------------------------------------+\n");
}
void admin_dashboard(char user_id[])
{
    clear_screen;
    welcome_screen();
    admin_dashboard_screen();
    printf("Welcome %s", user_id);
    admin_menu();
}