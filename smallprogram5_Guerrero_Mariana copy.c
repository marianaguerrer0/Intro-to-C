//Mariana Guerrero
//Dr. Steinberg
//COP2332 Section 1
//Small Program 5 

#include <stdio.h>
#include <math.h>

//function prototypes for shell functions
void shellFunctionProblem1();

//function prototypes for small program functions
void pickButton(int * selection); 
void match(); 
void blockbuster(); 
void numberFacts(); 

int main(int argc, char* argv[])
{
	/* 
	   DO NOT CHANGE ANYTHING OR ADD 
	   ANYTHING INTO THE MAIN FUNCTION!
	*/
	switch(*argv[1])
	{
		case '1':
		
			shellFunctionProblem1(); 
			break;
			
		case '2':
		
			match();
			break;
			
		case '3':
		
			blockbuster();
			break;
			
		case '4':
		
			numberFacts();
			break;
		
		default:
			printf("ERROR!\n");
	}
		
    return 0;
}

void shellFunctionProblem1()
{
	//defining variables
	int button;
	pickButton(&button);
	
	if (button < 1 || button > 7) 
		printf("Invalid Button Selected!\n");
	else if (button == 1)
		printf("Blue Button Selected!\n");
	else if (button == 2)
		printf("Green Button Selected!\n");
	else if (button == 3)
		printf("Yellow Button Selected!\n");
	else if (button == 4)
		printf("Red Button Selected!\n");
	else if (button == 5)
		printf("Gold Button Selected!\n");
	else if (button == 6)
		printf("Black Button Selected!\n");
	else 
		printf("White Button Selected!\n");

	

}

void pickButton(int * selection)
{
	printf("Choose a button.\n");
	printf("1. Blue Button\n");
	printf("2. Green Button\n");
	printf("3. Yellow Button\n");
	printf("4. Red Button\n");
	printf("5. Gold Button\n");
	printf("6. Black Button\n");
	printf("7. White Button\n");
	printf("Selection: ");
	scanf("%d\n", selection); //aking for input

}
	

void match()
{
	//creating needed files
	FILE *grade1;
	FILE *grade2;
	FILE *grade3;
	
	//defining variables
	char letter1;
	char letter2;
	char letter3;
	
	int notEqualCount=0;
	
	//opening files
	grade1 = fopen("grades1.txt", "r");
	grade2 = fopen("grades2.txt", "r");
	grade3 = fopen("grades3.txt", "r");
	
	//reading until end of file
	while((fscanf(grade1,"%c",&letter1)!=EOF)&&(fscanf(grade2,"%c",&letter2)!=EOF)
	&&(fscanf(grade3,"%c",&letter3)!=EOF))
	{
		if((letter1 != letter2) || (letter1 != letter3) ||	(letter2 != letter3))
			notEqualCount = 1;
	}
	if (notEqualCount==1)
		printf("No Match!\n");
	else
		printf("Match!\n");
	//closing files
	fclose(grade1);
	fclose(grade2);
	fclose(grade3);
}

void blockbuster()
{
	//creating needed files
	FILE *sales;
	FILE *recordsale;
	
	//opening files
	sales = fopen("sales.txt", "r");
	recordsale = fopen("recordsales.txt", "w");
	
	//defining variables
	double profit = 0.0;
	double customerTotal;
	int customer;
	int totalVideos;

	
	printf("Retrieving the Records from today's sale!\n");
	//reading until end of file
	while (fscanf(sales, "%d %d", &customer, &totalVideos) != EOF)
	{
		customerTotal = totalVideos * 2.99; //calculating total per customer
		profit += customerTotal;
		//terminal print statements
		printf("Customer: %d\t", customer); 
		printf("Spent: $%.2lf\n", customerTotal);
		
		//file print statements
		fprintf(recordsale, "Customer: %d\t", customer);
		fprintf(recordsale, "Spent: $%.2lf\n", customerTotal);
		
	}
	
	printf("-----------------------------\n");
	printf("$%.2lf was made today.\n", profit);
	
	fprintf(recordsale, "-----------------------------\n");
	fprintf(recordsale,"$%.2lf was made today.\n", profit);

	//closing files
	fclose(sales);
	fclose(recordsale);
}

void numberFacts()
{
	//creating files
	FILE *fptr;
	//opening file
	fptr= fopen("numfact.txt","w");
	
	//defining variable
	int posInt; 
	
	printf("Number\tPart A\tPart B\tPart C\n");
	fprintf(fptr, "Number\tPart A\tPart B\tPart C\n"); 
	
	//while true loop
	while(1)
	{
		printf("Enter a positive integer: ");
		scanf("%d",&posInt);
		
		if (posInt>0)
		{
			printf("%d\t", posInt); //console
        	fprintf(fptr, "%d\t", posInt); //file
			//part a) multiple of 7, 11 or 13
        	if ((posInt % 7 == 0) || (posInt % 11 == 0) || (posInt % 13 == 0))
        	{
        		printf("Yes!\t");
            	fprintf(fptr, "Yes!\t"); 
        	}
        	else
        	{
        		printf("No!\t"); 
            	fprintf(fptr, "No!\t"); 
        	}
        	//part b)  even or odd 
        	if (posInt % 2 == 0)
        	{
        		printf("Even\t");
        		fprintf(fptr, "Even\t");
        	}
        	else
        	{
        		printf("Odd\t");
        		fprintf(fptr, "Odd\t");
        	}
        	//part c) prime or composite
        	int count = 0;
        	for (int i = 1; i <= posInt; i++) 
        	{
            	if (posInt % i == 0)
                count++;
        	}
        	if (count > 2)
        	{
        		printf("Composite\n");
            	fprintf(fptr, "Composite\n");
        	}
        	else
        	{
        		printf("Prime\n");
        		fprintf(fptr, "Prime\n");
        	}
        }
        else
        	break;
	}
}





















