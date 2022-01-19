#include<stdio.h>
#include<math.h>
float fun( float x)
{
float y;
y= pow(x, 2)+x-2;
return y;
}
void main()
{
float x1, x2, x0, error=0.0001;
int i=0;
printf("\nEnter two initial guess:");
scanf("%f%f", &x1, &x2);
do
{
x0=x1-(fun(x1)*(x2-x1))/(fun(x2)-fun(x1));
x2=x1;
x1=x0;
i++;
}while(fabs (fun(x0))>error);
printf("\nRoot=%f", x0);
printf("\nNumber of iteration=%d",i);

}