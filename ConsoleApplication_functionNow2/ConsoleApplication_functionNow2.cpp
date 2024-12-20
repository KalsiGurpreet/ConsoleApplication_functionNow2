#include<stdio.h>
#include<math.h>

float square(float); // function declaration with formal parameters. just showing the type of the variables.

int main(void)
{
	float a, b, a_sqr, b_sqr, c;
	printf("A?\n");
	scanf_s("%f", &a);
	printf("B?\n");
	scanf_s("%f", &b);

	a_sqr = square(a); // function invocation with actual parameters or expression.
	b_sqr = square(b);
	c = sqrt(a_sqr + b_sqr);
	printf("c is %f\n", c);

}

float square(float length) // function definition, actual parameters will pass onto formal parameters.
{
	return length * length;
}