#include <stdio.h>
 main()
{
   int p, i, n, num;

   scanf("%d", &n);
   int s[n];
   for (i = 0; i < n; i++){
	scanf("%d", &s[i]);
    scanf("%d", &p);
    scanf("%d", &num);
}
   for (i = n - 1; i >= p - 1; i--){
	s[i+1] = s[i];
    s[p-1]= num;
    printf("%d\n",s[i]);
}
   for (i = 0; i <= n; i++)
      printf("%d\n", s[i]);
      
}
