#include <stdio.h>
#include <string.h>
#define N 100

int home_screen();
void about_us();
// int admin();
void construction();
int return_home();
void customer_mode();
int main()
{
home:
    int home_menu = home_screen();
    if (home_menu == 1)
    {
        construction();
        if (return_home(3) == 1)
        {
            goto home;
        }
    }
    else if (home_menu == 2)
    {
        int option;
        customer_mode();
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            construction();
            if (return_home(3) == 1)
            {
                goto home;
            }
            break;
        case 2:
            construction();
            if (return_home(3) == 1)
            {
                goto home;
            }
            break;
        case 3:
            construction();
            if (return_home(3) == 1)
            {
                goto home;
            }
            break;
        case 4:
            construction();
            if (return_home(3) == 1)
            {
                goto home;
            }
            break;
        default:
            if (return_home(3) == 1)
            {
                goto home;
            }
            break;
        }
        if (return_home(3) == 1)
        {
            goto home;
        }
    }
    else
    {
        about_us();
        if (return_home(1) == 1)
        {
            goto home;
        }
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

void about_us()
{
    printf("\n\n\t\t\t\t\t    |      About Developers       |\t\n");
    printf("\n\t\t\t\t\t\t    Abdullah Khan  \n");
    // printf("\t\t\t\t\t\tProgrammer & Developer\n");
    printf("\n\t\t\t\t\t\t Dept. of CSE , UIU\n\n");
}

int return_home(int quit)
{

    printf("\n\t\tPress %d to Return to Homepage...\n", quit);
    int enter = 0;
    while (enter != quit)
    {
        printf("\t\t==> ");
        scanf(" %d", &enter);
    }
    printf("\n\t\t_______________________________\n");
    return 1;
}
void construction()
{
    printf("\t\t_______________________________\n");
    printf("\t\tThis Page is Under Construction\n\n");
    printf("\t\t   Wait for 3 Business Days   \n");
    printf("\t\t-------------------------------\n");
}

void customer_mode()
{
    printf("\t\t\t\t\t     ------------------------\t\n");
    printf("\t\t\t\t\t    |      CUSTOMER MODE     |\t\n");
    printf("\t\t\t\t\t     ------------------------\t\n");
    printf("\n\t\t1 ) Login as Customer\n");
    printf("\t\t2 ) Movie Information & Set show time \n");
    printf("\t\t3 ) Book Tickets\n");
    printf("\t\t4 ) Logout\n\n");
}