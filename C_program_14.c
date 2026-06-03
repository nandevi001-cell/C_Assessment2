#include<stdio.h>
int main()
{
	int num,first2,last2;
	printf("Enter a four digit number:");
	scanf("%d",&num);
	first2 = num / 100;
    last2 = num % 100;
	printf("%d", first2 == last2);

}
