#include <stdio.h>
int main()
{
    int n, i, present = 0, absent = 0;
    printf("Enter number of students: ");
    scanf("%d", &n);
    int attendance[n];
    printf("Enter attendance (1 for present, 0 for absent): ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &attendance[i]);
        if(attendance[i] == 1) present++;
        else if(attendance[i] == 0) absent++;
    }
    printf("Present: %d\n", present);
    printf("Absent: %d\n", absent);
    return 0;
}