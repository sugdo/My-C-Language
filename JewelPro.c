#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int numJewelsInStones(char* J, char* S) {
	int i = 0, j = 0, count = 0;
		int num1 = 0, num2 = 0;

	while (J[num1] != NULL )
		num1++;
	while (S[num2] != NULL)
		num2++;

	for (i = 0; i<num1; i++)
		for (j = 0; j<num2; j++)
		{
			if (J[i] == S[j])
				count++;
		}

	return count;
}

	
int main(void)
{
	char J[51]; // because of NULL Space
	char S[51];
	int output;
	printf("input J:");
	scanf("%s", J);
	
	printf("input S:");
	scanf("%s", S);
	output = numJewelsInStones(J, S);
		printf("%d\n", output);

}

