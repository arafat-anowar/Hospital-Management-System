#include<admin.h>
#include <stdio.h>
#include<windows.h>

#include "login.h"
#include "receptionist.h"
#include "doctor.h"
#include "patient.h"
#include "bloodbank.h"
// #define clear_screen system("cls")

void admin_dashboard_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                        ADMIN PORTAL                           |\n");
    printf("+---------------------------------------------------------------+\n");
}
void admin_dashboard(char user_id[]){
    system("cls");
    welcome_screen();
    admin_dashboard_screen();
    printf("Welcome %s",user_id);
}