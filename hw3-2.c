#include <stdio.h>
#include <stdbool.h>

main()
{
int s1,d1,s2,d2,s3,d3;
scanf("%d %d %d %d %d %d", &s1, &d1, &s2, &d2, &s3, &d3);
int car = 3;

if(0 <= s1,d1,s2,d2,s3,d3 <= 24)
{
    if(d1 <= s2)
    {
        car = car -1;
        if( (d1 <= s3 & d3 <= s2) | (d2 <= s3) | (d3 <= s1) )
            car = car -1;
    }
    else if(d1 <= s3)
    {
        car = car -1;
        if( (d1 <= s2 & d2 <= s3) | (d3 <= s2) | (d2 <= s1) )
            car = car -1;
    }
    else if(d2 <= s1)
    {
        car = car -1;
        if( (d2 <= s3 & d3 <= s1) | (d1 <= s3) | (d3 <= s2) )
            car = car -1;
    }
    else if(d2 <= s3)
    {
        car = car -1;
        if( (d2 <= s1 & d1 <= s3) | (d3 <= s2) | (d1 <= s3)  )
            car = car -1;
    }
    else if(d3 <= s1)
    {
        car = car -1;
        if( (d3 <= s2 & d2 <= s1) | (d1 <= s2) | (d2 <= s1)  )
            car = car -1;
    }
    else if(d3 <= s2)
    {
        car = car -1;
        if( (d3 <= s1 & d1 <= s2) | (d2 <= s1) | (d1 <= s2)  )
            car = car -1;
    }

}
printf("%d",car);
}

