#include<stdio.h>
struct Restaurant
{
int RestaurantID; //a variable storing the Restaurant id.
int DishesIDs[5]; //storing the IDs of all the dishes available in Restaurant. E.g: 1, 2, 3, 4, 5.
float DishesPrices[5]; // storing the prices of all the dishes. E.g:234.2, 400.5, 104.3, 700.5, 900.12
float TotalEarnings; //storing the total earnings of Restaurant
};
int main()
{

    struct Restaurant R;
    /*input values in RestaurantID, DishesIDs[5], DishesPrices[5] members in R. And also 
    assign 0.0 value to TotalEarnings member of R.*/

    printf("Enter Restaurant ID: ");
    scanf("%d",&R.RestaurantID);

    int i = 0;
    while(i<5)
    {
        printf("Enter Dish (%d) ID: ",i+1);
        scanf("%d",&R.DishesIDs[i]);
        printf("Enter Dish (%d) Price:$ ",i+1);
        scanf("%f",&R.DishesPrices[i]);
        i++;
    }
    R.TotalEarnings = 0.0;

    //output all the values of R Restaurant
    printf("Restaurant ID: %d\n",R.RestaurantID);
    i = 0;
    while(i<5)
    {
        printf("Dish (%d) ID: %d\n",i+1,R.DishesIDs[i]);
        printf("Dish (%f) Price:$%d\n",i+1,R.DishesPrices[i]);
        i++;
    }
    printf("Total Earnings: %f\n",TotalEarnings);

/*First display all the Dishes IDs from DishesIDs array of R and also display their prices using DishesPrices array
of Restaurant. Then user will input the DishID it want to order. Then search the inputted DishID in DishesIDs
array. Then with the help of found DishID index, access its price from DishesPrices array and add that price in
TotalEarnings.*/

    i = 0;
    while(i<5)
    {
        printf("Dish (%d) ID: %d\n",i+1,R.DishesIDs[i]);
        printf("Dish (%f) Price:$%d\n",i+1,R.DishesPrices[i]);
        i++;
    }
    int choice = 0;
    printf("Enter Dish ID: ");
    scanf("%d",&choice);
    i=0;
    while(i<5)
    {
        if(choice==R.DishesIDs[i])
        {
            R.TotalEarnings = R.DishesPrices[i];
        }
        i++;
    }

    /*Display the ID of that dish which exists in DishIDs Array of Restaurant and having 
    the same DishesPrice*/
    
    int FirstIDprice = R.DishesPrices[0];
    int multipleSamePrice = 0; 
    for (int i = 1; i < 5; i++)
    {
        if (FirstIDprice == R.DishesPrices[i])
        {
            multipleSamePrice = i;
            break; 
        }   
    FirstIDprice = R.DishesPrices[i];
    }
    printf{"ID of that Dish Which Exist In Dishes ID having multiple Same Price: %d\n",R.DishesIDs[i]};

    /*Input the ID of Dish. Then Search the index of that inputted ID from DishesIDs array. 
    And then using that index, update the price of that dish using the DishesPrices array. 
    Update will be based on new inputted value in a local variable by the user that will be 
    added in specific dish price.*/

    int ID_2 = 0;
    printf("Enter ID: ");
    scanf("%d",ID_2);

    float new_price = 0.0;
    printf("Enter New Price: ");
    scanf("%f",&new_price);

    R.DishesPrices[ID_2] = new_price;

    //Find out the most expensive dish from the Restaurant.
    printf("Most Expensive Dish Is: ");
    int max = R.DishesPrices[0];
    int i_max = 0;
    for(int i = 1; i<5; i++)
    {
        if(max<R.DishesPrices[i])
        {
            max = R.DishesPrices[i];
            i_max = i;
        }
    }
    printf("%d",R.DishesIDs[i_max]);

 /*  Check that DishIDs array  Restaurant values are stored in following sequence or not. Display the 
message “Yes” or “No”.
0-index DishID value: 1 Digit value
1-index DishID value: 2 Digit value
2-index DishID value: 3 Digit value
3-index DishID value: 4 Digit value
4-index DishID value: 5 Digit value */


f = 1;
for(int i = 0 ;i<5; i++)
{
    if(R.DishesIDs[i]!=i+1)
    {
        f = 0;
    }
}
if(f==1)
{
    printF("Yes!\n");
}
else
printf("No\n");

/*
First Check out that whether First value of DishID is Odd value or not. If value is not according to the rule as 
specified then store it in DishIDs array according to the rule as stated above. For Storing it use the following 
rule:
A. Find the second odd value in the array and swap with 0-index value. If there is only one odd value in 
entire array then do not swap it*/

int checkfirstvalue = R.DishesIDs[0];
int secondoddvalue = 0;
int secondoddvalueiteration = 0;
int oddcount = 0;
if(checkfirstvalue%2==0)
{
    for(int i = 1 ; i<5; i++)
    {
        if(R.DishesIDs[i]%2!=0)
        {
            oddcount++;
            secondoddvalue = R.DishesIDs[i];
            secondoddvalueiteration = i;
            break;
        }
    }
}
if(oddcount > 0)
{
int r = R.DishesIDs[0];
R.DishesIDs[0] = secondoddvalue;
R.DishesIDs[secondoddvalueiteration] = r;
}

    return 0;
}