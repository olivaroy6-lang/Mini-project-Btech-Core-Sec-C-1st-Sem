/*HOSTEL ATTENDANCE TRACKER 
Assam Down Town University maintains a strict hostel monitoring system to ensure student safety.
Every hostel student must mark attendance daily.
The warden keeps attendance for 7 days (Monday to Sunday) for 10 students.

The attendance is stored in a 2D array A[10][7], where:
A[i][j] = 1 → Student i was Present on Day j

A[i][j] = 0 → Student i was Absent on Day j

Here:

i = Student number (1 to 10)

j = Day number (1 to 7)

The warden wants a weekly summary of attendance.

Your Task: Write the algorithm or C program to do the following:
(a) Calculate and print the total number of days each student was present.

Total present days = sum of each row.

(b) Identify the student who has the highest attendance in the week.

If two students have the same highest attendance, print the one with the lower student number.

Find the day (1–7) on which overall hostel attendance was the lowest.

Total attendance on a day = sum of each column.
Input :
1 1 0 1 1 0 1
1 0 1 1 1 1 1
0 1 1 0 1 1 0
1 1 1 1 0 1 1
1 0 1 0 1 0 1
0 0 1 1 1 1 1
1 1 0 0 0 1 1
1 1 1 1 1 0 0
0 1 1 1 1 1 1
1 0 0 1 1 1 1

Output:
Weekly Attendance Summary
-------------------------

Total Present Days:
Student 1: 5
Student 2: 6
Student 3: 4
Student 4: 6
Student 5: 4
Student 6: 5
Student 7: 5
Student 8: 5
Student 9: 6
Student 10: 5

Student with Highest Attendance: Student 2 (6 Days)

Day with Lowest Overall Attendance: Day 2*/

#include <stdio.h>
#include <limits.h>
#define NUM_STUDENTS 10
#define NUM_DAYS 7
void calculate_attendance_summary(int attendance[NUM_STUDENTS][NUM_DAYS])
{
    int student_present_days[NUM_STUDENTS] = {0};
    int max_present_days = -1;
    int student_with_highest_attendance = -1; 
    printf("Weekly Attendance Summary\n");
    printf("-------------------------\n\n");
    printf("Total Present Days:\n");
    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        int present_count = 0;
        for (int j = 0; j < NUM_DAYS; j++)
        {
            present_count += attendance[i][j];
        }
        student_present_days[i] = present_count;
        printf("Student %d: %d\n", i + 1, present_count);
        if (present_count > max_present_days)
        {
            max_present_days = present_count;
            student_with_highest_attendance = i + 1;
        } 
    }
    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n", 
           student_with_highest_attendance, max_present_days);
    int day_attendance[NUM_DAYS] = {0};
    int min_day_attendance = INT_MAX;
    int day_with_lowest_attendance = -1;
    for (int j = 0; j < NUM_DAYS; j++)
    {
        int day_count = 0;
        for (int i = 0; i < NUM_STUDENTS; i++)
        {
            day_count += attendance[i][j];
        }
        day_attendance[j] = day_count;
        if (day_count < min_day_attendance)
        {
            min_day_attendance = day_count;
            day_with_lowest_attendance = j + 1; 
        }
    }
    printf("\nDay with Lowest Overall Attendance: Day %d\n", day_with_lowest_attendance);
}
int main()
{
    int attendance[NUM_STUDENTS][NUM_DAYS] =
    {
        {1, 1, 0, 1, 1, 0, 1},
        {1, 0, 1, 1, 1, 1, 1},
        {0, 1, 1, 0, 1, 1, 0},
        {1, 1, 1, 1, 0, 1, 1},
        {1, 0, 1, 0, 1, 0, 1},
        {0, 0, 1, 1, 1, 1, 1},
        {1, 1, 0, 0, 0, 1, 1},
        {1, 1, 1, 1, 1, 0, 0},
        {0, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 1, 1, 1, 1}
    };
    calculate_attendance_summary(attendance);
    return 0;
}