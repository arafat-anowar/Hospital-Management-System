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
#include <admin.h>

// Global Variable
char user_id[20];

struct doctor doctor[10000];
void genarate_user_id_password(char first_name[],char last_name[],int doctor_id){
    strlwr(strcat(first_name,last_name));
    char user_name[30];
    strcpy(user_name,first_name);
    char role[30]="doc";
    strcat(role,user_id);
    char user_password[30];
    strcpy(user_password,role);
    FILE *file_open_for_add_user_id_and_password;
    file_open_for_add_user_id_and_password=fopen("database\\userDBS.txt","a");
    fprintf(file_open_for_add_user_id_and_password,"\n%d %29s %29s Doctor\n",user_id,user_name,user_password);
    fclose(file_open_for_add_user_id_and_password);
    printf("Your id and password is %s %s",user_name,user_password);
}
int genarate_id()
{
    int genarated_id=3000;
    char first_name_from_file[30], last_name_from_file[30], gender_from_file[10], specialization_from_file[50], qualification_from_file[50], phone_from_file[20], email_from_file[50], schedule_from_file[50];
    int doctor_id_from_file, age_from_file, experience_from_file;
    FILE *file_open_for_genarate_id;
    file_open_for_genarate_id = fopen("database\\doctorDBS.txt", "r");
    while (fscanf(file_open_for_genarate_id, "%d %29s %29s %d %9s %49s %49s %d %19s %49s %49s", &doctor_id_from_file, first_name_from_file, last_name_from_file, &age_from_file, gender_from_file, specialization_from_file, qualification_from_file, &experience_from_file, phone_from_file, email_from_file, schedule_from_file) != EOF)
    {
        genarated_id = doctor_id_from_file;
    }
    fclose(file_open_for_genarate_id);
    return genarated_id;
}
void view_doctor()
{
    printf("Workin!");
}
void delete_doctor()
{
    printf("Workin!");
}
void add_doctor()
{
    printf("Workin!");
    int tmp_id = genarate_id();
    tmp_id++;
    doctor[tmp_id].doctor_id = tmp_id;
    printf("\nEnter Doctor's First Name :");
    scanf("%s", doctor[tmp_id].first_name);
    printf("\nEnter Doctor's Last Name :");
    scanf("%s", doctor[tmp_id].last_name);
    printf("\nEnter Doctor's Age :");
    scanf("%d", &doctor[tmp_id].age);
    printf("\nEnter Doctor's Gender :");
    scanf("%s", doctor[tmp_id].gender);
    printf("\nEnter Doctor's Specialization :");
    scanf("%s", doctor[tmp_id].specialization);
    printf("\nEnter Doctor's Qualification :");
    scanf("%s", doctor[tmp_id].qualification);
    printf("\nEnter Doctor's Experience :");
    scanf("%d", &doctor[tmp_id].experience);
    printf("\nEnter Doctor's Mobile Number :");
    scanf("%s", doctor[tmp_id].phone);
    printf("\nEnter Doctor's Email Address :");
    scanf("%s", doctor[tmp_id].email);
    printf("\nEnter Doctor's Schedule :");
    scanf("%s", doctor[tmp_id].schedule);
    FILE *file_open_for_write_information;
    file_open_for_write_information=fopen("database\\doctorDBS.txt","a");
    fprintf(file_open_for_write_information, "%d %29s %29s %d %9s %49s %49s %d %19s %49s %49s\n",doctor[tmp_id].doctor_id,doctor[tmp_id].first_name,doctor[tmp_id].last_name,doctor[tmp_id].age,doctor[tmp_id].gender,doctor[tmp_id].specialization,doctor[tmp_id].qualification,doctor[tmp_id].experience,doctor[tmp_id].phone,doctor[tmp_id].email,doctor[tmp_id].schedule);
    fclose(file_open_for_write_information);
    genarate_user_id_password(doctor[tmp_id].first_name,doctor[tmp_id].last_name,doctor[tmp_id].doctor_id);
    manage_doctor_menu();
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
void admin_dashboard_redirect_menu(choice)
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
    strcpy(user_id, userid);
    clear_screen;
    welcome_screen();
    admin_dashboard_screen();
    admin_menu();
}