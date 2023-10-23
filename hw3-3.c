#include <stdio.h>
#include <stdbool.h>

//hw3-3
main()
{
int number1, number2, sum1=0, sum2=0, n1, n2;
scanf("%d %d", &number1, &number2);

n1 = number1;
n2 = number2;
for(; number1 != 0; number1 = number1 / 10)
  sum1 = sum1 + number1%10;
for(; number2 != 0; number2 = number2 / 10)
  sum2 = sum2 + number2%10;

if(sum1 < sum2)
    printf("%d", n1);
else
    printf("%d", n2);
}
