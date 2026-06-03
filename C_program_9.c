#include<stdio.h>
int main()
{
	int num,ones,tens,result;
	printf("Enter a two digit number:");
	scanf("%d",&num);
	ones=num%10;
	tens=num/10;
	printf("%d",ones<tens);
}
