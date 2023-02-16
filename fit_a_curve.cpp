 #include<stdio.h>
 #include<math.h>
 
 int main()
 {
 	int i,n;
 	double x[20],y[20],X[20],Y[20],sumx=0,sumx2=0,sumxy=0,sumy=0,A,B,a,b;
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
		X[i]=log(x[i]);
		Y[i]=log(y[i]);		
	}
	for(i=0;i<n;i++)
	{
		sumx2 += X[i]*X[i];
		sumx += X[i];
		sumy += Y[i];
		sumxy += X[i]*Y[i];
	}
	A = (sumy*sumx2-sumx*sumxy)*1.0/(n*sumx2-sumx*sumx)*1.0;
	B = (n*sumxy - sumx*sumy)*1.0/(n*sumx2-sumx*sumx)*1.0;
	a = exp(A);
	b = exp(B);
	printf("The reqd eqn is : y =%4.3lf x^ %4.3f",a,b);
 }
