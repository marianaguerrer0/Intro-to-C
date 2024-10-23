//Mariana Guerrero
//Dr. Steinberg
//COP3223C Section 1
//Large Program 2

#include <stdio.h>

void greeting(); 
void order(double *balance); 
void viewHand(double *balance); 
void transaction(double *balance, double price); 
void pullMoney(double *balance); 
void displayVendingOptions(); 

int main()
{
	int userChoice;
	double balance = 0.00;
	greeting();
	
	
	//while loop to repeat until exit
	while (1)
	{		
		printf("Menu:\n");
		printf("1. View current amount.\n");
		printf("2. Order a drink.\n");
		printf("3. View drinks menu.\n");
		printf("4. Pull money from wallet.\n");
		printf("5. Exit program and see amount left.\n");
		scanf("%d",&userChoice);
	
		
		if (userChoice == 1)
		{
			viewHand(&balance);
		}
		else if (userChoice == 2)
		{
			order(&balance);
		}
		else if (userChoice == 3)
		{
			displayVendingOptions();
		}
		else if (userChoice == 4)
		{
			pullMoney(&balance);
		}
		else if (userChoice == 5)
		{
			printf("Thank you for shopping with us!\n");
			printf("Your amount left is $%.2lf\n", balance);
			return 0;		
		}
		else
		{
			printf("Select a valid option 1 through 5.\n");
		}
	}
}

void greeting()
{	
	//greeting customers
	printf("Welcome to The Unlimited Vending Machine!\n");
	printf("With your magical wallet you will be able to ");
	printf("pull any amounts of $1, $5, and $10 bills.\n");
	printf("The unlimited vending machine will have an unlimited amount of drinks.\n");
	printf("Thank you for shopping with us!\n");
}
void order(double *balance)
{
	displayVendingOptions();
	int selection;
	printf("Select your item: ");
	scanf("%d", &selection);
	
	//displaying all possible options and prices
	if (selection == 1)
	{
		transaction(balance, 2.50);
	}
	else if (selection == 2)
	{
		transaction(balance, 2.50);
	}
	else if (selection == 3)
	{
		transaction(balance, 2.00);
	}
	else if (selection == 4)
	{
		transaction(balance, 3.00);
	}
	else if (selection == 5)
	{		
		transaction(balance, 2.55);
	}
	else if (selection == 6)
	{
		transaction(balance, 2.55);
	}
	else if (selection == 7)
	{
		transaction(balance, 1.50);
	}
	else if (selection == 8)
	{
		transaction(balance, 1.55);
	}
	else
	{
		("Select a valid number.");
	}
}
void viewHand(double *balance)
{
	printf("Your account balance is: $%.2lf\n", *balance);
}
void transaction(double *balance, double price)
{
	while(*balance < price)
	{
		printf("Reload your account, not enough funds.\n");
		pullMoney(balance);
	}
	
	*balance -= price; //total  balance minus drink purchased
	printf("Thank you for your purchase!\n");
}
void pullMoney(double *balance)
{
	double walletMoney = 0.00;
	printf("How much would you like to pull from your wallet? $1, $5 or $10?\n");
	scanf("%lf", &walletMoney);
	
	//adding money from wallet to account
	if (walletMoney == 1)
	{
		*balance += 1.00; 
	}
	else if (walletMoney == 5)
	{
		*balance += 5.00;	
	}
	else if (walletMoney == 10)
	{
		*balance += 10.00;
	}
	else
	{
		printf("Invalid choice, please try again.");
	}
	
}
void displayVendingOptions()
{
	//displaying drinks menu
	printf("Drinks Menu:\n");
	printf("1- Sprite\t $2.50\n");
	printf("2- Coca-Cola\t $2.50\n");
	printf("3- Water\t $2.00\n");
	printf("4- Gatorade\t $3.00\n");
	printf("5- Diet Cola\t $2.55\n");
	printf("6- Fanta\t $2.55\n");
	printf("7- Root Beer\t $1.50\n");
	printf("8- Dr. Pepper\t $1.55\n");
}