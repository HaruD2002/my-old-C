/* 
-tao 3 chuoi lan luot str1,2,3
-str1 dung cach 1 
-str2 dung cach 2
-str3 duoc nhap tu ban phim theo cach 3
-hien thi str1,2,3 tren 3 dong khac nhau(su dung newline cho cac dong)
*/
 #include<stdio.h>
 #include<ctype.h>
main(){
 	
 	char str1[100] = {'T','H','I','S',' ','I','S',' ','T','H','E',' ','M','E','S','S','A','G','E',' ','S','T','R','1','\0'};
	puts(str1);
	char str2[100] = "THIS IS THE MESSAGE FROM STR2";
 	puts(str2);
 	char str3[100];
 	int i; 
 	gets(str3);
 	for(i=0;str3[i]!= '\0';i++){ 
 	if (str3[i] == toupper(str3[i])){
 		putchar(tolower(str3[i]));
	 }
	else if (tolower(str3[i])) {
		putchar(toupper(str3[i]));
	}
	else{
		putchar(str3[i]);
	}
 }
 
/*	
	gets(str3); 
	puts(str3);	
*/
	return 0;
 }
