//Mariana Guerrero
//Dr. Steinberg
//COP3223 Section 001
//Small Program 3

#include <stdio.h>
#include <math.h>

//function prototypes for shell functions
void problem1();
void problem2();
void problem3();
void problem4();

//function prototypes for small program functions
int creditCheck(double amount);
void universityAdmission(double gpa, int score);
void keyPad();
double carpenter();

int main(int argc, char* argv[])
{
	/* 
	   DO NOT CHANGE ANYTHING OR ADD 
	   ANYTHING INTO THE MAIN FUNCTION!
	*/
	switch(*argv[1])
	{
		case '1':
		
			problem1();
			break;
			
		case '2':
		
			problem2();
			break;
			
		case '3':
		
			problem3();
			break;
			
		case '4':
		
			problem4();
			break;
		
		default:
			printf("ERROR!\n");
	}
		
    return 0;
}

//Problem 1
void problem1()
{
	double amount;
	printf("Enter the price: ");
	scanf("%lf",&amount); //asks for input: amount.
	
	if (amount<0)
		printf("Error!\n");
	else if(amount<=9000.00)
		printf("Approved!\n");
	else if (amount>9000.00)
		printf("Not Approved!\n");
	
}

//Problem 2
void problem2()
{
	double gpa;
	int score;
	
	printf("Welcome to the University Admission System!\n");
	printf("Enter the GPA: ");
	scanf("%lf",&gpa); //asks for input: gpa
	printf("Enter the test score: ");
	scanf("%d",&score); //asks for input: score
	
	/*different conditions regarding gpa and score
	We can check if student admission is approved or not*/
	if (gpa>=3.00 && score>=60){
		printf("Admissions is Approved!\n");
		if (gpa>=3.50 && score >=80){
			printf("Consider for Scholarship Award!\n");//verifying if considered for scholarship.
		}
	} 
	else if (gpa>=2.00 && gpa<3.00 && score >=70){
		printf("Admissions is Approved!\n");
	}
	else if(gpa<0 || gpa>5 || score<0){
		printf("Invalid Input!\n");
	}
	else{ 
		printf("Admissions is Denied!\n");
	}

}
//Problem 3
void problem3()
{
	int option;
	
	printf("Welcome to the Crazy Keypad!\n");
	printf("Select one of the following options for a message.\n");
	printf("Option 1\n");
	printf("Option 2\n");
	printf("Option 3\n");
	printf("Option 4\n");
	printf("Option 5\n");
	printf("Option Selected: ");
	scanf("%d",&option);
	
	//if/else statement to print correct number that was input.
	if (option==1)
		printf("Opening Vault 712...\n");
	else if (option==2)
		printf("Opening Secret Elevator...\n");
	else if (option==3)
		printf("Calling the Boss...\n");
	else if (option==4)
		printf("Backup on the way...\n");
	else if (option==5)
		printf("Alarm activated...\n");
	else
		printf("System Locked...\n");

}
//Problem 4
void problem4()
{
//defining variables type double, char and int.
	double total=30;
	char oak, letters;
	int characters;
	
	printf("Welcome to Bruce's Carpentry Services!\n");
	printf("Would you like the sign made out of oak?\n");//first add up asked
	printf("Enter y for yes or n for no: ");
	scanf(" %c",&oak);
	
	if (oak=='Y'||oak=='y'){
		total = total + 15;
	}
	else if (oak!='n' && oak!='N'){
		printf("Could not compute cost...\n");{
			return;
			}
	}
		
	printf("Enter the number of characters on the sign: ");//second add up asked
	scanf("%d",&characters);
	
	if (characters < 0) {
        printf("Could not compute cost...\n");
        return; 
    } else if (characters > 5) {
        total += (characters - 5) * 2;
    }
		
	printf("Would you like gold-leaf lettering?\n");//third add up asked
	printf("Enter y for yes or n for no: ");
	scanf(" %c",&letters);
	
	if (letters=='y'||letters=='Y'){
		total = total + 15;
	}else if (letters!='n'&& letters!='N'){
		printf("Could not compute cost...\n");{
			return;
		}
	}
	
	printf("Bruce will charge $%.2lf.\n", total);//output: total with all or no add ups
	
}

int creditCheck(double amount)
{
	problem1();
	return amount;
}

void universityAdmission(double gpa, int score)
{
	problem2();
}
void keyPad()
{
	problem3();
}

double carpenter()
{		
	problem4();
	return 0.0;
}