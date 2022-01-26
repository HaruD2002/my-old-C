#include <stdio.h>
#include <conio.h>

void input(int *m, int *n) {
	*m=0;
	*n=0;
	while (*m<=0 && *n<=0) {
		printf ("Enter m and n: ");
		scanf("%d%d", m, n);
	}
}

int main(){
   int num, rem, rev_num, temp, m, n; /*function num, rem ,rev_num, temp, m,n*/
   input(&m, &n);  
   if (m > n) {	/*if loop when m>n*/
    	printf("m is greater than n, please re-enter: ");
   	scanf("%d %d", &m, &n);
   }
   printf("\nPalindrome numbers between %d and %d are: ", m, n);
   for(num=m;num<=n;num++){ /*for loop */
      temp=num; 
      rev_num=0;
      while(temp){
         rem=temp%10; /*rem = temp/10*/
         temp/=10; /*temp = temp /10*/
         rev_num=rev_num*10+rem;/*cal culate rev_num*/
      }
      if(num==rev_num) /*if num= rev_num*/
         printf("%d ",num);
   }
   getch();
   return 0;
}
