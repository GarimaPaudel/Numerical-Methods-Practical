 #include<stdio.h>
 #include<math.h>
 
 float f(float x)
 {
 	return (1/(1+pow(x,2)));
 }
 
 int main()
 {
 	int i,n;
 	float x0,xn,x[20],y[20],h,ans,sum=0; 
 	printf("\nEnter x0,xn and h: ");
 	scanf("%f%f%f",&x0,&xn,&h); 
	 n=(xn-x0)/h;	
 	if(n%2==1){
 		n=n+1;
	 }
	 h=(xn-x0)/n;
	 printf("h = %f, n = %d",h,n);
	 for(i=0;i<n;i++)
	 {
	 	x[i]=x0+i*h;
	 	y[i]=f(x[i]);
	 }
	 for(i=1;i<n;i++)
	 {
	 	sum+=y[i];
	 }
	 ans = (h/2)*(y[0]+y[n]+2*sum);
	 printf("\n%f",ans);
 }
