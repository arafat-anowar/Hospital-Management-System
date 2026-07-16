#include<login.h>

#define clear_screen system("cls")

void login_invaild_screen()
{
    clear_screen;
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
void login(){

}
