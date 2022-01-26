#include <stdio.h>
//luong nam : luong thang + thuong + phu cap +- thue tam thu 
//100 tr = thue 7%
//100 tr - 200 tr = thue 9%
//200 tr - 500 tr = thue 15%
//500 tr - 1 ty = thue 25%
//1 ty = thue 35%

main(){
	float year_income[12];
	float good_earn =0;
	int i;
	float tax = 0;
	float final =0;
	for (i=1;i<=12;i++){
		printf("Enter the income of the %d month: ",i);
		scanf ("%f",&year_income[i]);
		good_earn += year_income[i];		
	
	if (good_earn <= 100000000){
		tax = good_earn /100*7;
		final = good_earn - tax;
		printf("money earn = %f",final);
	}
	else if (good_earn > 100000000 && good_earn <= 200000000){
		tax = good_earn /100*9;
		final = good_earn - tax;
		printf("money earn = %f",final);
	}
	else if (good_earn > 200000000 && good_earn <= 500000000){
		tax = good_earn /100*15;
		final = good_earn - tax;
		printf("money earn = %f",final);
	}
	else if (good_earn > 500000000 && good_earn <= 1000000000){
		tax = good_earn /100*25;
		final = good_earn - tax;
		printf("money earn = %f",final);
	}
	else if (good_earn >= 1000000000){
		tax = good_earn /100*25;
		final = good_earn - tax;
		printf("money earn = %f",final);
	}
	else{
		printf("no valid");
	}
}
	return 0;	
}
