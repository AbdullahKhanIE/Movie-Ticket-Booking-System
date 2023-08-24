#include <stdio.h>
#include <string.h>
#define N 100
struct ticket
{
    char name[N];
    int price;
    int code;
};
int home_screen();
void about_us();
// int admin();
void construction();
int return_home();
void customer_mode();
void movie_list(struct ticket movies[]);

int main()
{
    struct ticket movies[N];
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
            movie_list(movies);
            if (return_home(1) == 1)
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
    printf("\t\t2 ) Movie Information\n");
    printf("\t\t3 ) Book Tickets\n");
    printf("\t\t4 ) Logout\n\n");
}
void movie_list(struct ticket movies[])
{
    printf("\t\t   ------------------------\t\n");
    printf("\t\t  |    Available Shows     |\t\n");
    printf("\t\t   ------------------------\t\n");
    strcpy(movies[0].name, "DHAKA ATTACK");
    movies[0].price = 350;
    movies[0].code = 101;
    strcpy(movies[1].name, "Mission Xtreame");
    movies[1].price = 350;
    movies[1].code = 102;
    strcpy(movies[2].name, "Din The Day");
    movies[2].price = 350;
    movies[2].code = 103;
    strcpy(movies[3].name, "American Psycho");
    movies[3].price = 350;
    movies[3].code = 201;
    strcpy(movies[4].name, "Oppenheimer");
    movies[4].price = 350;
    movies[4].code = 202;
    strcpy(movies[5].name, "Top GUN");
    movies[5].price = 350;
    movies[5].code = 203;
    strcpy(movies[6].name, "Barbie");
    movies[6].price = 350;
    movies[6].code = 204;
    strcpy(movies[7].name, "Avengers END GAME");
    movies[7].price = 350;
    movies[7].code = 205;
    strcpy(movies[8].name, "Pathan");
    movies[8].price = 350;
    movies[8].code = 301;
    strcpy(movies[9].name, "Vikram Vedha");
    movies[9].price = 350;
    movies[9].code = 302;
    printf("\t\tMovies__________________Code\n");
    printf("\t\t____________________________\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\t\t%s        %d\n\t\tPrice: %d\n", movies[i].name, movies[i].code, movies[i].price);
        printf("\t\t----------------------------\n");
    }
}