#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);
int end();
int (*operations[5])(int a, int b);

int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
  
  int o, a, b, result;
	
	printf("Operand 'a': ");
	scanf("%d", &a);
  
	printf(" | Operand 'b': ");
	scanf("%d", &b);
  
	printf("Specify the operation to perform (0 : add | 1 : subtract | 2 : Multiply | 3 : divide | 4 : exit):");
	scanf("%d", &o);
 
  
	operations[0] = add;
	operations[1] = subtract;
	operations[2] = multiply;
	operations[3] = divide;
  operations[4] = end;
  
  result = (*operations[o]) (a, b);
  
	printf("x = %d\n", result);
	return result;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf ("Subtracting 'b' from 'a'\n"); return a - b; }
int multiply (int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide (int a, int b) { printf ("Dividing 'a' by 'b'\n"); return a / b; }
int end(){ exit(0); }