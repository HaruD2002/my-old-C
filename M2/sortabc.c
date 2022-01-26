#include <stdio.h>

// int a,b,c sort a,b,c

int main(){
int a,b,c; 

printf("Enter 3 number:");
scanf("%d%d%d",&a,&b,&c); 

while (a>b && a>c){
	if (b>c){
		printf("%d %d %d",c,b,a);
		break;
	}
	else 
		printf("%d %d %d",b,c,a);
		break; 
}
while (b>c && b>a){
	if(a>c){
		printf("%d %d %d",c,a,b);
		break;
	}
	else {
		printf("%d %d %d",a,c,b);
		break;
	}
}
while (c>a && c>b){
	if (a>b)
	{
		printf("%d %d %d",b,a,c);
		break;
	}
	else {
		printf("%d %d %d",a,b,c);
		break;
	}
}
return 0;
}


