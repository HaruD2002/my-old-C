#include <stdio.h>

main()
{
    int n, i, j, tmp;
    scanf("%d", &n);
    int s[n];
       for(i=0;i<n;i++){
	      scanf("%d",&s[i]);
	    }
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(s[j] <s[i]) {
                tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
    for(i=0; i<n; i++){
        printf("%d ", s[i]);
    }
	return 0;
}
