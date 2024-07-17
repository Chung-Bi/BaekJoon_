#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    int first_b = b % 10;
    int second_b = (b % 100) / 10;
    int third_b = b / 100;
    
    printf("%d\n", a * first_b);
    printf("%d\n", a * second_b);
    printf("%d\n", a * third_b);
    printf("%d\n", a * b);
    
    return 0;
}