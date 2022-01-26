#include <stdio.h>

main()
    {
        int i, n;
        scanf("%d", &n);
        int s[n];
        for (i = 0; i < n; i++){
            scanf("%d", &s[i]);
        }
        printf("Even:");
        for (i = 0; i < n; i++){
            if (s[i] % 2 == 0) 
            {
                printf("%d", s[i]);
            }
        }
 		printf("\n");
        printf("Odd:");
        for (i = 0; i < n; i++){
            if (s[i] % 2 != 0) 
            {
                printf("%d ", s[i]);
            }
        }
 
    }
