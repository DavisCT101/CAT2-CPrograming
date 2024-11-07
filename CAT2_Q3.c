/*Ref no:CT101/G/22766/24
Name: Mucheke Davis Mwangi
*/
#include <stdio.h>

int main() {
    float hourly_wage, hours_worked, gross_pay, taxes, net_pay;
    int overtime_hours;

    // Get user input for hours worked and hourly wage
    printf("Enter the hours worked in a week: ");
    scanf("%f", &hours_worked);

    printf("Enter the hourly wage: ");
    scanf("%f", &hourly_wage);

    // Calculate overtime hours
    if (hours_worked > 40) {
        overtime_hours = hours_worked - 40;
        hours_worked = 40;
    } else {
        overtime_hours = 0;
    }

    // Calculate gross pay
    gross_pay = (hours_worked * hourly_wage) + (overtime_hours * (hourly_wage * 1.5));

    // Calculate taxes
    taxes = 0.15 * 600 + 0.20 * (gross_pay - 600);

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Print the results
    printf("Gross pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net pay: $%.2f\n", net_pay);

    return 0;
}