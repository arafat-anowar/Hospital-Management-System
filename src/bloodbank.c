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
// lOGIN SOURCE CODE START

// Header File Add
#include <bloodbank.h>

void blood_bank_info()
{
    clear_screen;
    welcome_screen();
    char location[30], blood_group[10];
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
        location[8] = "Barisal";
        break;
    case '2':
        location[11] = "Chittagong";
        break;
    case '3':
        location[6] = "Dhaka";
        break;
    case '4':
        location[7] = "Khulna";
        break;
    case '5':
        location[11] = "Mymensingh";
        break;
    case '6':
        location[9] = "Rajshahi";
        break;
    case '7':
        location[8] = "Rangpur";
        break;
    case '8':
        location[7] = "Sylhet";
        break;
    case ESC:
        main_menu();
        break;
    }
}