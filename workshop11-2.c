#include <stdio.h>
int main() {
int test;
int *pInt = 0;
test = 10;
// Print the value of test variable
printf("\nTest's value = %i", test );
// Print the address of test variable
printf("\nTest's address as integer = %p", &test ); // Which formatspecifier to use?

// Print the address of test variable in hexadecimal format
printf("\nTest's address in hexadecimal format = %x\n", &test); // Which

pInt = &test;
// Print the value of pInt variable
printf("pint value = %i \n", *pInt);
// Print the address of pInt variable
printf("pint adress = %p \n", &pInt);

// Print the address of pInt variable in hexadecimal format
printf("pint adress hexa = %x\n ", &pInt);

// Replace the value and print the value of test variable
*pInt = 15;
printf("\nNow, test's value = %i", test );
return 0;
}