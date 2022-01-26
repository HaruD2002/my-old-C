#include <stdio.h>
#include <conio.h>
#include <math.h>
 
long decimalToBinary(long n); /*using 8 bytes data type*/
int main() 
{
    int n; /*Function n*/
    char term;
    printf("Enter n: ");
    if(scanf("%d%c", &n, &term) != 2 || term != '\n') /*if enter a character*/
        printf("This is not an integer\n");
    else
        printf("=> Valid Input\n");
    printf("Binary number of %d is %d", n, decimalToBinary(n)); 
    long num, temp, digit, sum = 0; /*function num, temp,digit and the value of sum = 0*/
    //Sum of all digits
    printf("\n\nEnter n (again): ");
    scanf("%ld", &num);
    temp = num; /*temp = num*/
    while (num > 0) /*while loop when num > 0*/
    {
        digit = num % 10; /*digit calculate*/
        sum += digit; /*Calculate the number of digit*/
        num /= 10; /* num = num/10*/
    }
    printf("Sum of the digits %ld = %ld\n", temp, sum); 
    /*Reverse number*/
    int rev = 0, r;/*Given rev=0 and r*/
	while (n > 0) /*While loop when n>0*/
	{
        r = n % 10; /*r = n/10*/
        rev = rev * 10 + r; /*rev = rev *10 +r */
        n /= 10; /* n = n/10*/
    }
    printf("\nThe reverse number is %d", rev);
    getch(); /*red the value*/
    
}
 
long decimalToBinary(long n) 
{
    int remainder; /*function remaider*/
long binary = 0, i = 1; /*given binary =0 and i=1*/
  
    while(n != 0) /*While loop when n is not equal to 0*/
	{
        remainder = n%2;/*calclulate remainder*/
        n = n/2; /* value of n*/
        binary= binary + (remainder*i); /*calculate bianry */
        i = i*10; /*value of i */
    }
    return binary;
}


