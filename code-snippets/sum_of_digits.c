#include <stdio.h>

int main()
{
	int num = 258;
	int sum = 0;
	while(num!=0){
		sum = sum + num%10;
		num = num/10;
	}
	printf("%d",sum);
	return 0;
}