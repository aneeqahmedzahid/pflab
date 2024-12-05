#include<stdio.h>
int main()
{
    float marks[6];
    char result[6];
    for(int i = 0; i<=5; i++)
    {
        printf("Enter %d Course Marks: ",i+1);
        scanf("%f",&marks[i]);
        if(marks[i]<50)
        {
            result[i] = 'F';
        }
        else
        result[i] = 'P';
    }
    for(int i = 0; i<=5; i++)
    {
        printf("%f\n",marks[i]);
        printf("%c\n",result[i]);
    }
    float diff = marks[1]-marks[4];
    printf("%f\n",diff);
    int failcount = 0;
    int passcount = 0;
    for(int i = 0; i<=5; i++)
    {
        if(result[i]=='P')
        {
            passcount++;
        }
        else
        failcount++;
    }
    if(passcount==6)
    {
        printf("Excellent!\n");
    }
    if((passcount>=3)&&(passcount<=5))
    {
        printf("Good!\n");
    }
    if((passcount<3))
    {
        printf("Poor!\n");
    }
    if(result[0]=='P'&& result[2]=='P' && result[5]=='P')
    {
        printf("All Three Values are Same!\n");
    }
    if(result[0]=='F'&& result[2]=='F' && result[5]=='F')
    {
        printf("All Three Values are Same!\n");
    }
    else
    printf("Values are not Same!\n");



    return 0;
}