#include <stdio.h>
#include <stdlib.h>

int main()
{   int correctPin=9999;
    int userPin;
    int count=0;
    printf("DOOR LOCK SYSTEM\n");
    while(count<3){
    printf("Please Enter userPin");
    scanf("%d",&userPin);
    if(userPin==correctPin)
    {
        printf("Access Granted!\n");
        printf("Door Unlocked.\n");
        break;
    }
    else
    { count++;
        printf("IncorrectPin!\n");
        printf("Attempts remaining:%d\n\n",3-count);
    }
    }
    if(count==3)
    {
        printf("\nToo many incorrect attempts!\n");
        printf("Access Denied.\n");
        printf("Door Locked.\n");
    }
    return 0;
}
