#include <stdio.h>
#include <ctype.h>

//tinh thuong cho giang vien khi co 1 cong trinh xuât ban 
//tieu chi isi va ko isi 
// dat q1 q2 or q3 or q4 or ko dat q or ko dat scopus
//so luong nguoi tham gia 
// Made by Dinh Nhat Duy 

main (){
	char isi; 
	int paticipation = 0; 
	int reward=0;
	int scopus=0;
	int reward_per_person=0;
	printf("Is this project ISI standard?:");
	scanf ("%c",&isi);	
	isi = toupper(isi);	
	printf("Enter scopus(0-4):");
	scanf ("%d",&scopus);
	printf("How many paticipation is in this project:");
	scanf ("%d",&paticipation);
	switch (isi){
		case 'Y':
	if (scopus==1){
		reward = 100000000;
		reward_per_person = reward / paticipation;
		printf("Total number of reward = %d\n",reward);
		printf("Reward per person in this project is %d",reward_per_person);
	}
	else if (scopus==2){
		reward = 80000000 ;
		reward_per_person = reward / paticipation;
		printf("Total number of reward = %d\n",reward);
		printf("Reward per person in this project is %d",reward_per_person);
	}
	else if (scopus == 3 || scopus ==4){
		reward = 60000000;
		reward_per_person = reward / paticipation;
		printf("Total number of reward =%d\n",reward);
		printf("Reward per person in this project is %d",reward_per_person);
	}
	else if (scopus == 0){
		reward = 60000000; 
		reward_per_person = reward / paticipation;
		printf("Total number of reward =%d\n",reward);
		printf("Reward per person in this project is %d",reward_per_person);
	}
	else {
		printf("The scopus is not in range");	
	}	

	break;
		case 'N':
	if (scopus==1){
		reward = 80000000;
		reward_per_person = reward / paticipation;
		printf("Total number of reward = %d\n",reward);
		printf("Reward per person in this project is %d",reward_per_person);
	}
	else if (scopus==2){
		reward = 60000000 ;
		reward_per_person = reward / paticipation;
		printf("Total number of reward = %d\n",reward);
		printf("Reward per person in this project is %d",reward_per_person);
	}
	else if (scopus == 3 || scopus ==4){
		reward = 40000000;
		reward_per_person = reward / paticipation;
		printf("Total number of reward =%d\n",reward);
		printf("Reward per person in this project is %d",reward_per_person);
	}
	else if (scopus == 0){
		reward = 20000000; 
		reward_per_person = reward / paticipation;
		printf("Total number of reward =%d\n",reward);
		printf("Reward per person in this project is %d",reward_per_person);
	}
			
	break;
		
		default:
		printf("not valid");
	break;
	}
}

