#include <stdio.h>

int main() {

    float rate_1person_1day = 250.25;


    int total_input_days, total_input_persons, childs;
    float total_tour_cost, total_discount = 0;


    printf("Enter Total Number of Days of Tour: ");
    scanf("%d", &total_input_days);

    printf("Enter Total Number of Persons Going on Tour: ");
    scanf("%d", &total_input_persons);


    total_tour_cost = rate_1person_1day * total_input_days * total_input_persons;


    if (total_input_persons >= 10 && total_input_days >= 7) 
    {
        float discount_1 = 100.25 * total_input_days;
        total_discount = discount_1;
        printf("Discount-1: %f\n", discount_1);
    } else {
        printf("No Discount-1 applicable.\n");
    }


    printf("Enter Number of Children Going with You: ");
    scanf("%d", &childs);


    if (childs > 0) {
        float discount_2 = childs * 50.5;
        total_discount += discount_2;
        printf("Discount-2: %f\n", discount_2);
    } else {
        printf("No Discount-2 applicable.\n");
    }


    float updated_total_cost = total_tour_cost - total_discount;


    printf("Total Discount: %f\n", total_discount);
    printf("Updated Total Cost of Tour: %f\n", updated_total_cost);

    return 0;
}
