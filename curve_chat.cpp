#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    float x[20],y[20],sumx=0,sumx2=0,sumxy=0,sumy=0,A,B,a,b;

    printf("How many terms?\n");
    scanf("%d",&n);
    if (n<=0) {
        printf("Invalid number of terms\n");
        return 0;
    }
    printf("Enter the values of x: \n");
    for(i=0;i<n;i++){
        scanf("%f",&x[i]);
        if (x[i] <= 0) {
            printf("Invalid value of x. x must be positive\n");
            return 0;
        }
    }
    printf("Enter the values of y: \n");
    for(i=0;i<n;i++){
        scanf("%f",&y[i]);
        if (y[i] <= 0) {
            printf("Invalid value of y. y must be positive\n");
            return 0;
        }
    }
    for(i=0;i<n;i++)
    {
        x[i]=log(x[i]);
        y[i]=log(y[i]);        
    }
    for(i=0;i<n;i++)
    {
        sumx2 += x[i]*x[i];
        sumx += x[i];
        sumy += y[i];
        sumxy += x[i]*y[i];
    }
    A = (sumy*sumx2-sumx*sumxy)/(n*sumx2-sumx*sumx);
    B = (n*sumxy - sumx*sumy)/(n*sumx2-sumx*sumx);
    a = exp(A);
    b = exp(B);
    printf("The reqd eqn is : y =%.3f x^ %.3f",a,b);
}





