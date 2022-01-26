#include <stdio.h>
#include <string.h>

main(){
	char s1[100];
	char s2[100];
	
	gets (s1);
	gets (s2);
	//the length of string
	printf ("number of digit in s1 is: %d \number of digit in s2 is:%d\n",strlen(s1),strlen(s2));
	//compare string
	if (strcmp(s1,s2)==0)
		printf("s1 is identical to s2\n");
	else if(strcmp(s1,s2)<0)
		printf("s1 < s2 \n");
	else {
		printf("s1 > s2\n");
	}
	//concatinate s1 to s2 and reverse s1 and s2
	strcat(s2,s1);
	strrev(s2);
	strupr(s2);
	strlwr(s2);
	puts (s2);
	//copy the string
	strcpy(s2,s1);
	puts(s2);

	
}





