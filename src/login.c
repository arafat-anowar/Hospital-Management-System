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
// LOGIN SOURCE CODE START

// Header File Add
#include <login.h>

//Global Variable
char user_id[20];

// Redirect User To Their Dashboard
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
        clear_screen;
        login_invaild_screen();
        screen_delay;
        login();
        break;
    }
}
// Login Details Verify
char login_verify(char user_name[], char user_password[])
{
    char user_id_from_file[20], user_name_from_file[30], user_password_from_file[30], role_from_file[20];
    int found = 0;
    // Open userDBS
    FILE *file_open_for_credentials_verify;
    file_open_for_credentials_verify = fopen("database\\userDBS.txt", "r");
    while (fscanf(file_open_for_credentials_verify, "%19s %29s %29s %19s", user_id_from_file, user_name_from_file, user_password_from_file, role_from_file) == 4)
    {
        // Verify Userid and Password
        if (strcmp(user_name, user_name_from_file) == 0 && strcmp(user_password, user_password_from_file) == 0)
        {
            found = 1;
            break;
        }
    }
    // Close file
    fclose(file_open_for_credentials_verify);
    strcpy(user_id, user_id_from_file);
    // Return the role
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
// Login Invaild Screen Show
void login_invaild_screen()
{
    system("cls");
    printf("+---------------------------------------------------------------+\n");
    printf("|                 Invalid Username or Password!                 |\n");
    printf("+---------------------------------------------------------------+\n");
}
// Login Success Screen Show
void login_success_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                         LOGIN SUCCESS                         |\n");
    printf("+---------------------------------------------------------------+\n");
}
// Login Portal Screen Show
void login_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                        LOGIN PORTAL                           |\n");
    printf("+---------------------------------------------------------------+\n");
}
// Login 
void login()
{
    system("cls");
    welcome_screen();
    login_screen();
    // Take Input Username and Password
    char user_name[30], user_password[30];
    printf("Enter Your Username : ");
    scanf("%s", user_name);
    printf("\n");
    printf("Enter Your Password : ");
    scanf("%s", user_password);
    // Pass Credentials For Verify
    char role = login_verify(user_name, user_password);
    // Pass Role For Redirect Their Dashboard
    redirect_to_dashboard(role);
}
// LOGIN SOURCE CODE END