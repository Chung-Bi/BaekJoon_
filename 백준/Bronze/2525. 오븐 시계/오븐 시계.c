#include <stdio.h>

int main()
{
    int a, b = 0;
    int x = 0;
    int a2, b2 = 0;
    scanf("%d %d", &a, &b);
    scanf("%d", &x);
    
    // 분 단위로 더하기
    b2 = b + x;
    
    // 시간과 분으로 나누기
    a2 = a + b2 / 60;
    b2 = b2 % 60;
    
    // 24시간 형식으로 변환
    a2 = a2 % 24;
    
    printf("%d %d\n", a2, b2);
    
    return 0;
}
