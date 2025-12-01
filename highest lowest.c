/*Problem Title: Amit’s Report Card
🧩 Problem Story:

Amit appeared in his first semester exams and got marks in several subjects.
He now wants to find his highest and lowest marks to understand his performance.

Help Amit by writing a program that finds the maximum and minimum marks from the list of marks he scored.

Task:

Write a program to read the marks of n subjects and print the highest and lowest marks.

🧠 Input Format:

The first line contains an integer n — the number of subjects.

The second line contains n space-separated integers representing Amit’s marks.

Output Format:

Print two lines in the following format:

Highest = maximum_marks
Lowest = minimum_marks

🧩 Example 1:

Input
6
45 78 56 89 92 66

Output
Highest = 92
Lowest = 45
Example 2:

Input
5
34 67 29 81 75

Output
Highest = 81
Lowest = 29*/

#include <stdio.h>
int main()
{
    int n, i, max, min;
    printf("Enter number of subjects: ");
    scanf("%d", &n);
    int marks[n];
    printf("Enter marks: ");
    for(i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    max = min = marks[0];
    for(i = 1; i < n; i++)
    {
        if(marks[i] > max) max = marks[i];
        if(marks[i] < min) min = marks[i];
    }

    printf("Highest = %d\n", max);
    printf("Lowest = %d\n", min);
    return 0;
}