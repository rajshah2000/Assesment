// Assesement SE  Create a Food billing system

#include<stdio.h>
int main(){
	int p=500,b=150,d=120,s=60,choice,q,amt=0;
	char c;
	
	for(int i=1;i<=50;i++){
	
	printf("1.Pizza       price 500/pc");
	printf("\n2.Burger      price 150/pc");
	printf("\n3.Dosa        price 120/pc");
	printf("\n4.Sandwitch   price 60/pc");
	
	printf("\nEnter your choice");
	scanf("%d",&choice);
	printf("\nEnter Quantity");
	scanf("%d",&q);
	
	if(choice==1){
		
		printf("\nYou have selected pizza");
		amt=p*q;
		printf("\nAmount is: %d",amt);
	}
	else if(choice==2){
		
		printf("\nYou have selected burger");
		amt=b*q;
		printf("\nAmount is: %d",amt);
		
	}
	else if(choice==3){
		
		printf("\nYou have selected dosa");
		amt=d*q;
		printf("\nAmount is: %d",amt);
		
	}
	else if(choice==4){
		
		printf("\nYou have selected sandwitch");
		amt=s*q;
		printf("\nAmount is: %d",amt);
		
	}
	else{
		printf("\nwrong choice");
	}
	
	printf("\nDo you want to place more orders ? yes & no");
	scanf(" %c",&c);
	
	if(c=='y'){
		continue;
	}
	else if(c=='n'){
		break;
	}
	else{
		printf("\nenter valid choice");
	}
	
	
}
}
