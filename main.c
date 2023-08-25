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
void default_movie_list(struct ticket movies[]);
void about_us();
void construction();
int return_home(int quit);
void customer_mode();
void movie_list_print(struct ticket movies[]);
int ticket_booking(struct ticket movies[], int *ticket);
float payment_checkout(float cost);
void admin_mode();


int main()
{
    int total_movie = 10;
    struct ticket movies[N];
home:
    default_movie_list(movies);
    int home_menu = home_screen();
    float total_cost = 0;
    if (home_menu == 1)
    {
        admin_mode();
        if (return_home(1) == 1)
        {
            goto home;
        }
    }
    else if (home_menu == 2)
    {
        int option;
        customer_mode();
        printf("\t\t==> ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            customer_mode();
            if (return_home(1) == 1)
            {
                goto home;
            }
            break;
        case 3:
            movie_list_print(movies);
            if (return_home(1) == 1)
            {
                goto home;
            }
            break;
        case 4:
            int ticket_code = 0;
            if (ticket_booking(movies, &ticket_code) != 0)
            {
                payment_checkout(total_cost);
                goto home;
            }
            else
            {
                goto home;
            }
            break;
        case 5:
            construction();
            if (return_home(1) == 1)
            {
                goto home;
            }
            break;
        case 6:
            goto home;
            break;
        default:
            printf("\t\tInvalid Input\n");
            if (return_home(1) == 1)
            {
                goto home;
            }
            break;
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
        printf("\t\t|\t\t\t   3 ) About Me\t\t\t\t    |\n");
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

void default_movie_list(struct ticket movies[])
{
    strcpy(movies[0].name, "Dhaka Attack             101");
    movies[0].price = 350;
    movies[0].code = 101;
    strcpy(movies[1].name, "Mission Extreme          102");
    movies[1].price = 350;
    movies[1].code = 102;
    strcpy(movies[2].name, "Din: The Day              103");
    movies[2].price = 350;
    movies[2].code = 103;
    strcpy(movies[3].name, "American Psycho          201");
    movies[3].price = 350;
    movies[3].code = 201;
    strcpy(movies[4].name, "Oppenheimer              202");
    movies[4].price = 350;
    movies[4].code = 202;
    strcpy(movies[5].name, "The Dark Knight          203");
    movies[5].price = 350;
    movies[5].code = 203;
    strcpy(movies[6].name, "Barbie                   204");
    movies[6].price = 350;
    movies[6].code = 204;
    strcpy(movies[7].name, "Avengers: End Game       205");
    movies[7].price = 350;
    movies[7].code = 205;
    strcpy(movies[8].name, "Pathan                   301");
    movies[8].price = 350;
    movies[8].code = 301;
    strcpy(movies[9].name, "Vikram Vedha             302");
    movies[9].price = 350;
    movies[9].code = 302;
}
void about_us()
{
    printf("\n\n");
    printf("\t\t\t\t ___________________________________________\n");
    printf("\t\t\t\t|                                           |\n");
    printf("\t\t\t\t|               Abdullah Khan               |\n");
    printf("\t\t\t\t|                                           |\n");
    // printf("\t\t\t\t\t\tProgrammer & Developer\n");
    printf("\t\t\t\t|             Dept. of CSE, UIU             |\n");
    printf("\t\t\t\t|                                           |\n");
    printf("\t\t\t\t| Email: AbdullaKkhan.IE.official@gmail.com |\n");
    printf("\t\t\t\t|___________________________________________|\n\n\n\n\n");
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
    printf("\t\t\t     ------------------------\t\n");
    printf("\t\t\t    |      CUSTOMER MODE     |\t\n");
    printf("\t\t\t     ------------------------\t\n");
    printf("\n\t\t1 ) Login as Customer\n");
    printf("\t\t2 ) Sign Up as Customer\n");
    printf("\t\t3 ) Movie Information\n");
    printf("\t\t4 ) Book Tickets\n");
    printf("\t\t5 ) Logout\n\n");
    printf("\t\t6 ) Return to Home Menu\n");
}

void movie_list_print(struct ticket movies[])
{

    printf("\t\t  ------------------------\t\n");
    printf("\t\t |     Available Shows    |\t\n");
    printf("\t\t  ------------------------\t\n");
    printf("\t\tMovies                  Code\n");
    printf("\t\t____________________________\n");
    for (int i = 0; i < 10; i++)
    {
        printf("\t\t%s\n\t\tPrice: %d\n", movies[i].name, movies[i].price);
        printf("\t\t----------------------------\n");
    }
}

int ticket_booking(struct ticket movies[], int *code)
{
    movie_list_print(movies);
    printf("\t\tPlease Enter Movie Code\n\t\t==>");
    scanf(" %d", &(*code));
    for (int i = 0; i < 10; i++)
    {
        if (movies[i].code == *code)
        {
            return *code;
        }
    }

    printf("\t\tInvalid Input, Returning to Home Menu\n");
    return 0;
}

float payment_checkout(float cost)
{
    int quantity;
    printf("\n\t\tTicket Quantity : ");
    scanf(" %d", &quantity);
ticket:
    if (quantity > 0 && quantity < 16)
    {
        cost += (350 * quantity);
        printf("\n\t\tPayment Due %.2f taka.\n\t\tCollect the Receipt From the Printer\n", cost);
    }
    else
    {
        while (quantity < 0 || quantity > 15)
        {
            printf("\t\tBuying More than 15 Tickets at once is Not Allowed\n");
            printf("\n\t\tTicket Quantity : ");
            scanf(" %d", &quantity);
        }
        goto ticket;
    }
    return cost;
}

void admin_mode()
{
    int option;
    printf("\t\t\t     ------------------------\t\n");
    printf("\t\t\t    |      ADMIN PANEL       |\t\n");
    printf("\t\t\t     ------------------------\t\n");
    printf("\n\t\t\t     Welcome to Admin Panel!!!\n\n\n");
    printf("\t\t\t\t 1 ) Login\n\n");
    printf("\t\t\t\t 2 ) Signup\n\n");
    printf("\t\t\t\t 3 ) Add Movies\n\n");
    printf("\t\t\t\t 4 ) Delete Movies\n\n");
    printf("\t\t\t\t 5 ) Revenue Report\n\n");
    printf("\t\t\t         6 ) Back to Home page\n");
    printf("\n\t\t\t        Choose your Option \n\t\t\t             ==>  ");
    scanf("%d", &option);
    if (option == 1 || option == 2)
    {
        construction();
    }
    else if (option == 3 || option == 4 || option == 5)
    {
        printf("\t\tAccess Denied!\n\t\tReturning To Home Menu\n");
    }

    else if (option == 6)
    {
        printf("\n\t\tReturning To Home Menu\n");
    }
    else
    {
        printf("\t\t\tInvalid Input, Returning To Home Menu\n");
        return;
    }
}