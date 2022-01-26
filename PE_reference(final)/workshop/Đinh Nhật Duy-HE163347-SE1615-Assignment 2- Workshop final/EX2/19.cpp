#include<stdio.h>
#include<conio.h>

int main()
{
    int n, a;
    float S;
    S = 0; n = 1;
    do
    {
        printf("\nNhap a: ");
        scanf("%d", &a);
        if(a < 1)
        {
            printf("\nA phai lon hon hoac bang 1. Xin nhap lai !");
        }

    }while(a < 1);

    while(S <= a)
    {
        S = S + 1.0 / n;  
        n++;
    }
    printf("So n can tim la: %d", n);
    printf("\nS = %f", S);

    getch();
    return 0;
}