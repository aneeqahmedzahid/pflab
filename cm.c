#include <stdio.h>

int main() {
    float total_tour_cost;
    float rate_1person_1day = 250.25;
    int total_input_days;
    int total_input_persons;
    

    printf("Enter Total Tour Days: ");
    scanf("%d", &total_input_days);
    

    printf("Enter Total Persons Going to Tour: ");
    scanf("%d", &total_input_persons);
    

    total_tour_cost = rate_1person_1day * total_input_days * total_input_persons;


    float discount_each_day = 0;
    if (total_input_persons >= 10 && total_input_days >= 7) {
        discount_each_day = 100.25;
        total_tour_cost -= (discount_each_day * total_input_days * total_input_persons);
        printf("Total Discount = %f\n", discount_each_day * total_input_days * total_input_persons);
    }


    int childs;
    printf("Enter Number Of Childs Going With You: ");
    scanf("%d", &childs);
    

    total_tour_cost -= (childs * 50.5);
    

    printf("Total Tour Cost: %f\n", total_tour_cost);
    
    return 0;
}
