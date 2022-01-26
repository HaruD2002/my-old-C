#include<stdio.h>
int main(){
   int num, rem, rev, temp, m, n;

   printf("Enter the lower limit: ");
   scanf("%d",&m);

   printf("Enter the upper limit: ");
   scanf("%d",&n);

   printf("Palindrome numbers between %d and %d are: ",m,n);
   for(num=m;num<=n;num++){
      temp=num;
      rev=0;
      while(temp){
         rem=temp%10;
         temp=temp/10;
         rev=rev*10+rem;
      }
      if(num==rev)
         printf("%d ",num);
   }
   return 0;
}

