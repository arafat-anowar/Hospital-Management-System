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
// BLOODBANK SOURCE CODE START

// Header File Add
#include <bloodbank.h>

void show_blood_available_information(char location[], char blood_group[])
{
    clear_screen;
    welcome_screen();
    int person_number=1;
    char location_from_file[30], blood_group_from_file[10], contact_number_from_file[15], contact_person_from_file[30];
    FILE *file_open_for_show_blood_group;
    file_open_for_show_blood_group = fopen("database\\bloodbankDBS.txt", "r");
    while (fscanf(file_open_for_show_blood_group, "%29s %9s %14s %29s", location_from_file, blood_group_from_file, contact_number_from_file, contact_person_from_file) !=EOF)
    {
        if (strcmp(location_from_file, location) == 0 && strcmp(blood_group_from_file, blood_group) == 0)
        {
            printf("+-----------------------[PERSON - %d]-------------------------+\n",person_number);
            printf("| [NAME] -> %s                                                |\n", strupr(contact_person_from_file));
            printf("| [MOBILE] -> %s                                             |\n", contact_number_from_file);
            printf("| [LOCATION] -> %s                                            |\n", strupr(location_from_file));
            printf("| [BLOOD GROUP] -> %s                                         |\n", strupr(blood_group_from_file));
            printf("+---------------------------------------------------------------+\n");
            printf("\n");
            person_number++;
        }
    }
    fclose(file_open_for_show_blood_group);
}
void blood_bank_info()
{
    clear_screen;
    welcome_screen();
    char location[30], blood_group[4];
    printf("+-----------------------[ BLOOD BANK ]--------------------------+\n");
    printf("| [1] -> BARISAL                        [2] -> CHITTAGONG       |\n");
    printf("| [3] -> DHAKA                          [4] -> KHULNA           |\n");
    printf("| [5] -> MYMENSINGH                     [6] -> RAJSHAHI         |\n");
    printf("| [7] -> RANGPUR                        [8] -> SYLHET           |\n");
    printf("|                       [ESC] -> Exit                           |\n");
    printf("+---------------------[PRESS YOUR CHOICE]-----------------------+\n");
    char choice;
    do
    {
        choice = input_capture;
    } while (choice < '1' && choice > '8');
    switch (choice)
    {
    case '1':
        strcpy(location, "Barisal");
        break;
    case '2':
        strcpy(location, "Chittagong");
        break;
    case '3':
        strcpy(location, "Dhaka");
        break;
    case '4':
        strcpy(location, "Khulna");
        break;
    case '5':
        strcpy(location, "Mymensingh");
        break;
    case '6':
        strcpy(location, "Rajshahi");
        break;
    case '7':
        strcpy(location, "Rangpur");
        break;
    case '8':
        strcpy(location, "Sylhet");
        break;
    case ESC:
        main_menu();
        break;
    }
    clear_screen;
    welcome_screen();
    printf("+-----------------------[ BLOOD BANK ]--------------------------+\n");
    printf("| [1] -> A+        [2] -> A-        [3] -> B+        [4] -> B-  |\n");
    printf("| [5] -> AB+       [6] -> AB-       [7] -> O+        [8] -> O-  |\n");
    printf("|                       [ESC] -> Exit                           |\n");
    printf("+---------------------[PRESS YOUR CHOICE]-----------------------+\n");
    do
    {
        choice = input_capture;
    } while (choice < '1' && choice > '8');
    switch (choice)
    {
    case '1':
        strcpy(blood_group, "A+");
        break;
    case '2':
        strcpy(blood_group, "A-");
        break;
    case '3':
        strcpy(blood_group, "B+");
        break;
    case '4':
        strcpy(blood_group, "A-");
        break;
    case '5':
        strcpy(blood_group, "AB+");
        break;
    case '6':
        strcpy(blood_group, "AB-");
        break;
    case '7':
        strcpy(blood_group, "O+");
        break;
    case '8':
        strcpy(blood_group, "O-");
        break;
    case ESC:
        blood_bank_info();
        break;
    }
    show_blood_available_information(location, blood_group);
}