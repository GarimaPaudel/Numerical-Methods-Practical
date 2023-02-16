#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double f(double x)
{
	return x*x-4*x-10;
}
int main()
{
	double x1,x2,x3,e;
	int itr=1,n;
	printf("x1 and x2: ");
	scanf("%lf%lf",&x1,&x2);
	printf("\nError:");
	scanf("%lf",&e);
	printf("\nMaxm no. of iterations: ");
	scanf("%d",&n);
	do{
		if(f(x1)==f(x2)){
			printf("Division by 0 error occurred");
			break;
		}
		else{
				x3 =(f(x2)*x1-f(x1)*x2)/(f(x2)-f(x1));
		printf("\n Itr.%d  x1 = %lf  x2 = %lf  f(x1)= %lf f(x2) = %lf  x3 = %lf  f(x3) = %lf",itr,x1,x2,f(x1),f(x2),x3,f(x3));
		x1=x2;
		x2=x3;
		itr++;
		}
	
	}
	while(fabs(x2-x1)>=e && itr<=n);
	printf("The root of the eqn is: %lf",x3);
}
