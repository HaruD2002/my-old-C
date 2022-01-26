//#include<stdio.h>
//#include<string.h>
//main(){
//	char s[31]="Nguyen Van A";
//	puts(s); // hien thi co xuong dong 
//    printf(s); // hien thi nhung k xuong dong
//    puts(""); 
//	printf("ten cua ban la %s",s); // format duoi dang string 
//} 
//#include<stdio.h>
//#include<string.h>
//main(){
//	char s[31],s1[10]; 
//	printf("nhap ten cua ban");
////	scanf("%s",&s); // k the han cac ky tu nhu cach,tab, enter 
//    gets(s); 
//    gets(s1); 
//    printf(s); // hien thi nhung k xuong dong
//    puts(""); 
//	puts(s); // hien thi co xuong dong 
//	printf("ten cua ban la %s",s); // format duoi dang string
//	strstr(s,s1); 
//}
// btvn:
// viet lai 8 ham tren bang xu ly mang; 
//#include<stdio.h>
//#include<string.h>
//main(){
//	char s[100],s1[100];
//	gets(s);
//	gets(s1);
//	puts(s);
//	puts(s1); 
//	strcpy(s,s1);
//	puts(s); 
//} 
//#include<stdio.h>
//main(){
//	char s[50]="nguyen phung hung";
//	char s1[50]="nguyen khac son";
//	int i,j,t=0,d=0; 
//	    for(i=0;;i++){
//    	if(s[i]!=0) t++;
//		else break;  
//	}
//	    for(i=0;;i++){
//    	if(s1[i]!=0) d++;
//		else break;  
//	}
//	for(i=0;;i++){
//	 if(s[i]!=0||s1[i]!=0) s[i]=s1[i]; 
//	 else break; 
//	}
//	for(i=0;i<d;i++){
//	printf("%c",s[i]);
//  } 
//} 
// doi voi cau lenh strcpy // copy  
//#include<stdio.h>
//#include<string.h>
//main(){
//	int i; 
//	char s[100];
//	gets(s);
//	printf("chuoi s va s1 ban dau\n"); 
//	puts(s);
//	for(i=0;i<strlen(s);i++){
//		printf("%c * ",s[i]); 
//	} 
//	printf("chuoi sau khi qua cau lenh\n");
//} 
//#include<stdio.h>
//main(){
//	int i,t=0;
//    char a[100]="cai gi day";
//    for(i=0;;i++){
//    	if(a[i]!=0) t++;
//		else break;  
//	}
//	printf("%d",t); 
//}
//#include<stdio.h>
//#include<string.h>
//main(){
//	int i,t=0; 
//	char s[100];
//	gets(s);
//	printf("chuoi s va s1 ban dau\n"); 
//	puts(s);
//	for(i=0;i<strlen(s);i++){
//		if(s[i]=='t') t++; 
//	} 
//	printf("chuoi sau khi qua cau lenh %d",t);
//} 
// cau lenh strlen; // tra ve do dai cua chuoi s 
//#include<stdio.h>
//#include<string.h>
//main(){
//	char s[50],s1[100];
//	gets(s);
//	gets(s1);
//	printf("chuoi s va s1 ban dau\n"); 
//	puts(s);
//	puts(s1); 
//	strcat(s,s1);
//	printf("chuoi sau khi qua cau lenh\n"); 
//	puts(s); 
//}  
//#include<stdio.h>
//main(){
//	char s[100]="nguyen khac son";
//	char s1[100]="son tay";
//	int i,j,t=0,d=0; 
//	    for(i=0;;i++){
//    	if(s[i]!=0) t++;
//		else break;  
//	}
//	    for(i=0;;i++){
//    	if(s1[i]!=0) d++;
//		else break;  
//	}
//	for(i=0;i<t+d;i++){
//    s[i+t]=s1[i]; 
//	}
//	for(i=0;i<t+d;i++) printf("%c",s[i]);
//} 
//// gan s1 vao sau s cau lenh strcat
//#include<stdio.h>
//#include<string.h>
//main(){
//	int ss; 
//	char s[50],s1[100];
//	gets(s);
//	gets(s1);
//	printf("chuoi s va s1 ban dau\n"); 
//	puts(s);
//	puts(s1); 
//	ss=strcmp(s,s1);
//	printf("so sanh 2 chuoi %s va %s la %d",s,s1,ss); 
//}
//#include<stdio.h>
//#include<string.h>
//main(){
//	int ss; 
//	char s[50],s1[100];
//	gets(s);
//	gets(s1);
//	printf("chuoi s va s1 ban dau\n"); 
//	puts(s);
//	puts(s1); 
//	ss=strcmpi(s,s1);
//	printf("so sanh 2 chuoi %s va %s la %d",s,s1,ss); 
//}
// lenh so sanh kq =1 thi s>s1; =-1 s<s1; =0 s=s1
//#include<stdio.h>
//#include<string.h>
//main(){
//	char s[50],s1[100];
//	gets(s);
//	gets(s1);
//	printf("chuoi s va s1 ban dau\n"); 
//	puts(s);
//	puts(s1); 
//	strlwr(s);
//	printf("chuoi sau khi qua cau lenh\n"); 
//	puts(s); 
//}   
//#include<stdio.h>
//main(){
//	char a[100];
//	int i;
//	printf("nhap chuoi\n"); 
//	gets(a); 
//	for(i=0;i<strlen(a);i++){
//		if(64<a[i]&&a[i]<91) a[i]=a[i]+32; 
//	} 
//	printf("chuoi sau khi doi:\n"); 
//	puts(a); 
//} 
// ham strlwr là de chuyen chu hoa thanh chu thuong  
//#include<stdio.h>
//#include<string.h>
//main(){
//	char s[50],s1[100];
//	gets(s);
//	gets(s1);
//	printf("chuoi s va s1 ban dau\n"); 
//	puts(s);
//	puts(s1); 
//	strupr(s);
//	printf("chuoi sau khi qua cau lenh\n"); 
//	puts(s); 
//} 
//#include<stdio.h>
//main(){
//	char a[100];
//	int i;
//	printf("nhap chuoi\n"); 
//	gets(a); 
//	for(i=0;i<strlen(a);i++){
//		if(96<a[i]&&a[i]<123) a[i]-=32; 
//	} 
//	printf("chuoi sau khi doi:\n"); 
//	puts(a);
//} 
// chuyen chu thuong thanh chu hoa strupr 
//#include<stdio.h>
//#include<string.h>
//main(){
// char *a,*b; 
// char s1[10] = "abcdefghi", s2[5] = "cde", s3[5] = "cdf";
// a=strstr(s1, s2);
// b=strstr(s1, s3);
// printf("%s\n %s",a,b); 
//} 
// ham strstr  
//#include<stdio.h>
//int mystrcmp(char [],char []);
//main(){
//	char s1[101],s2[101];
//	printf("input string s1=");
//	gets(s1);
//	printf("input string s2=");
//	gets(s2);
//	printf("compare s1 %s,s2 %s  %d",s1,s2,mystrcmp(s1,s2)); 
//}
//int mystrcmp(char s1[],char s2[]){
//	int kq=0;
//	int i,n1,n2;
//	n1=strlen(s1);
//	n2=strlen(s2); 
//	while(i<n1&&i<n2){
//		if(s1[i]!=s2[2]){
////			return s1[i]>s2[i]?1:-1; 
//            return 2*(s1[i]>s2[i])-1; 
//		}
//		i++; 
//	}
//	if(i==n1&&1==n2) return 0;
//	else return n1>n2?1:-1;
//}
// so sanh
//bt string 
// A  dang thong ke 
// cho 1 chuoi chuan hoa chuoi ve dang proper style( cac chu cai dau cua moi tu viet hoa va cac ky tu sau viet thuong) 
//1 cho 1 chuoi va dem xem trong chuoi co bao nhieu tu
//2 cho 1 chuoi dem xem trong chuoi có bao nhieu tu co do dai lon hon 3
//3 dem xem trong chuoi co bao nhieu tu co it nhat(nhieu nhat,chinh xac 2//3//4 nguyên âm 
//4 tong quat dem xem trong hcuoi co bao nhieu tu thoa man dieu kien xyz
//B cac thao tac voi tu(them,sua,xoa,sort)
//thao tac voi (k) tu thoa man xyz bang dk abc 
// thay the  tu so 2 trong chuoi bang hello  cong hoa xa hoi--> cong hello xa hoi 
//btvn liet ke cac dieu kien co the doi voi 1 tu viet vao may va ghi ra giay(yeu cau viet cang nhieu dieu kien cang tot,toi thieu 20dk) 
// liet  ke cac dieu kien thoa man voi so(cang nhieu cang toi,toi thieu 15dk)  
//#include<stdio.h>  // chuan hoa 
//#include<string.h>
//void trim(char s[]);    // strim chuan hoa 
//void trimtrai(char s[]);
//void trimphai(char s[]);
//void trimgiua(char s[]);
//main(){
//	char s[100];
//	int i,t=1;
//	printf("input string = ");
//	gets(s);
//	printf("\nbefore srim(%s)",s);
//	trim(s); 
//	printf("\nafter strim(%s)",s); 
//	for(i=0;i<strlen(s);i++){
//	if(s[i]==32) t++; 
//	}
//	printf("so tu trong chuoi la:%d",t);
//} 
//void trimtrai(char s[]){
//	int i=0;
//	while(s[i]==32) i++; 
//	strcpy(&s[0],&s[i]); 
//}
//void trimphai(char s[]){
//	int i=strlen(s)-1;
//	while (s[i]==32) i--;
//	s[i+1]=0; 
//}
//void trimgiua(char s[]){
//	char *pc=NULL;
//	pc = strstr(s,"  "); // cho nay la 2 dau cach
//	while (pc!=NULL){
//		strcpy(pc,pc+1);
//		pc=strstr(s,"  "); 
//	} 
//}
//void trim(char s[]){
//	trimtrai(s);
//	trimphai(s);
//	trimgiua(s); 
//} //1
//#include<stdio.h>
//#include<string.h>
//void trim(char s[]);
//void trimtrai(char s[]);
//void trimphai(char s[]);
//void trimgiua(char s[]);
//main(){
//	char s[100];
//	int i,j,t=0,d=0;
//	printf("input string = ");
//	gets(s);
//	printf("\nbefore srim(%s)",s);
//	trim(s); 
//	printf("\nafter strim(%s)",s); 
//	for(i=0;i<strlen(s);i++){
//	if(s[i]!=32) t++;
//	else {
//	if(t>3){d++;} 
//	   t=0; 
//       }
//	} 
//	for(i=0;i<strlen(s);i++){
//		if(s[i]==32) j=i;  // tim ra dau cach cuoi cung  
//	}
//	t=0; 
//	for(i=j;i<strlen(s);i++){
//		if(s[i]!=32) t++;      // ktra tu o cuoi cung 
//	}
//	if(t>3) d+=1; 
//	printf("\nso tu co do dai lon hon 3 trong chuoi la:%d",d);   //adh adhs adn thgsgh th jash
//} 
//void trimtrai(char s[]){
//	int i=0;
//	while(s[i]==32) i++; 
//	strcpy(&s[0],&s[i]); 
//}
//void trimphai(char s[]){
//	int i=strlen(s)-1;
//	while (s[i]==32) i--;
//	s[i+1]=0; 
//}
//void trimgiua(char s[]){
//	char *pc=NULL;
//	pc = strstr(s,"  ");
//	while (pc!=NULL){
//		strcpy(pc,pc+1);
//		pc=strstr(s,"  "); 
//	} 
//}
//void trim(char s[]){
//	trimtrai(s);
//	trimphai(s);
//	trimgiua(s); 
//} //2
//#include<stdio.h>
//#include<string.h>
//main(){
//	char a[5][21];
//	gets(a[0]);
//	printf("%s",a[0]); 
//} 
//#include<stdio.h>
//#include<string.h>
//void trim(char s[]);
//void trimtrai(char s[]);
//void trimphai(char s[]);
//void trimgiua(char s[]);
//void split(char s[],char word[][31],int *n);
//void rebuild(char w[][31],int n, int s[]); 
//void rebuild(char w[][31],int n, int s[]){
//	int i; 
//	if (0==n){
//	s[0]=0;
//	return; 
//	} 
//	else {
//		strcpy(s,w[0]);
//		for(i=1;i<n;i++){
//			strcat(s," ");
//			strcat(s,w[i]); 
//		} 
//	} 
//}
//void split1(char s[], char word[][31],int *n){  // tach chuoi k can trim 
//	int i,j,k=0;
//	char s1[10001];
//	strcpy(s1,s);
//	i=strlen(s1)-1;
//	while (s1[i]==32) i--;
//	s1[i+1]=0;
//	i=0;
//	while(s1[i]==32) i++;
//	strcpy(&s1[0],&s1[i]);
//	for(i=0;i<strlen(s1);i++){
//		if(32==s1[i]){
//			strcpy(word[k],s1);
//			word[k++][i]=0;
//			j=i+1;
//			while(j<strlen(s1)&&32==s1[j]) j++;
//			strcpy(&s1[0],&s1[j]);
//			i=-1; 
//		} 
//	} 
//	strcpy(word[k],s1);
//	*n=k+1; 
//}
//main(){
//	char s[10001];
//	char w[100][31]; 
//	int n,i;
//	printf("input string = ");
//	gets(s);
//	printf("\narray of word tring:");   // thay the  
//	split(s,w,&n);
//	strcpy(w[1],"hello");
//	strcpy(w[3],"world");
//	strcpy(w[3],"");
//	trim(s); 
//	rebuild(w,n,s); 
//	for(i=0;i<n;i++){
//	printf("\n(%s)",w[i]); }
//	printf(" \nchuoi s sau khi thay the:(%s)",s); 
//} 
//void trimtrai(char s[]){
//	int i=0;
//	while(s[i]==32) i++; 
//	strcpy(&s[0],&s[i]); 
//}
//void trimphai(char s[]){
//	int i=strlen(s)-1;
//	while (s[i]==32) i--;
//	s[i+1]=0; 
//}
//void trimgiua(char s[]){
//	char *pc=NULL;
//	pc = strstr(s,"  ");
//	while (pc!=NULL){
//		strcpy(pc,pc+1);
//		pc=strstr(s,"  "); 
//	} 
//}
//void trim(char s[]){
//	trimtrai(s);
//	trimphai(s);
//	trimgiua(s); 
//}
//void split(char s[],char word[][31],int *n){    // chi chay voi chuoi da chuan hoa 
//	char s1[10001];
//	int i,k=0;
//	strcpy (s1,s);
//	trim(s1);
//	for(i=0;i<strlen(s1);i++){
//		if(s1[i]==32){
//			strcpy(word[k],s1);
//			word[k++][i]=0;
//			strcpy(&s1[0],&s1[i+1]);
//			i=-1; //very important 
//		} 
//	}
//	strcpy(word[k],s1);
//	*n=k+1; 
//}
//#include<stdio.h>
//#include<string.h>
//void trim(char s[]);
//void trimtrai(char s[]);
//void trimphai(char s[]);
//void trimgiua(char s[]);
//void split(char s[],char word[][31],int *n);
//void rebuild(char w[][31],int n, char s[]); 
//void rebuild(char w[][31],int n, char s[]){
//	int i; 
//	if (0==n){
//	s[0]=0;
//	return; 
//	} 
//	else {
//		strcpy(s,w[0]);
//		for(i=1;i<n;i++){
//			strcat(s," ");
//			strcat(s,w[i]); 
//		} 
//	} 
//}
//void split1(char s[], char word[][31],int *n){  // tach chuoi k can trim 
//	int i,j,k=0;
//	char s1[10001];
//	strcpy(s1,s);
//	i=strlen(s1)-1;
//	while (s1[i]==32) i--;
//	s1[i+1]=0;
//	i=0;
//	while(s1[i]==32) i++;
//	strcpy(&s1[0],&s1[i]);
//	for(i=0;i<strlen(s1);i++){
//		if(32==s1[i]){
//			strcpy(word[k],s1);
//			word[k++][i]=0;
//			j=i+1;
//			while(j<strlen(s1)&&32==s1[j]) j++;
//			strcpy(&s1[0],&s1[j]);
//			i=-1; 
//		} 
//	} 
//	strcpy(word[k],s1);
//	*n=k+1; 
//}
////void split2(char s[],char word[][31],int *n){
////	int i,j,k;
////	for(i=0;i<strlen(word);i++){
////		j=i;
////		while(s[j]==32) j++;
////		i=j;
////		while (i<strlen(s)&&s[i]!=32){
////			word[k][i-j]=s[i];
////			i++; 
////		}
////		word[k++][i]=0; 
////	} 
////	*n=(strlen(word[k=1])==0)?k-1:k; 
////} 
//void process(char w[][31],int *n){   // sap xep tu nho den lon  
//	int i,j,t; 
//	char d[10001]; 
//	for(i=0;i<*n-1;i++){
//		for(j=i+1;j<*n;j++){
//			t=strcmp(w[i],w[j]); 
//		if (t>0) {
//		strcpy(d,w[i]);
//		strcpy(w[i],w[j]);
//		strcpy(w[j],d); 
//	     }
//		} 
//	}
//} 
//main(){
//	char s[10001];
//	char w[100][31];
//	char d[100][31]; 
//	int n,i,t;
//	printf("input string = ");
//	gets(s);
//	split1(s,w,&n);
//	process(w,&n); 
//	trim(s); 
//	rebuild(w,n,s); 
//	printf(" \nchuoi s sau khi xu ly:(%s)",s); 
//} 
//void trimtrai(char s[]){
//	int i=0;
//	while(s[i]==32) i++; 
//	strcpy(&s[0],&s[i]); 
//}
//void trimphai(char s[]){
//	int i=strlen(s)-1;
//	while (s[i]==32) i--;
//	s[i+1]=0; 
//}
//void trimgiua(char s[]){
//	char *pc=NULL;
//	pc = strstr(s,"  ");
//	while (pc!=NULL){
//		strcpy(pc,pc+1);
//		pc=strstr(s,"  "); 
//	} 
//}
//void trim(char s[]){
//	trimtrai(s);
//	trimphai(s);
//	trimgiua(s); 
//}
//void split(char s[],char word[][31],int *n){
//	char s1[10001];
//	int i,k=0;
//	strcpy (s1,s);
//	trim(s1);
//	for(i=0;i<strlen(s1);i++){
//		if(s1[i]==32){
//			strcpy(word[k],s1);
//			word[k++][i]=0;
//			strcpy(&s1[0],&s1[i+1]);
//			i=-1;
//		} 
//	}
//	strcpy(word[k],s1);
//	*n=k+1; 
//}
// cho mot chuoi da chua hoa
// 1 thay the tu so 2 va tu so 4 bang hello va world
// 2 sort tat cac ca tu theo thu tu tang dan cua tu dien 
// chuan hoa chuoi ve dang proper style
// tong quat cho mot chuoi .... process () display
// b1: split 
// b2: process each word (strcpy(w[1],"hello"))
// de delete tu so 5 strcpy(w[5],"") 
// b3: join||rebuld .. neu can thi trim lai
// cho mot mang chuoi dem va tra ve trong chuoi (mang so) co bao nhieu tu(so) thoa man dieu kien xyz; 
// dang thay doi (modify): them,sua,xoa,sua;
// modify tu dau tien hoac k tu thoa man dieu kien xyz 
// dinh nghia strong password la tu co do dai >=3,co it nhat mot ky tu so co chua it nhat mot ky tu in hoa 
// 1: dem xem trong chuoi co bao nhieu strong password 
// 2 tinh va tra ve u dau tien trong chuoi la strong password
// dao nguoc tat ca cac  ky tu trong chuoi  
#include<stdio.h>
#include<string.h>
void trim(char s[]);
void trimtrai(char s[]);
void trimphai(char s[]);
void trimgiua(char s[]);
void split(char s[],char word[][31],int *n);
void rebuild(char w[][31],int n, char s[]); 
int check(char w[][31],int i); 
void process(char w[][31], int n);
void rebuild(char w[][31],int n, char s[]){
	int i; 
	if (0==n){
	s[0]=0;
	return; 
	} 
	else {
		strcpy(s,w[0]);
		for(i=1;i<n;i++){
			strcat(s," ");
			strcat(s,w[i]); 
		} 
	} 
}
int check(char w[][31], int i){
	int  j, k, h;
	if(strlen(w[i]) >= 3){
		k = 0;
		h = 0;
		for(j=0;j<strlen(w[i]);j++){
			if(w[i][j]>=65&&w[i][j]<=90) k++;	
			if(w[i][j]>=48&&w[i][j]<=57) h++;
		}
		if(k > 0 && h > 0){
			return 1;
		}else if(k == 0 && h == 0){
			return 0;
		}
	}else return 0; 
}
void process(char w[][31],int n){        // dem cac tu thoa man strong password 
	int i;
    int d=0;
	for(i=0;i<n;i++){
	if (check(w, i)==1) d++; 
	}
	printf("%d",d);
}                                          //phep thu cong Hoa1 Xa Hoii CHuu Nghia12 
main(){
	char s[10001];
	char w[100][31];
	int n,i,t;
	printf("input string = ");
	gets(s);  
	printf("\nso tu thoa man strong password:");
	split(s,w,&n);
	process(w,n);
} 
void trimtrai(char s[]){
	int i=0;
	while(s[i]==32) i++; 
	strcpy(&s[0],&s[i]); 
}
void trimphai(char s[]){
	int i=strlen(s)-1;
	while (s[i]==32) i--;
	s[i+1]=0; 
}
void trimgiua(char s[]){
	char *pc=NULL;
	pc = strstr(s,"  ");
	while (pc!=NULL){
		strcpy(pc,pc+1);
		pc=strstr(s,"  "); 
	} 
}
void trim(char s[]){
	trimtrai(s);
	trimphai(s);
	trimgiua(s); 
}
void split(char s[],char word[][31],int *n){
	char s1[10001];
	int i,k=0;
	strcpy (s1,s);
	trim(s1);
	for(i=0;i<strlen(s1);i++){
		if(s1[i]==32){
			strcpy(word[k],s1);
			word[k++][i]=0;
			strcpy(&s1[0],&s1[i+1]);
			i=-1;
		} 
	}
	strcpy(word[k],s1);
	*n=k+1; 
}//1
//#include<stdio.h>
//#include<string.h>
//void trim(char s[]);
//void trimtrai(char s[]);
//void trimphai(char s[]);
//void trimgiua(char s[]);
//void split(char s[],char word[][31],int *n);
//void rebuild(char w[][31],int n, char s[]); 
//int check(char w[][31],int i); 
//void process(char w[][31], int n);
//void rebuild(char w[][31],int n, char s[]){
//	int i; 
//	if (0==n){
//	s[0]=0;
//	return; 
//	} 
//	else {
//		strcpy(s,w[0]);
//		for(i=1;i<n;i++){
//			strcat(s," ");
//			strcat(s,w[i]); 
//		} 
//	} 
//}
//int check(char w[][31], int i){
//	int  j, k, h;
//	if(strlen(w[i]) >= 3){
//		k = 0;
//		h = 0;
//		for(j=0;j<strlen(w[i]);j++){
//			if(w[i][j]>=65&&w[i][j]<=90) k++;	
//			if(w[i][j]>=48&&w[i][j]<=57) h++;
//		}
//		if(k > 0 && h > 0){
//			return 1;
//		} 
//		else	return 0;
//		
//	}else return 0; 
//}
//void process(char w[][31],int n){    // dem cac tu thoa man strong password 
//	int i;
//    int d=0;
//	for(i=0;i<n;i++){
//	if (check(w, i)==1) {
//		printf("%s",w[i]); 
//		break;
//	}
//	}
//}                                          //phep thu cong Hoa1 Xa Hoii CHuu Nghia12 
//main(){
//	char s[10001];
//	char w[100][31];
//	int n,i,t;
//	printf("input string = ");
//	gets(s);  
//	printf("\nso tu thoa man strong password:");
//	split(s,w,&n);
//	process(w,n);
//} 
//void trimtrai(char s[]){
//	int i=0;
//	while(s[i]==32) i++; 
//	strcpy(&s[0],&s[i]); 
//}
//void trimphai(char s[]){
//	int i=strlen(s)-1;
//	while (s[i]==32) i--;
//	s[i+1]=0; 
//}
//void trimgiua(char s[]){
//	char *pc=NULL;
//	pc = strstr(s,"  ");
//	while (pc!=NULL){
//		strcpy(pc,pc+1);
//		pc=strstr(s,"  "); 
//	} 
//}
//void trim(char s[]){
//	trimtrai(s);
//	trimphai(s);
//	trimgiua(s); 
//}
//void split(char s[],char word[][31],int *n){
//	char s1[10001];
//	int i,k=0;
//	strcpy (s1,s);
//	trim(s1);
//	for(i=0;i<strlen(s1);i++){
//		if(s1[i]==32){
//			strcpy(word[k],s1);
//			word[k++][i]=0;
//			strcpy(&s1[0],&s1[i+1]);
//			i=-1;
//		} 
//	}
//	strcpy(word[k],s1);
//	*n=k+1; 
//} // tim va hien thi strong passwword dau tien 
//#include<stdio.h>
//#include<string.h>
//void trim(char s[]);
//void trimtrai(char s[]);
//void trimphai(char s[]);
//void trimgiua(char s[]);
//void split(char s[],char word[][31],int *n);
//void rebuild(char w[][31],int n, char s[]); 
//void process(char w[][31], int *n);
//void rebuild(char w[][31],int n, char s[]){
//	int i; 
//	if (0==n){
//	s[0]=0;
//	return; 
//	} 
//	else {
//		strcpy(s,w[0]);
//		for(i=1;i<n;i++){
//			strcat(s," ");
//			strcat(s,w[i]); 
//		} 
//	} 
//}
//void process(char w[][31],int *n){
//	int i,j;
//    char d[10001]; 
//	for(i=0;i<*n/2;i++){ 
//		strcpy(d,w[i]);
//		strcpy(w[i],w[*n-i-1]);
//		strcpy(w[*n-i-1],d);
//	}
//} 
//main(){
//	char s[10001];
//	char w[100][31];
//	int n,i,t;
//	printf("input string = ");
//	gets(s);  
//	printf("\nchuoi sau khi xu ly la:");
//	split(s,w,&n);
//	process(w,&n);
//	rebuild(w,n,s);
//	printf("(%s)",s); 
//} 
//void trimtrai(char s[]){
//	int i=0;
//	while(s[i]==32) i++; 
//	strcpy(&s[0],&s[i]); 
//}
//void trimphai(char s[]){
//	int i=strlen(s)-1;
//	while (s[i]==32) i--;
//	s[i+1]=0; 
//}
//void trimgiua(char s[]){
//	char *pc=NULL;
//	pc = strstr(s,"  ");
//	while (pc!=NULL){
//		strcpy(pc,pc+1);
//		pc=strstr(s,"  "); 
//	} 
//}
//void trim(char s[]){
//	trimtrai(s);
//	trimphai(s);
//	trimgiua(s); 
//}
//void split(char s[],char word[][31],int *n){
//	char s1[10001];
//	int i,k=0;
//	strcpy (s1,s);
//	trim(s1);
//	for(i=0;i<strlen(s1);i++){
//		if(s1[i]==32){
//			strcpy(word[k],s1);
//			word[k++][i]=0;
//			strcpy(&s1[0],&s1[i+1]);
//			i=-1;
//		} 
//	}
//	strcpy(word[k],s1);
//	*n=k+1; 
//} // dao nguoc cac tu ex: cong hoa xa hoi chu nghia -> nghia chu hoi xa hoa cong
//#include<stdio.h>
//#include<string.h>
//void trim(char s[]);
//void trimtrai(char s[]);
//void trimphai(char s[]);
//void trimgiua(char s[]);
//void split(char s[],char word[][31],int *n);
//void rebuild(char w[][31],int n, char s[]); 
//void process(char w[][31], int *n);
//void rebuild(char w[][31],int n, char s[]){
//	int i; 
//	if (0==n){
//	s[0]=0;
//	return; 
//	} 
//	else {
//		strcpy(s,w[0]);
//		for(i=1;i<n;i++){
//			strcat(s," ");
//			strcat(s,w[i]); 
//		} 
//	} 
//}
//void process(char w[][31],int *n){
//	int i,j;
//    char d[10001]; 
//	for(i=*n/2;i<*n*3/4;i++){ 
//		strcpy(d,w[i]);
//		strcpy(w[i],w[*n-i-1+*n/2]);
//		strcpy(w[*n+*n/2-1-i],d);
//	}
//	for(i=0;i<*n/2;i++){
//		for(j=i+1;j<*n/2;j++){
//		if(strcmp(w[i],w[j])>0){
//			strcpy(d,w[i]); 
//			strcpy(w[i],w[j]); 
//			strcpy(w[j],d); 
//		} 
//		} 
//	} 
//} 
//main(){
//	char s[10001];
//	char w[100][31];
//	int n,i,t;
//	printf("input string = ");
//	gets(s);  
//	printf("\nchuoi sau khi xu ly la:");
//	split(s,w,&n);
//	process(w,&n);
//	rebuild(w,n,s);
//	printf("(%s)",s); 
//} 
//void trimtrai(char s[]){
//	int i=0;
//	while(s[i]==32) i++; 
//	strcpy(&s[0],&s[i]); 
//}
//void trimphai(char s[]){
//	int i=strlen(s)-1;
//	while (s[i]==32) i--;
//	s[i+1]=0; 
//}
//void trimgiua(char s[]){
//	char *pc=NULL;
//	pc = strstr(s,"  ");
//	while (pc!=NULL){
//		strcpy(pc,pc+1);
//		pc=strstr(s,"  "); 
//	} 
//}
//void trim(char s[]){
//	trimtrai(s);
//	trimphai(s);
//	trimgiua(s); 
//}
//void split(char s[],char word[][31],int *n){
//	char s1[10001];
//	int i,k=0;
//	strcpy (s1,s);
//	trim(s1);
//	for(i=0;i<strlen(s1);i++){
//		if(s1[i]==32){
//			strcpy(word[k],s1);
//			word[k++][i]=0;
//			strcpy(&s1[0],&s1[i+1]);
//			i=-1;
//		} 
//	}
//	strcpy(word[k],s1);
//	*n=k+1; 
//} // cho chuoi >=8 tu sap xep 4 tu dau va dao 4 tu sau
//#include<stdio.h>
//#include<string.h>
//void trim(char s[]);
//void trimtrai(char s[]);
//void trimphai(char s[]);
//void trimgiua(char s[]);
//void split(char s[],char word[][31],int *n);
//void rebuild(char w[][31],int n, char s[]); 
//void process(char w[][31], int n);
//void rebuild(char w[][31],int n, char s[]){
//	int i; 
//	if (0==n){
//	s[0]=0;
//	return; 
//	} 
//	else {
//		strcpy(s,w[0]);
//		for(i=1;i<n;i++){
//			strcat(s," ");
//			strcat(s,w[i]); 
//		} 
//	} 
//}
////void dao(char w[][31],int i){
////	int j,t;
////	char d[10001];
////	t=strlen(w[i]);
////	for(j=0;j<t/2;j++){
////		strcpy(d,w[i][j]);
////		strcpy(w[i][j],w[i][t-1-j]);
////		strcpy(w[i][t-1-j],d);
////	}
////}
//void process(char w[][31],int n){
//	int i,j,t;
//	char d[10001];
//	for(i=0;i<n;i++){
//		t=strlen(w[i]);
//		for(j=0;j<t/2;j++){
//			strcpy(d,w[i][j]);
//			strcpy(w[i][j],w[i][t-1-j]);
//			strcpy(w[i][t-1-j],d);
//	  }
//	} 
//} 
//main(){
//	char s[10001];
//	char w[100][31];
//	int n,i;
//	printf("input string = ");
//	gets(s);  
//	printf("\nchuoi sau khi xu ly:");
//	split(s,w,&n);
//	process(w,n);
//	rebuild(w,n,s);
//	printf("(%s)",s); 
//} 
//void trimtrai(char s[]){
//	int i=0;
//	while(s[i]==32) i++; 
//	strcpy(&s[0],&s[i]); 
//}
//void trimphai(char s[]){
//	int i=strlen(s)-1;
//	while (s[i]==32) i--;
//	s[i+1]=0; 
//}
//void trimgiua(char s[]){
//	char *pc=NULL;
//	pc = strstr(s,"  ");
//	while (pc!=NULL){
//		strcpy(pc,pc+1);
//		pc=strstr(s,"  "); 
//	} 
//}
//void trim(char s[]){
//	trimtrai(s);
//	trimphai(s);
//	trimgiua(s); 
//}
//void split(char s[],char word[][31],int *n){
//	char s1[10001];
//	int i,k=0;
//	strcpy (s1,s);
//	trim(s1);
//	for(i=0;i<strlen(s1);i++){
//		if(s1[i]==32){
//			strcpy(word[k],s1);
//			word[k++][i]=0;
//			strcpy(&s1[0],&s1[i+1]);
//			i=-1;
//		} 
//	}
//	strcpy(word[k],s1);
//	*n=k+1; 
//} 
