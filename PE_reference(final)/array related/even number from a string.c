#include <stdio.h>
int main()
{
    int n1, n2, i, j, p, y;
    printf("number of intervals: ");
    scanf("%d", &y);
    for(j=1; j<=y; j++)
    {
        scanf("%d", &n1);
        for(i=1;i<=n1; i++)
        {
            p=i%2;
            if(p==0)
                printf(" %d", i);     
        }
        return 0;
    } 
}
