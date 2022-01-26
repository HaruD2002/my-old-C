#include <stdio.h>

int main() {
    int n, rN = 0, r, o;
    printf("Enter an integer: ");
    scanf("%d", &n);
    o = n;

    // reversed integer is stored in reversedN
    while (n != 0) {
        r = n % 10;
        rN = rN * 10 + r;
        n /= 10;
    }

    // palindrome if orignalN and reversedN are equal
    if (o == rN)
        printf("%d is a palindrome.", o);
    else
        printf("%d is not a palindrome.", o);
	
    return 0;
}

