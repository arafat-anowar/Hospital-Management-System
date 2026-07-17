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

// Blood Group Not Found Screen Show
void blood_group_not_found_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|                  BLOOD GROUP NOT AVAILABLE                    |\n");
    printf("+---------------------------------------------------------------+\n");
    printf("\n");
}
// Search Result Screen Show
void search_result_screen()
{
    printf("=================================================================\n");
    printf("                         SEARCH RESULT                         \n");
    printf("=================================================================\n");
    printf("\n\n");
}
// Return Menu Screen Show
void return_menu_screen()
{
    printf("+---------------------------------------------------------------+\n");
    printf("|               PRESS [ESC] TO RETURN TO MAIN MENU              |\n");
    printf("+---------------------------------------------------------------+\n");
}
// Blood Group Check
void show_blood_available_information(char location[], char blood_group[])
{
    clear_screen;
    welcome_screen();
    int person_number = 1, found = 0;
    char location_from_file[30], blood_group_from_file[10], contact_number_from_file[15], contact_person_from_file_first_name[30], contact_person_from_file_last_name[30];
    // Open bloodbankDBS File
    FILE *file_open_for_show_blood_group;
    file_open_for_show_blood_group = fopen("database\\bloodbankDBS.txt", "r");
    search_result_screen();
    while (fscanf(file_open_for_show_blood_group, "%29s %9s %14s %29s %29s", location_from_file, blood_group_from_file, contact_number_from_file, contact_person_from_file_first_name, contact_person_from_file_last_name) != EOF)
    {
        // Print Results
        if (strcmp(location_from_file, location) == 0 && strcmp(blood_group_from_file, blood_group) == 0)
        {
            found = 1;
            printf("+-----------------------[PERSON - %d]----------------------------+\n", person_number);
            printf("| [NAME] -> %s %s                                                \n", strupr(contact_person_from_file_first_name), strupr(contact_person_from_file_last_name));
            printf("| [MOBILE] -> %s                                                 \n", contact_number_from_file);
            printf("+---------------------------------------------------------------+\n");
            printf("\n");
            person_number++;
        }
    }
    // If Blood Not Available Show That
    if (found == 0)
    {
        blood_group_not_found_screen();
    }
    // File Close
    fclose(file_open_for_show_blood_group);
    char choice;
    return_menu_screen();
    choice = input_capture;
    if (choice == ESC)
        main_menu();
}
// Blood Bank Menu
void blood_bank_info()
{
    clear_screen;
    welcome_screen();
    char location[30], blood_group[4];
    // Shows 8 Divisions
    printf("+-----------------------[ BLOOD BANK ]--------------------------+\n");
    printf("| [1] -> BARISAL                        [2] -> CHITTAGONG       |\n");
    printf("| [3] -> DHAKA                          [4] -> KHULNA           |\n");
    printf("| [5] -> MYMENSINGH                     [6] -> RAJSHAHI         |\n");
    printf("| [7] -> RANGPUR                        [8] -> SYLHET           |\n");
    printf("|                       [ESC] -> Exit                           |\n");
    printf("+---------------------[PRESS YOUR CHOICE]-----------------------+\n");
    // Take Input
    char choice;
    do
    {
        choice = input_capture;
    } while (choice < '1' && choice > '8');
    // Store The Location
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
    // Show All Blood Groups
    printf("+-----------------------[ BLOOD BANK ]--------------------------+\n");
    printf("| [1] -> A+        [2] -> A-        [3] -> B+        [4] -> B-  |\n");
    printf("| [5] -> AB+       [6] -> AB-       [7] -> O+        [8] -> O-  |\n");
    printf("|                       [ESC] -> Exit                           |\n");
    printf("+---------------------[PRESS YOUR CHOICE]-----------------------+\n");
    // Take Input
    do
    {
        choice = input_capture;
    } while (choice < '1' && choice > '8');
    // Store The Blood Group
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
// BLOODBANK SOURCE CODE END