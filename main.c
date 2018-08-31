#include <stdio.h>

int main(void) {

    int month;
    signed int year;


    do {
        printf("Welcome User, please select a month of the year \n");
        printf("List of the months\n");
        printf("1. January\n");
        printf("2. February\n");
        printf("3. March\n");
        printf("4. April\n");
        printf("5. May\n");
        printf("6. June\n");
        printf("7. July\n");
        printf("8. August\n");
        printf("9. September\n");
        printf("10. October\n");
        printf("11. November\n");
        printf("12. December\n");
        printf("Please type the month with a positive number from 1-12: \n");
        scanf("%i", &month);
    } while (month < 1 || month > 12);

    printf("Input the selected year:\n ");
    scanf("%i", &year);

    switch(month){
        case 1:
            if (year <= 2018) {
                printf("January had 31 days");
            } else {
                printf("January has 31 days");
            }
            break;
        case 2:
            if (year <= 2018 && year % 4 == 0 && year % 100 != 0) {
                printf("February had 29 days");
            } else {
                if (year <= 2018 && year % 400 == 0) {
                    printf("February had 29 days");
                } else if (year > 2018 && year % 4 == 0 && year % 100 != 0) {
                    printf("February has 29 days");
                } else if (year > 2018 && year % 400 == 0) {
                    printf("February has 29 days");
                } else if (year <= 2018 && year % 100 == 0 && year % 400 != 0) {
                    printf("February had 28 days");
                } else if (year > 2018 && year % 100 == 0 && year % 400 != 0) {
                    printf("February has 28 days");
                } else {
                    printf("February had 28 days");
                }}
                break;
        case 3:
            if (year <= 2018) {
                printf("March had 31 days");
            } else {
                printf("March has 31 days");
            }
            break;
        case 4:
            if (year <= 2018) {
                printf("April had 31 days");
            } else {
                printf("April has 31 days");
            }
            break;
        case 5:
            if (year <= 2018) {
                printf("May had 31 days");
            } else {
                printf("May has 31 days");
            }
            break;
        case 6:
            if (year <= 2018) {
                printf("June had 31 days");
            } else {
                printf("June has 31 days");
            }
            break;
        case 7:
            if (year <= 2018) {
                printf("July had 31 days");
            } else {
                printf("July has 31 days");
            }
            break;
        case 8:
            if (year <= 2018) {
                printf("August had 31 days");
            } else {
                printf("August has 31 days");
            }
            break;
        case 9:
            if (year < 2018) {
                printf("September had 31 days");
            } else {
                printf("September has 31 days");
            }
            break;
        case 10:
            if (year < 2018) {
                printf("October had 31 days");
            } else {
                printf("October has 31 days");
            }
            break;
        case 11:
            if (year < 2018) {
                printf("November had 31 days");
            } else {
                printf("November has 31 days");
            }
            break;
        case 12:
            if (year < 2018) {
                printf("December had 31 days");
            } else {
                printf("December has 31 days");
            }

        default:
            printf("Error! Case not valid");

    }

    return 0;
}