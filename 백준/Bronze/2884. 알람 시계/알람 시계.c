#include <stdio.h>

int main()
{
    int a, b = 0;
    int a2, b2 = 0;
    scanf("%d %d", &a, &b);
    
    if(b < 45)
    {
        if (a == 0)
        {
            a2 = 23;
            b2 = 60 - (45 - b);
            printf("%d %d", a2, b2);
        }
        else
        {
            a2 = a - 1;
            b2 = 60 - (45 - b);
            printf("%d %d", a2, b2);
        }
    }
    else
    {
        a2 = a;
        b2 = b - 45;
        printf("%d %d", a2, b2);
    }
    
    return 0;
}