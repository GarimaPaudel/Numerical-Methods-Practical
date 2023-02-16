#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	return (x+y);
	
}
int main()
{
	float k1,k2,x,y,x0,xn,y0,h;
	printf("Enter the value of x0,xn,y0,h:");
	scanf("%f%f%f%f",&x0,&xn,&y0,&h);
	x=x0;
	y=y0;
	do{
		printf("\nx=%f  y=%f",x,y);
		k1=h*f(x,y);
		k2=h*f(x+h,y+k1);
        y=y+((k1+k2)/2);
        x=x+h;
        
	}while(x<=xn);

}
