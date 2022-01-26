#include <stdio.h>

main(){
	int choice; 
	int i,n,m,sum=0,np=0,p=0; 
	do { 
	printf("1> Enter the integer(N)\n");
	printf("2> sum of all the odd number from 1 to N\n");
	printf("3> check N is prime or not and the closest before N\n");
	printf("4> Calculate the interception of 2 rectangle\n");
	printf("0> Exit the program\n");
	printf("Enter your choice:\n");
	scanf ("%d",&choice);
	
	switch(choice){
	
	case 1: 
	scanf ("%d",&n);
	break; 
	
	case 2:
	for (i=1;i<=n;i++){
		if (i%2!=0){
			sum +=i;
		}
	}
	printf("sum of all odd number is =%d\n",sum);
	break;
	
	case 3: 
	p = n;
	m = n/2;

	for (i=2; i<=m;i++){
		if (n%i==0){
			np =1 ;
			break;
		}		
	}
	if (np==1){
		for (i=2;i<=m;i++){
			if (n%i == 0 && n!=1) {
				printf ("%d is a prime not number and the closest prime is %d\n ",n,p);
			}
			
		}	
	}
	else {
	
		printf("%d is a prime number\n",n);
		
		}
	break;
	
	case 4: 
	break;
		
	case 0:
	break;
	exit(0);
		
	default:
	printf("Invalid choice\n");
	break;
}
	
}while(choice !=0);
	
	return 0;
}
