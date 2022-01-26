#include <stdio.h>
#include<math.h>  
  
int main () {
 int a, b, c; 

	printf("\n Enter A: " );
	scanf("%d",&a  );
	printf("\n Enter B: " );
	scanf("%d",&b);	
	printf("\n Enter C: " );
	scanf("%d",&c );
 
  if(a < b && a < c) /*find smallest number out of 3*/
	{
		printf(" min= %d",a);
	}
	else if(b < c)
	{
		printf("min= %d ",b);
	}
	else
	{
		printf("min = %d",c);
	}	
	
	  if(a > b && a > c)/*find biggest number out of 3*/
	{
		printf(" max =%d",a);
	}
	else if(b > c)
	{
		printf(" max %d =",b);
	}
	else
	{
		printf(" max =%d",c);
	}	
		
		
		
	if((a>=b)&&(a>=c)) /*oder the number*/
    {
        if(b>=c)
        {
            printf("\n Ascending order : %d < %d < %d",c,b,a);
        }
        else
        {
            printf("\n Ascending order : %d < %d < %d",b,c,a);
        }
    }
    else if((b>=a)&&(b>=c)) /*order the number 2nd part*/
    {
        if(a>=c)
        {
            printf("\n Ascending order : %d < %d < %d",c,a,b);
        }
        else
        {
            printf("\n Ascending order : %d < %d < %d",a,c,b);
        }
    }
    else if((c>=a)&&(c>=b))
    {
        if(a>=b)
        {
            printf("\n Ascending order : %d < %d < %d",b,a,c);
        }
        else
        {
            printf("\n Ascending order : %d < %d < %d",a,b,c);
        }
    }

	return 0;
}
        
