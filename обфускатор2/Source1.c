#include<stdio.h>
#include <math.h>

int square( int a)
{
	int  p = 2, i, m = 1, k, j = 0, l;
	int arr[150];

	while (p <= a)
	{
		if ((a % p) == 0)
		{
			a = a / p;
			arr[j] = p;
			j++;
		}
		else {
			p = p + 1;
		}
	}

	l = j;



	for (j = 0; j < l; j++) {
		if (arr[j] == arr[j + 1]) {
			m++;
		}
		else
		{
			if ((m % 2) != 0) {
				return 1;
			}
			if ((m % 2) == 0) {
				m = 1;
			}
		}
	}
	return 2;
}


int main(void) {
	int i, j, k = 0, l = 0;
	int p, max = 0;
	float h;
	int mass[2][2];
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			printf("mass[%d][%d]=", i, j);
			scanf_s("%d", &mass[i][j]);
		}
	}

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			p = square(mass[i][j]);
			if (p == 2) {
				if (mass[i][j] > max) {
					max = mass[i][j];
					k = i; l = j;
				}
			}

		}
	}

	if (max == 0) {
		printf("No compleate square");
		return 0;
	}
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			if (mass[i][j] == max) {
				k = i; l = j;
				printf("Max:mass[%d][%d]=%d\n", k, l, max);
			}
		}
	}
	return(0);
}