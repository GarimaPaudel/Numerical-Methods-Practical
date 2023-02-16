#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	return (x+y);
	
}
int main()
{
	float k,x,y,x0,xn,y0,h;
	printf("Enter the value of x0,xn,y0,h:");
	scanf("%f%f%f%f",&x0,&xn,&y0,&h);
	x=x0;
	y=y0;
	do{
		printf("\nx=%f  y=%f",x,y);
		k=h*f(x,y);
        y=y+k;
        x=x+h;
        
	}while(x<=xn);

}
