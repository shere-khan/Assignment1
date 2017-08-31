#include <stdio.h>

#define DISTANCE_TO_CARRIBEAN 7228
#define ORANGES_PER_CREW_MEMBER 0.5

void main(void) {
    int kilos_per_day;
    int ship_capacity;

    printf("How many kilos can ship travel in one day?\n");
    scanf("%d", &kilos_per_day);
    double days_to_reach_destination = DISTANCE_TO_CARRIBEAN / (double) kilos_per_day;

    printf("days to reach destination %1f\n", days_to_reach_destination);

    printf("How many crew members can ship hold?\n");
    scanf("%d", &ship_capacity);

    double oranges_needed = days_to_reach_destination * ship_capacity * ORANGES_PER_CREW_MEMBER;
    printf("You will need %.2f oranges to make the trip!\n", oranges_needed);
}