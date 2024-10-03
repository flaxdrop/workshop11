#include <stdio.h>

int main()
{

int *int_ptr;
float *float_ptr;
double *double_ptr;
char *char_ptr;

printf("int pointer size = %i bytes\n", sizeof(*int_ptr));
printf("float pointer size = %i bytes\n", sizeof(*float_ptr));
printf("double pointer size = %i bytes\n", sizeof(*double_ptr));
printf("char pointer size = %i bytes\n", sizeof(*char_ptr));




return 0;

}