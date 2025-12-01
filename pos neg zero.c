


#include <stdio.h>
int main()
{
    int n, i, pos = 0, neg = 0, zero = 0;
    printf("Enter number of readings: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter readings: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > 0) pos++;
        else if(a[i] < 0) neg++;
        else zero++;
    }
    printf("Positive = %d\n", pos);
    printf("Negative = %d\n", neg);
    printf("Zero = %d\n", zero);
    return 0;
}