#include <stdio.h>
#include <conio.h>
 main() {
   char c;
   printf("Nhap vao mot ky tu :");
   scanf("%c",&c);
   printf("\nMa ASCII tuong ung la: %d",c);
 
   int a;
   printf("\nNhap vao mot so nguyen (tu 1 den 255) :");
   scanf("%d",&a);
   printf("\nKy tu co ma ASCII tuong ung la: %c",a);
   getch();
 }
