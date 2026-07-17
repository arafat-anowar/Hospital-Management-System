#include<doctor.h>
#include <stdio.h>
#include<windows.h>
#include "login.h"
#include "admin.h"
#include "receptionist.h"
#include "patient.h"
#include "bloodbank.h"
// #define clear_screen system("cls")

void doctor_dashboard_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                        DOCTOR PORTAL                          |\n");
    printf("+---------------------------------------------------------------+\n");
}
void doctor_dashboard(char user_id[]){
    system("cls");
    // welcome_screen();
    doctor_dashboard_screen();
    printf("Welcome %s",user_id);
}