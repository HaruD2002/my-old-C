/*1. mang so nguyen 10 phan tu in ra nguoc lai voi thu thu dc nhap
2. in ra gai tri cua cac phan tu trong mang co cac chi so là so le
3. in ra cac so nguyen to trong mang */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int arr[100];
	int input = 0;
	int n, i;
	int check = 1;
	printf("Enter how many number: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Element %d= ", i);
		scanf("%d", &arr[i]);
	}
	do
	{
		printf("\nChoose one of the following options: \n");
		printf("1. Reverse array: \n");
		printf("2. Odd number: \n");
		printf("3. Prime number: \n");
		printf("0. Exit\n");
		printf("Your selection (0 -> 3):  ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			for (int j = n - 1; j >= 0; j--)
			{
				printf("%d\t", arr[j]);
			}
			break;
		case 2:
			for (int i = 0; i < n; i++)
			{
				if (arr[i] % 2 == 1)
				{
					printf(" %d is odd number\n", arr[i]);
				}
			}
			break;
		case 3:
			for(i=0; i<n; i++){
				check = 1;
				if(arr[i]<2){
					check = 0;
				}
				if(arr[i]>=2){
					for(int j=2; j <= sqrt(arr[i]); j++){
						if (arr[i]%j==0){
							check = 0;
							break;
						}
					}
				}
				if(check!=0){
					printf("%d", arr[i]);
				}
			}
		default:
			break;
		}
	} while (input != 0);
	return 0;
}
