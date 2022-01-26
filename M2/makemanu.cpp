// display menu 
// bam so 1 enter integer 
// bam so 2 enter real number
// bam so 0 exit the program
#include <stdio.h>
#include <stdlib.h>
main()
{
    float i=0;
    int choice, n=0;
    do{
    printf("Press 1 for integer number\n");
    printf("Press 2 for real number\n");
    printf("Press 0 to exit\n");
    printf("Enter your choice:\n");
    scanf ("%d",&choice);
    
    switch(choice){
    	case 1:
    	scanf("%d",&n);
    	printf("%d\n",n);
    	break;
    	
    	case 2:
    	scanf("%f",&i);
    	printf("%f\n",i);
    	break;
    	
    	case 0:
    	break;
    	exit(0);
	}
}
while (choice !=0);
      
}


