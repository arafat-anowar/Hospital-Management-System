#include <login.h>
#include <stdio.h>
#include <windows.h>
#include "admin.h"
#include "receptionist.h"
#include "doctor.h"
#include "patient.h"
#include "bloodbank.h"
// #define system("cls"); system("cls")

char user_id[20];

// redirect user to their dashboard
void redirect_to_dashboard(char role)
{
    switch (role)
    {
    case 'A':
        clear_screen;
        login_success_screen();
        screen_delay;
        admin_dashboard(user_id);
        break;
    case 'R':
        clear_screen;
        login_success_screen();
        screen_delay;
        receptionist_dashboard(user_id);
        break;
    case 'D':
        clear_screen;
        login_success_screen();
        screen_delay;
        doctor_dashboard(user_id);
        break;
    case 'P':
        clear_screen;
        login_success_screen();
        screen_delay;
        patient_dashboard(user_id);
        break;
    case 'N':
        system("cls");
        login_invaild_screen();
        sleep(1);
        login();
        break;
    }
}
char login_verify(char user_name[], char user_password[])
{
    char user_id_from_file[20], user_name_from_file[30], user_password_from_file[30], role_from_file[20];
    int found = 0;
    // open userDBS
    FILE *file_open_for_credentials_verify;
    file_open_for_credentials_verify = fopen("database\\userDBS.txt", "r");
    while (fscanf(file_open_for_credentials_verify, "%19s %29s %29s %19s", user_id_from_file, user_name_from_file, user_password_from_file, role_from_file) == 4)
    {
        // verify userid and password
        if (strcmp(user_name, user_name_from_file) == 0 && strcmp(user_password, user_password_from_file) == 0)
        {
            found = 1;
            break;
        }
    }
    // close file
    fclose(file_open_for_credentials_verify);
    strcpy(user_id, user_id_from_file);
    // return the role
    if (found == 1)
    {
        if (strcmp(role_from_file, "Admin") == 0)
        {
            return 'A';
        }
        else if (strcmp(role_from_file, "Receptionist") == 0)
        {
            return 'R';
        }
        else if (strcmp(role_from_file, "Doctor") == 0)
        {
            return 'D';
        }
        else if (strcmp(role_from_file, "Patient") == 0)
        {
            return 'P';
        }
    }
    else
    {
        return 'N';
    }
}
void login_invaild_screen()
{
    system("cls");
    printf("+---------------------------------------------------------------+\n");
    printf("|                 Invalid Username or Password!                 |\n");
    printf("+---------------------------------------------------------------+\n");
}
void login_success_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                         LOGIN SUCCESS                         |\n");
    printf("+---------------------------------------------------------------+\n");
}
void login_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                        LOGIN PORTAL                           |\n");
    printf("+---------------------------------------------------------------+\n");
}
void login()
{
    system("cls");
    welcome_screen();
    login_screen();
    // Take input username and password
    char user_name[30], user_password[30];
    printf("Enter Your Username : ");
    scanf("%s", user_name);
    printf("\n");
    printf("Enter Your Password : ");
    scanf("%s", user_password);
    // Pass credentials for verify
    char role = login_verify(user_name, user_password);
    // pass role for redirect their dashboard
    redirect_to_dashboard(role);
}
