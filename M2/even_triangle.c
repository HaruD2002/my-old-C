#include <stdio.h>

int main() {
   int n,i,j;

   scanf ("%d",&n);   // number of rows.

   for(i = 1; i <= n; i++) {
      for(j = 1; j <= n-i; j++)
         printf("0");

      for(j = 1; j <= i; j++)
         printf("* ");
		for (j=1;j<=n-i;j++)
		printf("0");
		

      printf("\n");
}
   return 1;
}

// nhap n in ra so nguyen to

