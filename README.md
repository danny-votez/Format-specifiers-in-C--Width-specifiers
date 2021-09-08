# Format-specifiers-in-C--Width-specifiers
In this short illustration, the focus is on the format specifiers in C called "Width specifiers"

Format specifiers are useful in C programs
One of this is the width specifier, vital in using printf()
Through this specifier, there is informs printf() how many columns on screen
should be used while printing a value
The simple codes below depicts this;

# Illustration of Width Specifier
<code>
  <pre>
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

    return 0;
}
  </pre>
</code>

## Below is the Sample Run Time Screen
![image](https://user-images.githubusercontent.com/77758884/132588180-d0130695-0da5-4ec3-b6ea-ea15c39d61b9.png)
