#include <stdio.h>

int main()
{
    int seo = 0;
    int bul = 0;
    scanf("%d", &bul);
    
    if(bul > 3000 || bul < 1000)
    {
        printf("not right.");
        return 1;
    }
    else
    {
        seo = bul - 543;
        printf("%d", seo);
    }
    return 0;
}