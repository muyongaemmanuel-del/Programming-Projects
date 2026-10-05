#include <stdio.h>
void sayHello();

int main()
{   sayHello();
    int Mathematics;
    int English;
    int Physics;
    int Programming;
    int Total;
    float Average;
    char Name[50];
    printf("Enter Students Name:");
    scanf("%49s",Name);
    printf("Enter Mathematics Marks:");
    scanf("%d",&Mathematics);
    printf("Enter English Marks:");
    scanf("%d",&English);
    printf("Enter Physics Marks:");
    scanf("%d",&Physics);
    printf("Enter Programming Marks:");
    scanf("%d",&Programming);
    Total=Mathematics+English+Physics+Programming;
    printf("Total Marks=%d\n",Total);
    printf("Student Name:%s\n",Name);
    Average=Total/4.0;
    printf("Average=%.3f\n",Average);
    if(Average>=70)
    {
        printf("Grade:A\n");
    }
    else if(Average>=60)
    {
        printf("Grade:B\n");
    }
    else if(Average>=50)
    {
        printf("Grade:C\n");
    }
    else if(Average>=40)
    {
        printf("Grade:D\n");
    }
    else
    {
        printf("Grade:E\n");
    }
    if(Average>=40)
    {
        printf("Status:PASS\n");
    }
    else
    {
        printf("Status:FAIL\n");
    }
    return 0;
}
     void sayHello()

     {

         printf("Welcome to the Student Management System!\n");
     }
