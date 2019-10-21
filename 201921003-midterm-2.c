#include<stdio.h>
int main(void)
{
	int i;
	int *pi = &i;
	for(*pi = 1; *pi<1001; (*pi)++)
	{
		printf("%-4d", *pi);
		if(*pi % 10 == 0)
		{
			printf("\n");
		}
	}
	return 0;
}

