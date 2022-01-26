#include <stdio.h>
#include <conio.h>
int main() {
	int n = 5, i, S1 = 0, S2 = 1; /*Call function*/
	float S3;
	
	while (n <= 5) /*While function with the condition that n <= 5*/
	{
		printf("Enter the number: "); 
	    scanf("%d", &n);
	    
	    
		if (n<=5)  /*on condition is  <=5 */
		{
			printf("\nThis number must be > 5, please Re-");
		}	
    }
	for (i = 1; i <= n; i++) /*For loop given i = 1*/
	{
		S1 += i; /*Calculate s1 */
		S2 = S2 * i; /*Calculate n!*/
		S3 +=1/(float)i; /*Calculate add 1/n*/
	}
    printf("\nS1 = %d", S1);
	printf("\nS2 = %d", S2);
	printf("\nS3 = %.3f", S3);	
	// 
	printf("\n\n\nEnter any number: ");
	scanf("%d", &n);
	int c = 0; /*given c = 0 */ 
    for (i = 1; i <= n; i++)  /*For loop given i=1 */
	{
        if (n % i == 0) /**/
		{
        	c++; /*incredement c*/
		}
    }
    if (c == 2) /*if c= 2 then*/
	{
        printf("\nThis is a Prime number");
    }
    else 
	{
        printf("\nThis is not a Prime number");
    }
    getch();
}
	
	 

