#include<stdio.h>

int sum(int n) {
    int a = ((n - 1) / 3)  * 3 + 1;
    int sum = ((a + 1) * (a + 2)) / 6 + n;
    return sum; 
} 

int main() {
    int n; 
    printf("Enter  n: ");
    scanf("%d", &n);
    printf("\nSum of the series  %d", sum(n));
    return 0; 
}
