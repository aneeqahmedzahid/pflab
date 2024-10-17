#include<Stdio.h>
int main()
{
    int n1,n2,n3,temp;
    printf("Enter First Number: ");
    scanf("%d",&n1);
    printf("Enter Second Number: ");
    scanf("%d",&n2);
    printf("Enter Third Number: ");
    scanf("%d",&n3);

    
    if(n1>n2)
    {
        temp = n3;
        n3 = n1;
        n1 = temp;
    }
    else if(n2>n1)
    {
        temp = n2;
        n3 = n2;
        n2 = temp;
    }
    

    printf("The Max Value Is %d",n3);
    return 0;
}
