#include<receptionist.h>
#include <stdio.h>
#include<windows.h>
#include "login.h"
#include "admin.h"
#include "doctor.h"
#include "patient.h"
#include "bloodbank.h"
// #define clear_screen system("cls")

void receptionist_dashboard_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                    RECEPTIONIST PORTAL                        |\n");
    printf("+---------------------------------------------------------------+\n");
}
void receptionist_dashboard(char user_id[]){
    system("cls");
    // welcome_screen();
    receptionist_dashboard_screen();
    printf("Welcome %s",user_id);
}