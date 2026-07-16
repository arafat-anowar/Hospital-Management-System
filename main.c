//Global Header File 
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

//Local Header File
#include "includes\login.h"
#include "includes\admin.h"
#include "includes\receptionist.h"
#include "includes\doctor.h"
#include "includes\patient.h"
#include "includes\bloodbank.h"

//Functions
void welcome_screen();
void main_menu();

// Macros
#define clear_screen system("cls")
int main(){
    main_menu();
    return 0;
}
void main_menu(){
    clear_screen;
    welcome_screen();
    printf("+---------------------------------------------------------------+\n");
    printf("| Enter Your Choice:                                            |\n");
    printf("| 1 -> Book an Appointment                                      |\n");
    printf("| 2 -> Login                                                    |\n");
    printf("| 3 -> Blood Bank Information                                   |\n");
    printf("| 4 -> Chatbot                                                  |\n");
    printf("+---------------------------------------------------------------+\n");
    printf("\n");
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