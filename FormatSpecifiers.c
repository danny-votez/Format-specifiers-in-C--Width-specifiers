// Format specifiers are useful in C programs
// One of this is the width specifier, vital in using printf()
// Through this specifier, there is informs printf() how many columns on screen
// should be used while printing a value
#include <stdio.h>

int main()
{
    int weight = 250;
    printf("Weight is %i Kgs\n", weight);
    printf("Weight is %2i Kgs\n", weight);
    printf("Weight is %4i Kgs\n", weight);
    printf("Weight is %6i Kgs\n", weight);
    printf("Weight is %-6i Kgs\n", weight);
    printf("Weight is %1i Kgs\n", weight);
    printf("Weight is %-10i Kgs\n", weight);
    printf("Weight is %10i Kgs\n", weight);   
    
    // For %10i above, it means that;
    // print the variable as a decimal intege
    // in a field of 10 columns
    // If the value does not fill the columns, the value is right justified


    printf("Weight is %-10i Kgs\n", weight);
    printf("Weight is %-20i Kgs\n", weight);

    // For %-20i above, it means that;
    // print the variable as a decimal integer
    // in a field of 20 columns,
    // And if the value does not fill the columns, the value is left justified

    printf("Weight is %-30i Kgs\n", weight);
    printf("Weight is %40i Kgs\n", weight);

    // ADDITIONAL EXAMPLES

    // The width specifier can also be used to make printed variable be in columns
// This can be illustrated with the examples below;

    printf("\n|===================SEPARATOR===============|\n");

    float rate0, rate1, rate2, rate3, rate4, rate5, rate6, rate7, rate8, rate9;
    rate0 = 3.5266; rate1 = 4.8883; rate2 = 5.6626; rate3 = 4.24252; rate4 = 2.9828;
    rate5 = 9.6262; rate6 = 5.9282; rate7 = 1.8282; rate8 = 7.5252; rate9 = 3.8262;
    printf("%10.4f%10.4f%10.4f%10.4f\n%10.4f%10.4f%10.4f%10.4f\n", rate0, rate1, rate3, rate4, rate5, rate6, rate7, rate8, rate9);

    
    // The value 10 specifies the width format
    // The value .4 specifies the number of decimal places to have
    // If not specified, C adds 6 decimal places


// The output will look like this;

// 3.5266   4.8883    5.6626   4.24252   2.9828
// 9.6262   5.9282    1.8282   7.5252    3.8262

    return 0;
}