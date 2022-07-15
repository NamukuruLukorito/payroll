/*
PAYROLL,
created by dit-01-0120/2022,
JULY 2022,
MIT License,
C89 Compiler,
*/
#include <stdio.h>
#include <stdlib.h>

int main(){
    int total hoursWorked() = 40;
    int KraPin,employmentNo, hoursWorked, normalPay, overtimePay, taxPaid, netIncome;
    char name[100];
    printf("welcome to gitonga's factory\n");

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("Enter your employees number: ");
    scanf("%d", &employmentNo);

    printf("Enter your KraPin: ");
    scanf("%d", &kraPin);

    Printf("Enter number of hours worked: ");
    scanf("%d", &hoursWorked);

    normalPay = 1000 * totalhoursWorked;
    overtimePay = (hoursWorked - totalhourWorked) * 1500;
    taxPaid = normalPay * 30/100;
    netIncome = (normalPay - taxPaid) + overtimePay;

    printf("normalPay: %d\n", normalPay);
    printf("overtimePay: %d\n", overtimePay)
    printf("taxPaid: %d\n", netIncome);
    printf("netIncome: %d\n",netIncome);

    return 0;

}
