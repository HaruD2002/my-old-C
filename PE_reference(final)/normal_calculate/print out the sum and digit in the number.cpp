#include <stdio.h>
    
void printDigit(int x) {
    int r;
    // Base Case
    if (x == 0) {
        return;
    }  
    // Extract the last digit
    r = x % 10; 
    // Recursive call to next
    // iteration
    printDigit(x / 10); 
    // Print r
    printf("%d ", r);
}
    
int DigitSum(int x, int sum) {
        while (x > 0) {
            int digit = x % 10;
            sum += digit;
            x /= 10;
        }
        return sum;
}
    
int main () {
    int x, sum;
    printf("Enter x: ");
    scanf("%d", &x);
    while (x < 0 || x > 65535) {
            printf("Doesn't meet the condition, re-enter x: ");
            scanf("%d", &x);
    }
    printf("\nPrint out the digits of %d: ", x);
    printDigit(x);
    printf("\nSum of Digits = %d ", DigitSum(x, sum));
    
    return 0;
}

