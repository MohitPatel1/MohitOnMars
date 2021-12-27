/* Author : Mohit Patel
this programe will find out the weekly gross income ,taxes and weekly net income by entering the number of hours worked*/


#include<stdio.h>

int main()

{
    //Declaring variables
    //gpay=Gross Pay
    //npay=Net Pay

    unsigned int hours;
    float gpay ,tax ,npay;

    //getting the number of worked hours from user
    scanf("%d",&hours);

    //calculating gross pay
    if(hours<=40)
        gpay = hours*12;
    else
        gpay=((40*12)+(hours-40)*18);

    printf("gross pay is : $%.2f\n",gpay);

    //calculating taxes

    if(gpay<=300)
        tax=gpay*0.15;

    else
        if(gpay>300 && gpay<=450)
            tax=((300*0.15)+(gpay-300)*0.2);
        else
            tax=((300*0.15)+(150*0.2)+(gpay-450)*0.25);

    printf("taxes pay is : $%.2f\n",tax);

    //Calculating net pay

    npay=gpay-tax;
    printf("net pay is : $%.2f\n",npay);

    return 0;
}
