#include <stdio.h>
#include <stdbool.h>

//hw3-4
main()
{
int secretNumber[4];
int guess[4];
int tries = 0;
int i, j;
scanf("%1d%1d%1d%1d", &secretNumber[0], &secretNumber[1], &secretNumber[2], &secretNumber[3]);

while (1)
{
    int a = 0, b = 0;
    scanf("%1d%1d%1d%1d", &guess[0], &guess[1], &guess[2], &guess[3]);

    for (i = 0; i < 4; i++)
    {
        if (guess[i] == secretNumber[i])
            a++;
        else
        {
            for (j = 0; j < 4; j++)
            {
                if (guess[i] == secretNumber[j])
                    b++;
            }
        }
    }

    printf("%dA%dB\n", a, b);

    if (a == 4)
        break;

}

}

