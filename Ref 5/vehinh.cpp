//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		for (j=1;j<=n;j++){
//		  printf("*"); 
//		  printf(" "); 
//		}
//		printf("\n"); 
//	}	
//} 
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		for (j=1;j<=n;j++){
//			if (i==1||i==n||j==1||j==n)
//			 printf("*");
//			else printf(" ");
//			printf(" "); 
//		}
//		printf("\n"); 
//	}
//}
// hinh vuong 
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		for (j=1;j<=n;j++){
//			if (i>=j)
//				printf ("*");
//			else printf(" "); 
//			printf(" "); 
//			}
//		printf("\n"); 
//		}
//	 
//	}
// tam giac 1 
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=0;i<n;i++){
//		for (j=0;j<2*n-1;j++){ 
//			if (j==n-i-1||j==n+i-1||i==n-1)
//				printf ("*");
//			else printf (" "); 
//			printf(" ");  
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	}
// tam giac day 2n-1 
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		for (j=1;j<=n;j++){
//			if (i<=j)
//				printf ("*");
//			else printf(" "); 
//			printf(" "); 
//			}
//		printf("\n"); 
//		}
//	 
//	}
// tam giac 4
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		for (j=1;j<=n;j++){
//			if (j==1||i==n||j==i)
//				printf ("*");
//			else printf(" "); 
//			printf(" "); 
//			}
//		printf("\n"); 
//		}
//	 
//	}
// tam giac 1 rong 
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		for (j=1;j<=n;j++){
//			if (i==1||j==n||j==i)
//				printf ("*");
//			else printf(" "); 
//			printf(" "); 
//			}
//		printf("\n"); 
//		}
//	 
//	} 
// tam giac 2 rong  
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		for (j=1;j<=2*n;j++){
//			if (j>=i && j<=2*n-i) 
//				printf ("*");
//			else printf(" "); 
//			printf(" "); 
//			}
//		printf("\n"); 
//		}
//	 
//	}
// tam giac day 2n-1 chong nguoc 
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=1;i<=n;i++){
//		for (j=1;j<=2*n-1;j++){
//			if (j==i || j==2*n-i||i==1) 
//				printf ("*");
//			else printf(" "); 
//			printf(" "); 
//			}
//		printf("\n"); 
//		}
//	 
//	}
// tam giac 2n-1 chong nguoc rong  
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=0;i<n;i++){
//		for (j=0;j<2*n-1;j++){ 
//			if (j>=n-i-1&&j<=n+i-1)
//				printf ("*");
//			else printf (" "); 
//			printf(" ");  
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	}
// tam giac day 2n-1 dac  
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=0;i<2*n-1;i++){
//		for (j=0;j<n;j++){ 
//			if (i>=j&&j<=2*n-2-i)
//				printf ("*");
//			else printf (" "); 
//			printf(" ");  
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	}
// tam giac canh 2n-1 day nam ben phai 
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=0;i<2*n-1;i++){
//		for (j=0;j<n;j++){ 
//			if (i==j||j==2*n-2-i||j==0)
//				printf ("*");
//			else printf (" "); 
//			printf(" ");  
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	} 
// tam giac canh 2n-1 day nam ben phai rong 
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=0;i<2*n-1;i++){
//		for (j=0;j<n;j++){ 
//			if (j+n-1>=i&&j>=n-i-1)
//				printf ("*");
//			else printf (" "); 
//			printf(" ");  
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	} 
// tam giac canh 2n-1 day nam ben trai dac 
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=0;i<2*n-1;i++){
//		for (j=0;j<n;j++){ 
//			if (j+n-1==i||j==n-i-1||j==n-1)
//				printf ("*");
//			else printf (" "); 
//			printf(" ");  
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	} 
//tam giac canh 2n-1 day nam ben trai rong  
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=0;i<2*n-1;i++){
//		for (j=0;j<2*n-1;j++){ 
//			if (j+n-1>=i&&j>=n-i-1&&i+n-1>=j&&j<3*n-2-i)
//				printf ("*");
//			else printf (" "); 
//			printf(" "); 
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	} 
// hinh thoi  
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=0;i<2*n-1;i++){
//		for (j=0;j<2*n-1;j++){ 
//			if (j+n-1==i||j==n-i-1||i+n-1==j||j==3*n-3-i)
//				printf ("*");
//			else printf (" "); 
//			printf(" ");  
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	} 
// hinh thoi rong 	
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=0;i<=2*n-1;i++){
//		for (j=0;j<=2*n-1;j++){ 
//			if (j+n-1==i||j==n-i-1||i+n-1==j||j==3*n-3-i||i==0||j==0||i==2*n-1||j==2*n-1) printf ("*");
//			else printf (" "); 
//			printf(" ");  
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	}
// hinh thoi rong có vien  
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n");scanf("%d",&n);
//	for (i=0;i<=2*n-2;i++){
//		for (j=0;j<=2*n-2;j++){ 
//			if (j+n-1>=i&&j>=n-i-1&&i+n-1>=j&&j<3*n-2-i||i==0||j==0||i==2*n-2||j==2*n-2)
//				printf ("*");
//			else printf (" "); 
//			printf(" ");  
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	}
// hinh thoi dac co vien 
//#include<stdio.h>
//main(){
//    int n,i,j;
//	printf("nhap gia tri n:");scanf("%d",&n);
//	for (i=0;i<=2*n-2;i++){
//		for (j=0;j<=2*n-2;j++){ 
//			if (i>=j+n-1||j<=n-i-1||i+n-1<=j||j>=3*n-3-i)
//				printf ("*");
//			else printf (" "); 
//			printf(" ");  
//			} 
//		printf("\n");  
//	}
//	return 0; 
//	}
// hinh thoi co vien dac  
//#include <stdio.h>
//int main() {
//   int n,i,j;
//   printf("nhap so n:");
//   scanf("%d",&n); 
//   printf("Ve tam giac sao deu:\n");
//   for(i = 0; i <= n-1; i++) {
//      for(j = 0; j <= n-i-1; j++)
//         printf(" ");
// 
//      for(j = 0; j <= i; j++)
//         printf("* ");
// 
//      printf("\n");
//   }
//   return 0;
//}  // tam giac deu 
//#include<stdio.h>
//main(){
//	char a[]={'x','o'}; 
//	int x=0; 
//    int n,i,j;
//	printf("nhap gia tri n:");scanf("%d",&n);
//	for (i=0;i<=n;i++){
//		for (j=0;j<=n;j++){
//			printf((j==n)? "+\n":"+ - " );
//		}
//		if (i!=n){
//			for (j=0;j<=n;j++){
//				if(j==n){
//					printf("|"); 
//				}
//				else printf("| %c ",a[(x++)%2]); 
//			} 
//		}
//		x++; 
//		printf("\n"); 
//}
//	return 0; 
//	 
//}
//#include<stdio.h>
//main(){
//	char a[]={'x','o'}; 
//	int x=0; 
//    int n,i,j;
//	printf("nhap gia tri n:");scanf("%d",&n);
//	for (i=0;i<n;i++){
//		for (j=0;j<=2*n+1;j++){
//			if (j<=n) 
//			j==n?printf("+\n"): printf("+-");
//			else j<2*n+1?printf("|%c",(i+j)%2?'x':'o'): printf("|\n"); 
//		}
//   }
//	return 0; 	 
//}


