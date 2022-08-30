#include <stdio.h>

int main(void)
{
	int a;

	printf("Enter an integer: ");
	scanf("%d", &a);
	printf("The number you have entered is %d\n", a);

	if (a > 10)
		printf("%d is greater than 10", a);

	return (0);
}
