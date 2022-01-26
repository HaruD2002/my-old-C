#include <stdio.h>

main(){
//	total of record
// row per page 
// output the number of lage

int total=0,row=0;

printf("Number of page:\n");
scanf("%d",&total);
printf("Number of row:\n");
scanf ("%d",&row);

//if (total % row >0){
//	page = total / row +1;
//}
//	else {
//	page = total /row;
//	}
//
//printf("Number of page:\n%d",page);

int page = (total/row!=0)?total/row +1 : total / row;

printf("Page:%d",page);

}
