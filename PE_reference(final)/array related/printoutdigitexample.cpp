#include <stdio.h>

int printDigits(int n){
  int digit;
  
  if(n < 10){//caso base
      digit = n;
      printf("%d\n", digit);
    }else{
      digit = printDigits(n/10);
      digit = printDigits(n%10);
    }

    return digit;
}

int main(){
    int num = 3467678;

    printDigits(num);

    return 0;
}
