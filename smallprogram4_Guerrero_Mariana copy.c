//Mariana Guerrero
//Dr. Steinberg
//COP3223 Section 001
//Small Program 4

#include <stdio.h>
#include <math.h>

//function prototypes for shell functions
void shellFunctionProblem4();

//function prototypes for small program functions
void countEvenOdd();
void drawShape();
void toyPhone();
void costPreview(int years, int rate);

int main(int argc, char* argv[])
{

	switch(*argv[1])
	{
		case '1':
		
			countEvenOdd();
			break;
			
		case '2':
		
			drawShape();
			break;
			
		case '3':
		
			toyPhone();
			break;
			
		case '4':
		
			shellFunctionProblem4();
			break;
		
		default:
			printf("ERROR!\n");
	}
		
    return 0;
}

void shellFunctionProblem4()
{
		//defining all needed variables
		int years;
		int rate;
		double ratePerYear;
		double tuition = 20000.00;
		int totalYears;
	do 
		{	
			//asking the user for input 
			printf("Enter the number years to observe: ");
			scanf("%d",&years);
			printf("Enter the percentage rate to increase by per year: ");
			scanf("%d",&rate);
			
			if(years<=0 || rate <=0)
			{
				//making sure user inputs a valid value
				printf("Invalid input.\n");
			}
			else
			{	
				printf("Current Tuition: $20000.00\n");
				for (int totalYears = 1; totalYears <= years; totalYears++)
				//for loop to make sure the input of needed years is printed correctly
				//in other words we don't now how many times for will loop until user input years
				{
                	//calculating the total tuition depending on the rate
                	ratePerYear = tuition + (tuition * rate / 100.0);  
                	printf("Year %d: $%.2lf\n", totalYears, ratePerYear);
                	tuition = ratePerYear; // updating tuition for next year(s)
				}
			}	
			
		}while (years <= 0 || rate <=0);
	
		
}
void countEvenOdd()
{
	//defining all needed variables
	int integer;
	int evenCount = 0;
	int oddCount = 0;
	int evenTotal = 0;
	int oddTotal = 0;
	
	//asking for input from the user
	printf("Enter a positive integer: ");
	scanf("%d",&integer);
		
		while(integer!=0){	
			if(integer<0){
				//making sure user's input is a valid value
				printf("That's a negative number!\n");
			}	else {
					//classifying between odd and even numbers plus counting each of them
					if(integer%2==0){
						evenTotal+=integer;
						evenCount++;
					}	else{
							oddTotal+=integer;
							oddCount++;
						}
				}
			printf("Enter a positive integer: ");
			scanf("%d", &integer);
		}
		//printing message to user with average and total number of even and odd numbers.
			if(integer == 0)
				printf("%d even numbers were entered and the average is %lf\n",evenCount,(double)evenTotal / evenCount);
				printf("%d odd numbers were entered and the average is %lf\n", oddCount, (double)oddTotal / oddCount);	
		
}

void drawShape()
{
	int total;
	
		do 
		{	
			//asking for input from the user
			printf("How many rows would you like the shape to have?: ");
			scanf("%d",&total);
			
			if(total<=0)
			{
				//making sure user inputs a correct value
				printf("Invalid Input. Please try again.\n");
			}
			else
			{
			//nested for loops to create columns and rows
				for (int rows = 1; rows <= total; rows++)
				{
					for (int columns = 1; columns <= total; columns++)
					{
						if (columns == 1 || columns == total || rows == 1 || rows == total || rows == columns)
						{
							printf ("*"); 
						}
						else
						{
							printf (" ");
						}
					}
					printf("\n");
				}
			}
			
		}while (total <= 0);
	
}	
		

void toyPhone()
{
	//defining all needed variables
	int button;
	int loop = 1;
	
	printf("Welcome to the Toy Phone!\n");

	//created a while loop to repeat until input is 6 so loop ends.
	while(loop)
	{	
		printf("Enter a button: ");
		scanf("%d",&button);
		
		if (button < 1 || button > 6)
		{
		printf("Invalid option.\n");
		}
		else if (button == 1)
		{
			printf("Hello!\n");

		}else if (button == 2)
		{
			printf("Loopy Loops!\n");

		}else if (button == 3)
		{
			printf("Programming is fun!\n");
			
		}else if (button == 4)
		{
			printf("Semicolons can be a pain to forget!\n");
		}else if (button == 5)
		{
			printf("Are you ready for pointers?\n");

		}else
		{
			printf("Goodbye!\n");
			loop = 0;

		}
	}
}

void costPreview(int years, int rate)
{
	shellFunctionProblem4();
	
}