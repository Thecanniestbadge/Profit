// Programmer:		Thecanniestbadge
// Date:			5/24/2023
// Program Name:	Profit



#define _CRT_SECURE_NO_WARNINGS // Disable warnings (and errors) when using non-secure versions of printf, scanf, strcpy, etc.
#include <stdio.h> // Needed for working with printf and scanf

int main(void)
{
	// Constant and Variable Declarations
	double totalSales = 0.0;
	double projectedProfit = 0.0;
	const double PROFIT_PERCENTAGE = 0.21; // 21%


	// *** Your program goes here ***
	// *** INPUT ***
	// Ask the user for the total sales
	// Prompt for the total sales
	printf("Enter the projected amount of total sales: $");
	// Get the total sales
	scanf("%lf", &totalSales);
	printf("\n"); // Blank line


	// *** PROCESSING ***
	// Calculate the profit
	projectedProfit = totalSales * PROFIT_PERCENTAGE;

	// ** OUTPUT ***
	// Display the profit (formatted to 2 decimal places)
	printf("The amount of profit that will be made from sales\n");
	printf("of $%.2lf is $%.2lf.\n", totalSales, projectedProfit);
	printf("\n"); // Blank line


	return 0;
} // end main()
