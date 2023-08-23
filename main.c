#include <stdio.h>
#include <string.h>
#define N 100

int home_screen();
void about_us();
int admin();

int main()
{
home:
    int home_menu = home_screen();
    if (home_menu == 1)
    {
        if (admin(0) == 3)
        {
            goto home;
        }
    }
    else if (home_menu == 2)
    {
    }
    else
    {
        about_us();

        int enter = 0;
        while (enter != 1)
        {
            scanf(" %d", &enter);
        }
        goto home;
    }
    return 0;
}

int home_screen()
{
    int x;
    while (1)
    {
        printf("\n\t\t\t\t     Movie Ticket Booking System       \t\t\t\t\t\n\n\n");
        printf("\t\t\t                 Department Of CSE                 \t\n");
        printf("\t\t\t          United International University        \t\n\n");
        printf("\t\t\t=================================================\t\t\t\t\n\n\n");
        printf("\t\t\t\tSelect The Operation Which You Want \t\t\n\n");
        printf("\t\t____________________________________________________________________\t\t\t\n");
        printf("\t\t|\t\t\t\t          \t\t\t    |\n");
        printf("\t\t|\t\t\t\t          \t\t\t    |\n");
        printf("\t\t|        1 ) Admin\t\t\t   2 ) Customer             |\n");
        printf("\t\t|\t\t\t\t          \t\t\t    |\n");
        printf("\t\t|\t\t\t   3 ) About Us\t\t\t\t    |\n");
        printf("\t\t|\t\t\t\t          \t\t\t    |\n");
        printf("\t\t|___________________________________________________________________|\t\t\t\n\n");
        printf("\t\t==>: ");
        scanf(" %d", &x);
        if (x == 1 || x == 2 || x == 3)
        {
            break;
        }
    }
    return x;
}
int admin()
{
    int adm;
    printf("\n\t\tWelcome to Admin Panel!!!\n\n\n");
    printf("\t\t1 ) Login\n\n");
    printf("\t\t2 ) Signup\n\n");
    printf("\t\t3 ) Back to Home page\n\n");
    printf("\t\tChoose your Option ==> ");
    scanf(" %d", &adm);
    switch (adm)
    {
    case 3:
        return adm;
        break;
    default:
        break;
    }
}
void about_us()
{
    printf("\n\n\t\t\t\t\t    |      About Developers       |\t\n");
    printf("\n\t\t\t\t\t\t    Abdullah Khan  \n");
    // printf("\t\t\t\t\t\tProgrammer & Developer\n");
    printf("\n\t\t\t\t\t\t Dept. of CSE , UIU\n\n");
    printf("\n\t\tPress 1 to Return to Homepage............\n");
    printf("\t\t==>: ");
}
