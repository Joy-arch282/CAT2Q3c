#include <stdio.h>

int main() {
    float hours_worked, hourly_wage;
    float gross_pay, taxes, net_pay;
    
    // Get user input for hours worked and hourly wage
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);
    
    // Calculate gross pay
    if (hours_worked <= 40) {
        gross_pay = hours_worked * hourly_wage;
    } else {
        float regular_pay = 40 * hourly_wage;
        float overtime_hours = hours_worked - 40;
        float overtime_pay = overtime_hours * (hourly_wage * 1.5);
        gross_pay = regular_pay + overtime_pay;
    }
    
    // Calculate taxes
    if (gross_pay <= 600) {
        taxes = gross_pay * .15;
    } else {
        taxes = (600 * .15) + ((gross_pay - 600) * .20);
    }
    
    // Calculate net pay
    net_pay = gross_pay - taxes;
    
    // Print results
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);
    
    return 0;
}