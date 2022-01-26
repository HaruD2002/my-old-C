#include <stdio.h>
int main(){
int i, j, temp, arr[5]={61,70,12,1,4};
/* Logic of selection sort algorithm */
for(i=0;i<5;i++){
for(j=i+1;j<5;j++){
if(arr[i]< arr[j]){
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("Sorted elements: ");
for(i=0;i<5;i++)
printf(" %d",arr[i]);
return 0;
}
