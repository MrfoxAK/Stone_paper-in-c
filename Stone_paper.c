#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generaterandomNumber(int n)
{
    srand(time(NULL)); // srand takes seed as an input and is defined inside stdlib.h
    return rand() % n;
}

int main()
{
    system("color 0b");
    int draw = 0, uwin = 0, cwin = 0;
    char name[34];
    printf("What is your name: ");
    scanf("%s", &name);
    while (1)
    {
        int n;
        int arr[4] = {1, 2, 3, 0};
        printf("%s's turn: \n", name);
        printf("Please select 1.for stone /2.for paper /3.for scissors /0.for exit\n");
        scanf("%d", &n);
        if (n == 1)
        {
            printf("So You entered Stone.\n");
        }
        else if (n == 2)
        {
            printf("So You entered Paper.\n");
        }
        else if (n == 3)
        {
            printf("So You entered Scissors.\n");
        }
        else if (n == 0)
        {
            break;
        }

        int g = generaterandomNumber(3);
        if (g == 0)
        {
            printf("Computer's Turn: Stone\n");
        }
        else if (g == 1)
        {
            printf("Computer's Turn: Paper\n");
        }
        else if (g == 2)
        {
            printf("Computer's Turn: scissors\n");
        }
        for (int i = 0; i < 4; i++)
        {

            if (n == arr[i])
            {
                if (n == 1 && g == 0)
                {
                    printf("********** Draw **********\n");
                    draw = draw + 1;
                }
                else if (n == 1 && g == 1)
                {
                    printf("********** Computer Win **********\n");
                    cwin = cwin + 1;
                }
                else if (n == 1 && g == 2)
                {
                    printf("********** You Win **********\n");
                    uwin = uwin + 1;
                }
                else if (n == 2 && g == 1)
                {
                    printf("********** Draw **********\n");
                    draw = draw + 1;
                }
                else if (n == 2 && g == 0)
                {
                    printf("********** You Win **********\n");
                    uwin = uwin + 1;
                }
                else if (n == 2 && g == 2)
                {
                    printf("********** Computer Win **********\n");
                    cwin = cwin + 1;
                }
                else if (n == 3 && g == 2)
                {
                    printf("********** Draw **********\n");
                    draw = draw + 1;
                }
                else if (n == 3 && g == 0)
                {
                    printf("********** Computer Win **********\n");
                    cwin = cwin + 1;
                }
                else if (n == 3 && g == 1)
                {
                    printf("********** You Win **********\n");
                    uwin = uwin + 1;
                }
            }
            // else
            // {
            //     printf("Invalid Input....Please enter a valid input\n");
            //     goto exit;
            // }
            // printf("Computer : %d\n",g);
        }
    }
    // exit:
    printf("Final Result......\n");
    if (uwin > cwin)
    {
        printf("********** You Win **********");
    }
    else if (cwin > uwin)
    {
        printf("********** Computer Win **********");
    }
    else if (cwin == draw)
    {
        printf("********** Draw **********");
    }
    else if (uwin == draw)
    {
        printf("********** Draw **********");
    }
    return 0;
}