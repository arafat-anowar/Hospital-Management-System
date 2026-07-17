#ifndef LOGIN_H
#define LOGIN_H
#define clear_screen system("cls")
void login();
void login_screen();
void login_success_screen();
void login_invaild_screen();
char login_verify(char user_name[],char user_password[]);
void redirect_to_dashboard(char role);
void welcome_screen();
#endif