// tim so lon nhat trong mang 
// tim so lon nhat va lon nhi trong bang
// sap xep mang theo thu tu tang dan 
// nhap mang co 10 so nguyen 

#include <stdio.h>

main(){
	int i,j,tmp,choice;
	
	int a[n];
	int size;
	size = sort[n]/sort[0];	
	
	for (i=0;i<size;i++){
		scanf ("%d",&a[i]);
	}
	
	for (i=0;i<size;i++){
		for (j=i+1;j<size;j++){
			if (a[i]>a[j]){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
}

	

return 0;
}
