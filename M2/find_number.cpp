#include <stdio.h>
#include <math.h>
 
int main(){
    int n, count = 0;
    printf("Enter N:");
    scanf("%d", &n);
    if(n < 2){
        printf("\n%d is not a prime number", n);
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        printf("\n%d is a prime number", n);
    }else{
        printf("\n%d is not a prime number", n);
    }
}
