#include<Stdio.h>
int main()
{
    float price;
    printf("Enter The Price of Item : ");
    scanf("%f",&price);
    char choice;
    printf("Dine-In [D] or Take-Away [T] (T/D): ");
    scanf(" %c",&choice);
    if((choice == 'D')||(choice== 'd'))
    {
        price += 150;
        printf("Customer Choosed Dine-In!\n");
        printf("Total Price = %f",price);   
    }
    else if((choice == 'T')||(choice== 't'))
    {
        price += 20;
        printf("Customer Choosed Take-Away!\n");
        printf("Total Price = %f",price);   
    }
    
    return 0;
}
