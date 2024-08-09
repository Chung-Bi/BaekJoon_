#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum = 0;
    int sumnum = 0;
    int sum2 = 0;
    int *price;
    int *num;

    scanf("%d", &sum);
    scanf("%d", &sumnum);
    
    price = (int*)malloc(sumnum * sizeof(int));
    num = (int*)malloc(sumnum * sizeof(int));
    
    if (price == NULL || num == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }
    
    for (int j = 0; j < sumnum; j++)
    {
        scanf("%d %d", &price[j], &num[j]);
        sum2 += price[j] * num[j];
    }
    
    if (sum == sum2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    
    free(price);
    free(num);
    
    return 0;
}
