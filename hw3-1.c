#include <stdio.h>
#include <stdbool.h>

main()
{
    
//hw3-1

int number;
bool prime = true;
scanf("%d", &number);

for(int i = 2; i < number; i++)
    {
        if (number % i == 0)
            prime = false;
    }

//printf("%d\n", prime);
if (prime == true)
    printf("YES");
if (prime == false)
    printf("NO");

}
