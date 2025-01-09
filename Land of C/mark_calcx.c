/*Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user*/

// solution

#include <stdio.h>

int main()
{

    int subject1, subject2, subject3;

    printf("enter the marks of subject 1   \n");
    scanf("%d", &subject1);
    printf("enter the marks of subject 2   \n");
    scanf("%d", &subject2);
    printf("enter the marks of subject 3   \n");
    scanf("%d", &subject3);

    if (subject1 < 33 || subject2 < 33 || subject3 < 33)
    {
        printf("you failed by  less marks in one or more subjects");
    }

    else if ((subject1 + subject2 + subject3) / 3 < 40)
    {
        printf("you fail by lesser marks in  toatal average marks");
    }
    else
    {
        printf("congratulations, you have passed the exam");
    }

    return 0;
}