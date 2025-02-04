#include<stdio.h>

main(){
	
	int choice;
	int qty;
	int total_amount=0 ,amount_pizza=0 ,amount_burger=0,amount_dosa=0,amount_idli=0;
	char Yes_No = 'y';
	
	//already declare 'y' as a static so loop condition is true for repeatedly execute this program 
	while(Yes_No == 'y'|| Yes_No == 'Y')
	{
	printf("\n---------- Menu ----------\n");
	printf(" 1.Pizza\t price = 180rs/pcs\n ");
	printf("2.Burger\t price = 100rs/pcs\n ");
	printf("3.Dosa\t\t price = 120rs/pcs\n ");
	printf("4.Idli\t\t price = 50rs/pcs\n ");
	
	
	
		while(1)
		{
			printf("Please Enter your choose... : "); // User Choice Input
			scanf("%d",&choice);
			
			if(choice >=1 && choice <=4)
			{
				break;
			}
			else{
				printf("Invalid input !!\n");
					
			}		
		}
	
	if(choice==1)
	{
		printf("\n");
		printf("You have Selected Pizza.\n");
		printf("Enter the quantity: ");
		scanf("%d",&qty);
		amount_pizza = qty*180;
		total_amount +=amount_pizza;
		printf("Amount : %d \n",amount_pizza);
		printf("Total Amount is = %d ",total_amount);
		
	}
	else if(choice==2)
	{
		printf("\n");
		printf("You have Selected Burger.\n");
		printf("Enter the quantity: ");
		scanf("%d",&qty);
		amount_burger = qty*100;
		total_amount +=amount_burger;
		printf("Amount : %d \n",amount_burger);
		printf("Total Amount is = %d ",total_amount);
		
	}
	else if(choice==3)
	{
		printf("\n");
		printf("You have Selected Dosa.\n");
		printf("Enter the quantity: ");
		scanf("%d",&qty);
		amount_dosa = qty*120;
		total_amount +=amount_dosa;
		printf("Amount : %d \n",amount_dosa);
		printf("Total Amount is = %d ",total_amount);
		
	}
	else if(choice==4)
	{
		printf("\n");
		printf("You have Selected idli.\n");
		printf("Enter the quantity: ");
		scanf("%d",&qty);
		amount_idli = qty*50;
		total_amount +=amount_idli;
		printf("Amount : %d \n",amount_idli);
		printf("Total Amount is = %d ",total_amount);
		
	}

	printf("\nDo you want place more order ? y & n: ");
   	 scanf(" %c", &Yes_No);	
		
	}
	
	
}
