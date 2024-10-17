#include <stdio.h>

int main() {
    int residentialPlots, commercialPlots;
    float totalLand, totalCost, totalTax;


    printf("Enter number of Residential Plots (max 5): ");
    scanf("%d", &residentialPlots);
    if (residentialPlots > 5) 
    {
        printf("You can only purchase a maximum of 5 Residential Plots. Reducing to 5.\n");
        residentialPlots = 5;
    }
    printf("Enter number of Commercial Plots (max 5): ");
    scanf("%d", &commercialPlots);
    if (commercialPlots > 5) 
    {
        printf("You can only purchase a maximum of 5 Commercial Plots. Reducing to 5.\n");
        commercialPlots = 5;
    }


    totalLand = (residentialPlots * 1.5) + (commercialPlots * 2.5);
    totalCost = ((residentialPlots * 1.5) * 175000) + ((commercialPlots * 2.5) * 175000);


    if (totalLand > 0 && totalLand <= 3.0) 
    {
        totalTax = totalLand * 1500;
    } else if (totalLand > 3.0 && totalLand <= 5.5) 
    {
        totalTax = totalLand * 1000;
    } else if (totalLand > 5.5 && totalLand <= 8.0) 
    {
        totalTax = totalLand * 750;
    } else 
    {
        totalTax = totalLand * 500;
    }

    printf("Total Land (in marlas): %f\n", totalLand);
    printf("Total Cost (in Lakh): %f\n", totalCost);
    printf("Total Tax (in Rs): %f\n", totalTax);

    return 0;
}
