#include <stdio.h>

int main()
{
	int rows = 5;
	int i,j;
	for(i=1;i<=rows;i++){
		for(j=1;j<=rows-i;j++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}