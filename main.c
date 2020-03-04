#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct customer {
	
	char custname[50];
	char branchname[20];
	int  pinnumber;
	int  pinnumber2;
	int  balance;
};

int main(){
     
    int score=50;
	struct customer name1[score];
	int count=1,pinnumber,pinnumber2,select,select1,get,deposit,include,i;

	 
	strcpy(name1[0].custname,"Imalsha");
	strcpy(name1[0].branchname,"Kelaniya");
	name1[0].pinnumber=1111;
	name1[0].pinnumber2=1234;
	name1[0].balance=35000;
	     
	    printf("\n\n");
		printf("			++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
		printf(" 			+	   Enter 0 ______If you are a operator:            +\n ");
		printf("			+	   Enter 1 ______If you are a customer:            +\n");
		printf("			++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n");
		scanf("%d", &select1);
		printf("*****************************************************************************\n\n");
	      // enter Secret code--This option Is for the operator
	      if(select1==0){	
		printf("Enter your Secret Code:");
	    scanf("%d",&pinnumber2);
	    printf("\n\n");
	    
		if(pinnumber2==name1[0].pinnumber2){  	
		printf("How many customers you Want to include:");
			scanf("%d",&include);
		   
			// add new customers
			for(i=1;i<include+1;i++){
				
				printf("Enter customer name:");
				scanf("%s",name1[i].custname);
		       
				printf("Enter branch name:");
				scanf("%s",name1[i].branchname);
				
				printf("Eneter pin number:");
				scanf("%d",&name1[i].pinnumber);
				
				printf("Enter Balance:");
				scanf("%d",&name1[i].balance);
				printf("\n");
		}
 			
				printf("Customer's details\n");	
                for(i=0;i<include+1;i++){
		     	printf("customer %d \n\n name %s:\n",i+1,name1[i].custname);
		     	printf(" branch name: %s\n",name1[i].branchname);
		     	printf(" pin number:%d\n",name1[i].pinnumber);
		     	printf(" balance %d\n\n",name1[i].balance);
   		 }
		
			
		}
		
		
		  }if(select1==1){
	    printf(" Insert your card and ---- Enter your Pin Number:");
	    scanf("%d",&pinnumber);
	    printf("\n\n");
	    
	    if(pinnumber == name1[0].pinnumber){
		
	
	     // interface
	    printf("*************Hi Imalsha Sandeepani****************\n\n");
		printf("1. Withdraw the cash\n");
		printf("2. Deposit the cash\n");
		printf("3. Check the Balance in account\n");
		printf("4. Exit\n\n");
		printf("***************************************************\n\n");
		
			//Ask from the user, what service user want 
		printf(" Select what you want: ");
		scanf("%d", &select);
        switch (select)
		{
		
		case 1:
			printf("\n how many money you want to get: ");
			scanf("%d", &get);
			
		          if (get > name1[0].balance){
				      printf("\n Insufficent money");
			           }
			      else{
		            name1[0].balance = name1[0].balance - get;
				    printf("\n\n Take your money ");
				    printf("\n current balance is:%d", name1[0].balance);
			            }
			break;
		
		case 2:
			printf("\n how many money you want to deposit: ");
			scanf("%d", &deposit);
                        name1[0].balance = name1[0].balance + deposit;
                        printf("\n");

			printf(" account balance is: %d", name1[0].balance);
			break;
		
		case 3:
			printf("\n  account balance is : %d ",name1[0].balance);
			break;	
		
	
		case 4:
				printf("\n Thank you for Banking With Us");
				break;
		default:
			printf("\n choice is not valid");
			break;
		}
		count++; 
		}


	    if(count==1){
	   	printf("Invalid pin number");
	   	exit(0);
	   }
	   }
	   } 
		


