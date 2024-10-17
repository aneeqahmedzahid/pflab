#include<stdio.h>
int main()
{
    int n1,n2,temp;
    printf("Enter First Number: ");
    scanf("%d",&n1);
    printf("Enter Second Number: ");
    scanf("%d",&n2);
    temp = n1;

    if(n1!=n2)
    {
        n1=n2;
        printf("The New Value is %d and changed value is %d",n1,temp);
    }
    else
    printf("The value not changed due to same inputs!");
    
    return 0;
}