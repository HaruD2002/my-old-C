#include <stdio.h>

int add(int a, int b);
int diff(int a, int b);
int mul(int a, int b);
float div(int a,int b);
int remain (int remain);

int main (){
	int x, y,rem; 
	int r ;
	char op; 
	
	printf ("Enter X:");
	scanf ("%d" ,&x);
	printf ("Enter Y:");
	scanf ("%d", &y);
	printf ("Enter denote:");
	scanf (" %c", &op);
	
	switch (op){
		case '+':
			printf (" %d + %d = &d", x, y, add(x,y));
			break;
		
		case '-':
			printf (" %d - %d = %d",x ,y, diff (x,y));
			break;
			
		case '*':
			printf ("%d * %d = %d",x ,y , mul(x,y));
			break;
			
		case '/':
			rem = x % y;
			if (y ==0) {
				printf ("the value mustn't equal to zero'");
				
			}
			printf ("%d / %d = %.2f \n",x ,y, div(x,y));
			printf ("remain = ", rem);
			break;
			
		default:
			printf ("Wrong denote please enter +,-,*,/ for this to work ~~");
		break;

	}
	return 0;
}

int add (int a, int b){
	return a+b;
}

int diff (int a,int b){
	return a-b;
}
int mul (int a,int b){
	return a*b;
}
float div (int  a,int b){
	return a/b;
}


