#include <stdio.h>

// int a,b,c sort a,b,c

int main(){
	int a=0,b=0,c=0;
	printf("Enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b &&a>c){
		if(b>c) {
			printf("a>b>c");
	}
	else 
	{
		printf("a>c>b");
	}

}
}

