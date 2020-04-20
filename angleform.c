#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter values for a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b==90 || b+c==90 || a+c==90)
	printf("It is a Complimentary angle");
	else if(a+b+c==180)
	printf("Angles form q Trianlge");
}
