#include<Stdio.h>
int main()
{
    int amount;
    printf("Enter Amount Available: ");
    scanf("%d",&amount);
    int counter = 0;
    int usa_made_price = 500;    
    int europe_made_price = 200;  
    int asia_made_price = 100;

    int usproducts = amount/usa_made_price;
    int europeproducts = amount/europe_made_price;
    int asiaproducts = amount/asia_made_price;  

    if(usproducts>=5)
    {
        printf("User will buy %d products in USA-made Category",usproducts);
        counter ++;
    }
    if(europeproducts>=5)
    {
        printf("User will buy %d products in Europe-made Category",europeproducts);
        counter ++;
    }
    if(asiaproducts>=5)
    {
        printf("User will buy %d products in Asia-made Category",asiaproducts);
        counter ++;
    }
    printf("The Message Displayed %d times!",counter);
    return 0;
}