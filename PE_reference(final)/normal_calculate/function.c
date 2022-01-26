#include<stdio.h>

int main()
{
    int a1 = 1, b1 = 1, c1, a2 = 2, b2 = 4, c2;
    int d,dx,dy,x,y;
    printf ("The problem is solved by using: \n");
    printf (" A1X + B1Y = C1\n");
    printf (" A2X + B2Y = C2\n");
    printf("\nTotal number of Chickens and Dogs: "); scanf("%d", &c1); printf("\a\n");
    printf("Total of Legs: "); scanf("%d", &c2); printf("\a\n");
    d = a1 * b2 - a2 * b1;
    dx = c1 * b2 - c2 * b1;
    dy = a1 * c2 - a2 * 1;
    if (d) {
        x = dx / d;
        y = c1 - x;
        printf("Bingo! There are %d chickens and %d dogs",x,y);
    }
    else if (dx) printf("No solution");
    else printf ("Infinite solution");
    
    getch();
    return 1;    
}

