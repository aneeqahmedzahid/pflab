#include<stdio.h>
int main()
{
    int testmarks;
    int points=0;
    int passed=0;
    int interviewmarks;

    printf("Enter Test Marks(/100): ");
    scanf("%d",&testmarks);
    if(testmarks>50)
    {
        printf("You Passed Test!\n");
        passed = 1;
        points += 1;
        if(testmarks==100)
        {
            printf("You Got Extra Point!\n");
            points += 1;
        }
        if(passed==1)
        {
        printf("Enter Interview Marks(/100): ");
        scanf("%d",&interviewmarks);
        if(interviewmarks>70)
        {
            printf("You Passed Interview!\n");
            points += 1;
        }
            if(interviewmarks>90)
            {
            printf("You Got Extra two Points!\n");
            points += 2;
            }
        }
        if(points<3)
        {
        printf("Failure!\n");
        }
        else if(points>=3)
        {
        printf("Success!\n");
        if(points==5)
        {
            printf("“Excellent Performance!");
        }
        }
        
    }
    
    return 0;
}
