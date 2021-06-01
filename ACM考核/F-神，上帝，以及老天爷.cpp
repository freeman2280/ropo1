/*#include <stdio.h>
#define N 30
double a[N], b[N];

int main()
{
	int n, m;
	scanf_s("%d", &n);
	while (n--) {
		scanf_s("%d", &m);
		a[1] = 0; a[2] = 1;
		b[1] = 1; b[2] = 2;
		for (int i = 3; i <= m; i++) {
			a[i] = (i - 1) * (a[i - 1] + a[i - 2]);
			b[i] = b[i - 1] * i;
		}
		printf("%.2lf%%\n", (a[m] / b[m]) * 100);
	}
}*/
