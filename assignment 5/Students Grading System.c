
#include <stdio.h>

int main()
{
    int n;
    int registrationNumber;
    char name[50];
    int marks;
    int gradeNumber;
    char grade;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\n===== Student %d =====\n", i);

        printf("Enter registration number: ");
        scanf("%d", &registrationNumber);

        printf("Enter name: ");
        scanf("%s", name);

        printf("Enter marks: ");
        scanf("%d", &marks);

        /* Convert marks into a grade category */
        if (marks >= 70 && marks <= 100)
        {
            gradeNumber = 1;
        }
        else if (marks >= 60)
        {
            gradeNumber = 2;
        }
        else if (marks >= 50)
        {
            gradeNumber = 3;
        }
        else if (marks >= 40)
        {
            gradeNumber = 4;
        }
        else
        {
            gradeNumber = 5;
        }

        /* Determine grade using switch */
        switch (gradeNumber)
        {
            case 1:
                grade = 'A';
                break;

            case 2:
                grade = 'B';
                break;

            case 3:
                grade = 'C';
                break;

            case 4:
                grade = 'D';
                break;

            case 5:
                grade = 'F';
                break;

            default:
                grade = 'F';
        }

        /* Display student information */
        printf("\n===== Student Results =====\n");
        printf("Registration Number: %d\n", registrationNumber);
        printf("Name: %s\n", name);
        printf("Marks: %d\n", marks);
        printf("Grade: %c\n", grade);

        /* Pass or fail */
        if (marks >= 40)
        {
            printf("Status: Pass\n");
        }
        else
        {
            printf("Status: Fail\n");
        }
    }

    return 0;
}
