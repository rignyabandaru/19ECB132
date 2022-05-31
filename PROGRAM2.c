#include<stdio.h>
int main()
{
	int a,b;
	int sum,sub,mult,mod;
	float div;
	printf("Enter any two numbers");
	scanf("%d%d",&a,&b);
	sum=a+b;
	sub=a-b;
	mult=a*b;
	div=(float)a/b;
	mod=a%b;
	printf("sum is %d\n",sum);
	printf("sub is %d\n",sub);
	printf("mult is %d\n",mult);
	printf("div is %f\n",div);
	printf("mod is %d\n",mod);
	return 0;
}
/* output
Enter any two numbers1
2
sum is 3
sub is -1
mult is 2
div is 0.500000
mod is 1 */