#include <iostream>
using namespace std;
 
int mainMenu();
int menu();
void displayBalance();
void withdrawFunds();
void depositFunds();

int balance = 25000;

int main(){
	char arr[10];
	FILE *fp;
	int ac_number,pin,j,m;
	
 	printf("\n\n\t\t\t*********************************");
 	printf("\n\t\t\t    WELCOME TO THE ATM MACHINE");
 	printf("\n\t\t\t*********************************");  	
	for(;;){
		printf("\n\nEnter your card no.= ");
		fp=fopen("Card.txt","r");
		fscanf(fp,"%d", &j);
		scanf("%d",&ac_number);
		
		if(j==ac_number){
			printf("Card is correct");
			for(;;){
				printf("\n\nEnter your pin number = ");
				fp=fopen("Pin.txt","r");
				fscanf(fp,"%d", &m);
				scanf("%d",&pin);
				if (m==pin){
					printf("Pin correct");
					menu();
				}
				else{
					printf("\nWRONG PIN");
				}
			}}
			else{
				printf("\nWRONG CARD");
		}
	}
}
	
	
int menu(){
    switch (mainMenu()){
    	int c;
	   case 1:
		    displayBalance();
            menu(); 
            break;
 
        case 2:
		    withdrawFunds();
            menu(); 
            break;
 
 
        case 3:
            depositFunds();
            menu(); 
            break;
 
 
        case 4:
           	 printf("\nPress 1 to continue ...... ");
           	 scanf("%d",&c);
           	 
           	 if(c==1){
           	 	main();
				}
				else{
				break;
				}
            
 
 
        default:
        	printf("INVALID ENTRY .... Please Select Number 1-4 \n");
			break;
 
    }    
    return 0;
}

int mainMenu(){
	 int input;
	  printf("\n\n\nHow you want to proceed :-");
   				   printf("\nPress 1 to check the Balance");
   				   printf("\nPress 2 to Withdrawal");
   				   printf("\nPress 3 for Deposit");
   				   printf("\nPress 4 for Exit");
   				   printf("\n\nEnter your choice = ");
   	 			   scanf("\n%d",&input);
    return input;
}

void displayBalance(){
	printf("\nAccount Balance is : RS%d \n",balance);
}
		
void withdrawFunds(){
     int withdraw = 0;
	 printf("\nYou have opted to withdraw money");
	 printf("\n\nEnter the amount you wish to withdraw = ");
	 scanf("%d",&withdraw);
	 	     
	 if(withdraw > balance){
	   			    printf("\nValue exceeds current balance.");
					}
					else if(withdraw % 500==0 || withdraw % 100==0 ){
						balance=balance-withdraw;
						printf("\nRemianing Balance is = %d",balance);
					}
					else {
						printf("\n\nAmount should be multiple of 100,500,2000");

					}}
void depositFunds(){
	int deposit = 0;
	printf("\nYou have opted to Deposit Money");
	printf("\nEnter the amount you wish to deposit = ");
	scanf("%d",&deposit);
	if (deposit == 0){
        menu(); 
    }
 
    else if (deposit != 0){
    	printf("\nYou have successfully added %d in your account,",deposit);
    	balance=balance+deposit;
    	printf("\nBalance is = %d",balance);
    }}
