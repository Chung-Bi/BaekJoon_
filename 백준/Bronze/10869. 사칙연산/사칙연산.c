#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("%d\n%d\n%d\n%d\n%d\n", a + b, a - b, a * b, a / b, a % b);
    } else {
        printf("%d\n%d\n%d\nDivision by zero is not allowed.\n", a + b, a - b, a * b);
    }
    
    return 0;
}