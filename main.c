//Global Header File 
#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<windows.h>
#include<time.h>

//Local Header File
#include "includes\login.h"
#include "includes\admin.h"
#include "includes\receptionist.h"
#include "includes\doctor.h"
#include "includes\patient.h"
#include "includes\bloodbank.h"

//Functions
void welcome_screen();
int main(){
    welcome_screen();
    return 0;
}
void welcome_screen()
{
    printf("#################################################################\n");
    printf("#                                                               #\n");
    printf("# ============================================================= #\n");
    printf("# |            HOSPITAL MANAGEMENT SYSTEM                     | #\n");
    printf("# ------------------------------------------------------------- #\n");
    printf("# |             Welcome to Our Hospital                       | #\n");
    printf("# ------------------------------------------------------------- #\n");
    printf("# |      \"Care for Life, Service with Humanity\"               | #\n");
    printf("# ============================================================= #\n");
    printf("#                                                               #\n");
    printf("#################################################################\n");
    printf("\n");
    printf("\n");
}