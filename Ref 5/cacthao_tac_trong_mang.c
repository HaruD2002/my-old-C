//1 cho mang so thay the phan tu lon nhat dau tien bang 99 
//2 thay the tat ca cac phan tu la so nguyen to bang binh phuong cua no
//3 thay the tat ca cac so trong mang bang uoc so nguyen to lon nhat ung voi so no   
//4 xoa bo phan tu dau tien la so nguyen to 
//5 xoa bo tat ca cac phan tu la so nguyen to
//6 xoa bo phan tu lon nhat cuoi dung trong mang
//7them vao sau phan tu lon nhat trong mang 1 so =100
//8them vao sau tat ca cac phan tu trong mang la so nguyen to bang 1 so binh phuong cua no 
//#include<stdio.h>
//main(){
//	int n,i,a[100],max;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	max=a[0]; 
//	for (i=0;i<n;i++){
//		if(a[i]>max) max=a[i]; 
//	}
//	for(i=0;i<n;i++){
//		if(a[i]=max) a[i]=99;
//		break; 
//	}
//	for(i=0;i<n;i++)
//	printf("%d ",a[i]); 
//} 
//1 
//#include<stdio.h>
//int nt(int x){
//	int i,t=0;
//	for(i=1;i<=x;i++){
//		if(x%i==0) t++; 
//	}
//	if (t==2) return 1;
//	else return 0;
//} 
//main(){
//	int n,i,a[100];
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for (i=0;i<n;i++){
//		if(nt(a[i])==1) a[i]=a[i]*a[i]; 
//	}
//	for(i=0;i<n;i++)
//	printf("%d ",a[i]); 
//} 
//2 
//#include<stdio.h>
//int nt(int x){
//	int i,t=0;
//	for(i=1;i<x;i++){
//		if(x%i==0) t=i; 
//	} 
//    return t; 
//} 
//main(){
//	int n,i,a[100];
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(i=0;i<n;i++)
//	printf("%d  ",nt(a[i])); 
//}
//3  
//#include<stdio.h>
//int nt(int x){
//	int i,t=0;
//	for(i=1;i<=x;i++){
//		if(x%i==0) t++; 
//	}
//	if (t==2) return 1;
//	else return 0;
//}
//main(){
//	int a[100],n,i,j;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(i=0;i<n;i++){
//		if(nt(a[i])==1) {
//		j=i; break; 
//	  } 
//	} 
//	for(i=j;i<n-1;i++) {
//	a[i]=a[i+1];}
//	n--; 
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]); 
//	}
//	printf("\n vi tri so nguyen to dau tien %d",j); 
//}
//4 
//#include<stdio.h>
//int nt(int x){
//	int i,t=0;
//	for(i=1;i<=x;i++){
//		if(x%i==0) t++; 
//	}
//	if (t==2) return 1;
//	else return 0;
//}
//main(){
//	int a[100],n,i,j,d=0;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	for(i=0;i<n;i++){
//		if(nt(a[i])==1) d++; 
//	}
//	while(d>0){
//	for(i=0;i<n;i++){
//		if(nt(a[i])==1) {
//		j=i; break; 
//	  } 
//	} 
//	for(i=j;i<n-1;i++) {
//	a[i]=a[i+1];}
//	n--;
//	d--;
//}
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]); 
//	}
//}  
//5 
//#include<stdio.h>
//main(){
//	int a[100],n,i,j,max;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	max=a[0]; 
//	for(i=0;i<n;i++){
//		if(a[i]>=max) {
//		max=a[i];}  
//	}
//	for(i=0;i<n;i++){
//		if(a[i]==max){
//		j=i;
//	  } 
//	} 
//	for(i=j;i<n-1;i++) {
//	 a[i]=a[i+1];}
//	 n--;
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]); 
//	}
//} // xoa bo vitri max cuoi cung 
//#include<stdio.h>
//main(){
//	int a[100],n,i,j,max;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	max=a[0]; 
//	for(i=0;i<n;i++){
//		if(a[i]>=max) {
//		max=a[i];}  
//	}
//	for(i=0;i<n;i++){
//		if(a[i]==max){
//	for(j=i;j<n-1;j++) {
//	 a[j]=a[j+1];}
//	 n--;
//	    }
//    }
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]); 
//	}
//}  // xoa tat cac so lon nhat 
//6
//#include<stdio.h>
//main(){
//	int a[100],n,i,j,max;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	max=a[0];
//	for(i=0;i<n;i++){
//		if(a[i]>=max) {
//		max=a[i];}  
//	}
//	for(i=0;i<n;i++){
//		if(a[i]==max){
//		j=i;
//	  } 
// } 
//	n++;
//	for(i=n-1;i>=j;i--) {
//	 a[i]=a[i-1];}
//	 a[j]=100; 
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]); 
//	}
//} 
// them vao cho vi tri lon nhat dau tien
//#include<stdio.h>
//main(){
//	int a[100],n,i,j,max;
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]);
//	max=a[0];
//	for(i=0;i<n;i++){
//		if(a[i]>=max) {
//		max=a[i];}  
//	}
//	for(i=0;i<n;i++){
//	   if(a[i]==max){
//	   	 n++;
//	for(j=n-1;j>i;j--) {
//	 a[j]=a[j-1]; }
//	 a[i+1]=100;
//// neu de yeu cau phan tu lon nhat dau tien thi bo i++ va them break sau n++  
//	i++;
//	  }
// }
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]); 
//	}
//}   
// them vao sau tat cac cac vi tri có so lon nhat 
//7 
//#include<stdio.h>
//main(){
//	int a[100],n,i,j; 
//	scanf("%d",&n);
//	for(i=0;i<n;i++)
//	scanf("%d",&a[i]); 
//    for(i=0;i<n;i++){
//    	n++; 
//    	for(j=n-1;j>i;j--){
//    		a[j]=a[j-1];}
//			a[i+1]=a[i]*a[i]; 
//		    i++; 
//	}
//	for(i=0;i<n;i++){
//		printf("%d ",a[i]); 
//	}
//}
//8 
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int cnt(int x){
//	int i,t=0;
//	for(i=1;i<=x;i++){
//		if(x%i==0) t++; 
//	} 
//	if(t==2) return 1;
//	else return 0; 
//} 
//int check(int x){
//	int i,usnt; 
//	for(i=2;i<=x;i++){
//		if(x%i==0&&cnt(i)==1) {
//		usnt=i;
//		break;} 
//	}
//	return usnt; 
//} 
//main(){
//	int a[1000],n,i,j;
//	int s,tb; 
//	int min; 
//	scanf("%d",&n);
//// ra so ngau nhien; 
//	srand(time(NULL)); 
//	for(i=0;i<n;i++){
//		a[i]=rand()%1000; 
//		printf("%d ",a[i]); 
//	}
//	for(i=0;i<n;i++){
//		if(a[i]>=100&&a[i]<=999) a[i]=check(a[i]); 
//	} 
//    for(i=0;i<n;i++)
//	printf("%d ",a[i]); 
//}
// 9 
// 9.thay the tat ca cac pt co 3 chu so bang uoc so nguyen to nho nhat cua no,khong tinh 1 cua no
// 11.thay the tat ca cac pt bang so nguyen gan voi gia tri trung binh cua cac uoc so tinh ca '1' // ve nha lam  ex:104 us:1,2,4,8,13 -->tb 28/5-->5,6-->6 // 
// 10.xoa bo phan tu dau tien co 3 chu so la so chan   
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//main(){
//	int a[1000],n,i,j;
//	scanf("%d",&n);
//// ra so ngau nhien; 
//	srand(time(NULL)); 
//	for(i=0;i<n;i++){
//		a[i]=rand()%1000; 
//		printf("%d ",a[i]); 
//	}
//	for(i=0;i<n;i++){
//		if(a[i]>=100&&a[i]<=999&&a[i]%2==0) {
//		j=i;
//		break;
//	    }
//	} 
//	for(i=j;i<n-1;i++){
//		a[i]=a[i+1]; 
//	}
//	n--; 
//    for(i=0;i<n;i++)
//	printf("\n%d ",a[i]); 
//}
//10
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int tt(int x){
//	int s=0;
//	float tb; 
//	int i,t=0;
//	for(i=1;i<x;i++){
//		if(x%i==0) {
//		s+=i;
//		t++;} 
//	}
//	tb=1.0*s/t;
//	s=s/t;
//	if(tb-s-0.5>0) s=s+1;
//	else s=s;
//	return s; 
//} 
//main(){
//	int a[1000],n,i,j;
//	scanf("%d",&n);
//// ra so ngau nhien; 
//	srand(time(NULL)); 
//	for(i=0;i<n;i++){
//		a[i]=rand()%1000; 
//		printf("%d ",a[i]); 
//	}
//	for(i=0;i<n;i++){
//		a[i]=tt(a[i]); 
//	}
//	for(i=0;i<n;i++)
//	printf("\n%d ",a[i]); 
//}
//11 
