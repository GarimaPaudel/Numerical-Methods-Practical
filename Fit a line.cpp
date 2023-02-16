#include<stdio.h>
#include<math.h>

int main()
{
	int i,n;
	double x[20],y[20],a,b,sumx=0,sumy=0,sumxy=0,sumx2=0;
	printf("How many terms??");
	scanf("%d",&n);
	printf("Enter the values of x: ");
	for(i=0;i<n;i++){
		scanf("%lf",&x[i]);
	}
	printf("Enter the values of y: ");
	for(i=0;i<n;i++){
		scanf("%lf",&y[i]);
	}
	for(i=0;i<n;i++)
	{
		sumx2 += x[i]*x[i];
		sumx += x[i];
		sumy += y[i];
		sumxy += x[i]*y[i];
	}
	
	
	a = (sumy*sumx2-sumx*sumxy)/(n*sumx2-sumx*sumx);
	b = (n*sumxy - sumx*sumy)/(n*sumx2-sumx*sumx);
	printf("The equation of the line is :y=%lf+%lfx",a,b);
}
