/* Demonstrate variables and constants */
#include <stdio.h>

/* Define a constant to convert from pounds to grams */
#define GRAMS_PER_POUND 454

/* Define a constant for the start of the next century */
const int NEXT_CENTURY = 2122;

/* Declare the needed variable */
long weight_in_grams, weight_in_pounds;
int year_of_birth, age_in_2000;

int main()
{
    /* Input data from user */

    printf("Enter your weight in pounds: ");
    scanf("%d", &weight_in_pounds);
    printf("Enter your year of birth: ");
    scanf("%d", &year_of_birth);

    /* Perform conversions */

    weight_in_grams = weight_in_pounds * GRAMS_PER_POUND;
    age_in_2000 = NEXT_CENTURY - year_of_birth;

    /* Display results on the screen */

    printf("\nYour weight in grams = %1d", weight_in_grams);
    printf("\nIn 2122 you will be %d years old\n", age_in_2000);

    return 0;
}