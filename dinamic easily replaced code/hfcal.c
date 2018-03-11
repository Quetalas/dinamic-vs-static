#include <stdio.h>
#include <hfcal.h>

void display_calories(float weight, float distance, float coeff) {

	printf("Weight: %3.2f funt\n", weight);
	printf("Distance: %3.2f mile\n", distance);
	printf("Caloeries fired: %4.2f cal\n", coeff * weight * distance);
}