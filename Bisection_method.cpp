#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
double f(double x)
{
	return x*x*x-4*x-9;
}
int main()
{
	double x1,x2,x3,e;
	int itr=1,n;
	printf("Enter the two points: ");
	scanf("%lf%lf",&x1,&x2);
	printf("Error: ");
	scanf("%lf",&e);
	printf("Maximum number of iterations: ");
	scanf("%d",&n);
	do{
	x3=(x1+x2)/2;
	printf("\n Iter.%d  x1 = %lf  x2 = %lf  f(x1) = %lf  f(x2) = %lf  x3 = %lf  f(x3) = %lf",itr,x1,x2,f(x1),f(x2),x3,f(x3));
    itr++;
	if((f(x1)*f(x2))<0)
	{
		if(f(x3)==0)
		{
			break;
		}
		else if((f(x1)*f(x3))<0)
		{
			x2=x3;
		}
		else{
			x1=x3;

		}
	}
	else{
		printf("\nIncorrect values of x1 and x2");
		exit(0);
	}
		}
		while(fabs(x2-x1)>=e && itr<=n);
		printf("\n\nThe root of the equation is : %lf",x3);
}
