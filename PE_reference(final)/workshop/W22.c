#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int prime(int x) { 
    int y;/*function y*/
    for (y = 2; y < x; y++) { /*For loop to find all common divider*/
        if (x % y != 0) /*if x/y not equal to 0 then keep going*/
            continue;
        else
            return 1; /*return error*/
    }
    return 0; /*Stop a success*/
}
int main() {
    int n, m, i, gcd, lcm, k;/*Call function*/
    /*Input m and n */
    printf("Enter M = ");
    scanf("%d",&m);
    printf("Enter N = ");
    scanf("%d",&n);
    /*Common prime divisors*/
    lcm = m * n; /*calculate  m*n */
    while (m != n) /*While m not equal to n*/
        if (m > n) m = m - n; /*if m>n = m-m-n*/
        else n = n - m;/*if m < n then n=n-m*/
    gcd = m; /*gcd = m*/
    lcm = lcm / gcd; /*calculate lcm*/
    if (m <= 1)
        printf("\nNo CPD ");
    else 
	{
        printf("\n CPD : ");
        int c = 0; /*given value c= 0 */
        for (i = 1; i <= m; i++) /*For loop*/
	    {
            if (m % i == 0)  /*if m/i = 0*/
		    {
        	    c++; /*increment of c*/
		    }
        }
        if (c == 2) /*if loop when c=*/
        {
            printf("%d", i-1);
        }
        else 
	    {
            printf("None");
	    }
    }
    printf("\nGMD: %d\nLMD: %d", gcd, lcm);
    getch();/*read the concole and return the value in other form */
}
