// tao ra 2 mang. mang 1 gom 10 phan tu so nguyen duoc gan gia tri cho cac phan tu tai thoi diem khai bao. mang thue 2 gom n phan tu co gia
// tri float duoc nhap tu nguoi dung in cac phan tu trong 2 mang ra man hinh tren 2 dong khac nhau
#include <stdio.h>
int main () {
	int mang1[9] = {1,2,3,4,5,6,7,8,9,10};
	int x,i;
	printf ("Cac gia tri cua mang 1 la\n");
	for (x = 0;x <9;x++){
	printf ("%d ",mang1[x]);
}
	int n;
	printf ("\nEnter a number of input: \n");
	scanf ("%d",&n);
	float ang2[n];
	for (i=0; i < n; i++){
		printf ("Enter the %d number: ",i+1);
		scanf ("%f",&ang2[i]);	
	}
	printf ("cac gia tri cua mang 2 la:\n ");
		for (i=0; i < n; i++){
			printf ("%.2f ",ang2[i]);
		}
	return 0;
}

