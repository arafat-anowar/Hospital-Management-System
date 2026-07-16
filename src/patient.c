#include<patient.h>
#include <stdio.h>
#include<windows.h>
#include "login.h"
#include "admin.h"
#include "receptionist.h"
#include "doctor.h"
#include "bloodbank.h"
// #define clear_screen system("cls")

void patient_dashboard_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                        DOCTOR PORTAL                          |\n");
    printf("+---------------------------------------------------------------+\n");
}
void patient_dashboard(char user_id[]){
    system("cls");
    // welcome_screen();
    patient_dashboard_screen();
    printf("Welcome %s",user_id);
}