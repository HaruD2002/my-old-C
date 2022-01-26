// tim so lon nhat trong mang 
// tim so lon nhat va lon nhi trong bang 
// int max; 
//max = a[0];  
// for(i=0; i<=n;i++){ if (max < a[i]){ max =a[i];} printf("%d",max);
// sap xep mang theo thu tu tang dan 
// nhap mang co 10 so nguyen 

#include <stdio.h>

main(){
	int i,j,n[10],tmp,choice;
	
	printf("Enter 10 integer: ");
	
	for (i=0;i<10;i++){
		scanf ("%d",&n[i]);
	}
	
	for (i=0;i<10;i++){
		for (j=i+1;j<10;j++){
			if (n[i]>n[j]){
				tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
		}
}	
	do{
	printf ("1) find the highest number\n");
	printf("2) find the second highest number\n");
	printf("3) order the array\n");
	printf("Enter your choice:");
	scanf ("%d",&choice);
	
	switch(choice){
	
	case 1:
	for (i=0;i<10;i++){
		printf("%d\n",n[9]);
		 break;
	}
	break;
	
	case 2:
		for (i=0;i<10;i++){
		printf("%d\n",n[9]);
		 break;
	}
		for (i=0;i<10;i++){
		printf("%d\n",n[8]);
		break;
	}
	break;
	
	case 3:
		for (i=0;i<10;i++){
		printf("%d ",n[i]);
	}
	printf("\n");
	break;
	
	default:
		printf("wrong input");
		exit(0);
}
}
while (choice !=0);
return 0;
}
