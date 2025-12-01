/*Problem Title: ADTU Canteen Bill Analyzer
Story:

At Assam Down Town University (ADTU), the hostel canteen records the daily food expenses of each student.
Each row in a 2D array represents a student, and each column represents a day of the day week (from Monday to Friday).
The value bill[i][j] is the amount in ₹ spent by student i on day j.
You, as the Canteen Manager of ADTU, have been asked to analyze the weekly canteen records.

🧠 Your Tasks:

Given the 2D array bill, write a program to:

Print the total amount spent by each student in the week.

Find the day with the highest total collection.

Identify the student (or students) who spent the most overall.

Input Format:

The first line contains two integers:
n → number of students
m → number of days

The next n lines each contain m integers — the daily bill amounts.

📤 Output Format:

Print each student’s total weekly spending.

Print which day had the highest total collection.

Print which student(s) spent the most overall.
Input :
4 5
30 40 50 60 20
10 20 30 10 40
50 60 40 30 20
20 10 10 20 30

Output:

Student 1 total: ₹200  
Student 2 total: ₹110  
Student 3 total: ₹200  
Student 4 total: ₹90  

Highest collection on Day 2  
Highest spender: Student 1 and Student 3*/


#include <stdio.h>
int main() {
    int n, m;
    printf("Enter number of students and days: ");
    scanf("%d %d", &n, &m);
    int bill[n][m];
    int studentTotal[n];
    int dayTotal[m];
    for (int i = 0; i < n; i++)
        studentTotal[i] = 0;
    for (int j = 0; j < m; j++)
        dayTotal[j] = 0;
    printf("Enter the canteen bills: \n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &bill[i][j]);
            studentTotal[i] += bill[i][j];
            dayTotal[j] += bill[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        printf("Student %d total: ₹%d\n", i + 1, studentTotal[i]);
    }
    int maxDay = 0;
    for (int j = 1; j < m; j++) {
        if (dayTotal[j] > dayTotal[maxDay]) {
            maxDay = j;
        }
    }
    printf("\nHighest collection on Day %d\n", maxDay + 1);
    int maxSpend = studentTotal[0];
    for (int i = 1; i < n; i++) {
        if (studentTotal[i] > maxSpend)
            maxSpend = studentTotal[i];
    }
    printf("Highest spender: ");
    for (int i = 0; i < n; i++) {
        if (studentTotal[i] == maxSpend) {
            printf("Student %d ", i + 1);
            if (i != n - 1)
                printf("and ");
        }
    }
    printf("\n");
    return 0;
}