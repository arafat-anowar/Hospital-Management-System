// Global Header File
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

// Local Header File
#include "includes\login.h"
#include "includes\admin.h"
#include "includes\receptionist.h"
#include "includes\doctor.h"
#include "includes\patient.h"
#include "includes\bloodbank.h"

// Functions
void welcome_screen();
void main_menu();
char navigate_to_menu(char choice);
// Macros
#define clear_screen system("cls")
#define input_capture _getch()
int main()
{
    main_menu();
    return 0;
}
char navigate_to_menu(char choice)
{
   // Redirect user based on the selected menu option
    switch (choice)
    {
    case '1':
        book_an_appointment();
        break;
    case '2':
        login();
        break;
    case '3':
        blood_bank_info();
        break;
    case '4':
        chatbot();
        break;
    }
}
void main_menu()
{
    clear_screen;
    welcome_screen();
    // This Shows Main Menu
    printf("+---------------------------------------------------------------+\n");
    printf("| Enter Your Choice:                                            |\n");
    printf("| 1 -> Book an Appointment                                      |\n");
    printf("| 2 -> Login                                                    |\n");
    printf("| 3 -> Blood Bank Information                                   |\n");
    printf("| 4 -> Chatbot                                                  |\n");
    printf("+---------------------------------------------------------------+\n");
    printf("\n");
    // Take Input from user and check the input is between 1 to 4
    char choice;
    do
    {
        choice = input_capture;
    } while (choice < '1' && choice > '4');
    navigate_to_menu(choice);
}
// This Shows Welcome Screen
void welcome_screen()
{
    printf("#################################################################\n");
    printf("#                                                               #\n");
    printf("# ============================================================= #\n");
    printf("# |            HOSPITAL MANAGEMENT SYSTEM                     | #\n");
    printf("# ------------------------------------------------------------- #\n");
    printf("# |             Welcome to Our Hospital                       | #\n");
    printf("# ------------------------------------------------------------- #\n");
    printf("# |      \"Care for Life, Service with Humanity\"               | #\n");
    printf("# ============================================================= #\n");
    printf("#                                                               #\n");
    printf("#################################################################\n");
    printf("\n");
    printf("\n");
}