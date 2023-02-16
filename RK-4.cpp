#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
	return(x+y);
}
int main()
{
	int i;
	float x0,y0,h,xn,x,y,k1,k2,k3,k4;
	printf("Enter the value of x0,xn,y0,h:");
	scanf("%f%f%f%f",&x0,&xn,&y0,&h);
	x=x0;
	y=y0;
	do{
	
		k1=h*f(x,y);
		k2=h*f(x+(h/2),y+(k1/2));
		k3=h*f(x+(h/2),y+(k2/2));
		k4= h*f(x+h,y+k3);
		x=x+h;
		y=y+(k1+2*k2+2*k3+k4)/6;
			printf("\nx = %f  y=%f",x,y);
	

	}while(x<xn);
}
