/* ;
-Nhap 1 chuoi
-Nhap 1 ki tu
-Vi tri cua ki tu can thay the trong chuoi ban dau
-Thay the ki tu bat ki tai vi tri
*/
#include <stdio.h>
#include <string.h>
main(){
	int i,n,len;
	char changingstring[100];
	char change;
	gets(changingstring); //nhap string
	len=strlen(changingstring); //find the length of the string
	scanf ("%d",&n);	//nhap n
	scanf ("%c",&change);//nhap thu can thay doi
	for (i=0; i < len; i++){
		if (len == n){
			changingstring[i]=change;
		}
	}
	puts(changingstring);//output cua string
}
