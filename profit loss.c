#include <stdio.h>
int main()
{
    int n, i, profit = 0, loss = 0, val;
    printf("Enter number of days: ");
    scanf("%d", &n);
    printf("Enter profit/loss values: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &val);
        if(val > 0)
            profit += val;
        else if(val < 0)
            loss += -val;
    }
    printf("Total Profit: %d\n", profit);
    printf("Total Loss: %d\n", loss);
    printf("Net Balance: %d\n", profit - loss);
    return 0;
}