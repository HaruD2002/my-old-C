#include <stdio.h>
#include <math.h>
int main()

{

int n ,x ,i ,r=0 ;

printf("enter 4 digit no.");

scanf ("%d",&n);

for (i=1;i<5;i++) // for 4 digit only

{

x = n%10;

n=n/10;

r=r+x;

}

printf ("sum of given no. is %d",r);

return 0;

}
