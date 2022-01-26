#include <stdio.h>

// int a,b,c sort a,b,c

int main(){
int a,b,c; 

printf("Enter 3 number:");
scanf("%d%d%d",&a,&b,&c); 

while (a>b && a>c){
	if (b>c){
		printf("%d %d %d",c,b,a);
	}
	else 
		printf("%d %d %d",b,c,a);
}

}


