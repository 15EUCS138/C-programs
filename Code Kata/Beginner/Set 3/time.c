#include <stdio.h>

int main(void) {
	int n,min,hr;
	scanf("%d",&n);
	min=n%60;
	hr=n/60;
	printf("%d %d",hr,min);
	return 0;
}
