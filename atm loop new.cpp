#include<iostream>
using namespace std;
int main(){
	int i,j=1234,a,c,m=12,e,b,g,bal=5000,f,h;
	for(;;){
		printf("\nEnter your card no.= ");
		scanf("%d",&a);
		if(j==a){
			printf("Card is correct");
			for(;;){
				printf("\n\nEnter your pin number = ");
				scanf("%d",&c);
				if (m==c){
					printf("Pin is correct");
					for(;;){							
					
				   printf("\n\nHow you want to proceed :-");
   				   printf("\nPress 1 to check the Balance");
   				   printf("\nPress 2 to Add the Balance");
   				   printf("\nPress 3 for Withdraw");
   				   printf("\n\nEnter your choice = ");
   	 			   scanf("\n%d",&b);
   	 			   switch(b){
				   case 1: b==1;
   				   printf("\n\nBalance is = Rs%d",bal);
   				   break;
		           
	   			   case 2: b==2;					  
	   			   	printf("\nEnter the amount you want to Add = ");
	   			   	scanf("%d",&f);
	   			   	printf("Total amount in your acount is = %d",bal+f);
	   			    break;
 		           case 3: b==3;					  
	   			   	printf("\nEnter the amount you want to withdraw = ");
	   			   	scanf("%d",&g);
	   			   	{
	   			    if(g>=bal){
	   			    printf("Insufficient Balance ");
				    }
				    else if(g<=bal){
						if(g%500==0 || g%100==0 ){
						printf("\nRemianing Balance is = %d",h=bal-g);
					}
					else {
						printf("\nAmount should be multiple of 100,500,2000");
					}}
					}}
				printf("\n\nPress 1 to continue or 2 to exit ");
					printf("\nEnter your choice = ");
					scanf("%d",&e);
					if(e==1){
					}		
					else{
						break;
					}}}			
				else{
					printf("\nPin incorrect");
				}}}
		else {
			printf("\nInvalid card");
		}
	}
}
