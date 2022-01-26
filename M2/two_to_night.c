#include <stdio.h>

main(){
	int i,j,mod;
	do{
	
	scanf ("%d%d",&i,&j);
	
	mod = i%j;
	
	printf("%d",mod);
}
while (mod>0);
	
}
