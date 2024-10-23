//Mariana Guerrero
//Dr. Steinberg
//COP3223 Section 001
//Small Program 2

#include <stdio.h>
#include <math.h>

//Defining all functions
double calcHypotenuse (double a, double b);
void rentalPrices(); 
void timeDisplay(int seconds); 
double mathFunction(int n); 

int main()
{
	//Problem 1 on main function
	double a, b, x;
	
	printf("Enter the value for a: ");
	scanf("%lf",&a);
	printf("Enter the value for b: ");
	scanf("%lf",&b);
	
	x = calcHypotenuse (a, b);
	printf("If a = %.3lf and b = %.3lf, then that means the hypotenuse is %.3lf.\n", a, b, x);
	
	//Problem 2 on main function
	rentalPrices();
	
	//Problem 3 on main function
	int seconds;
	printf("Enter the seconds: ");
	scanf("%d",&seconds);
	
	timeDisplay(seconds);

	//Problem 4 on main function
	int n;
	double total;
	
	printf("Enter the value for n: ");
	scanf ("%d",&n);
	
	total = mathFunction(n);
	printf("The function computes the value %.3lf.", total);
	
	return 0;
}
//function definition: problem 1
double calcHypotenuse (double a, double b)
{
	double hypotenuse = sqrt(a*a+b*b); //Calculating hypotenuse
	return hypotenuse;
}

//function definition: problem 2
void rentalPrices()
{
	int days;
	double tesla, chevrolet, nissan;
	
 	printf("Hello Luis!\n");
	printf("Thank you for considering Hertz for your car rental needs.\n");
	printf("You have asked to compare prices for three vehicles.\n");
	printf("Please enter the number of days you plan to rent the vehicle: ");
	scanf("%d",&days); //asking for input
	printf("Here are the prices excluding tax.\n");
	
	//calculating total prices of car per day.
	tesla = 46.48 * days;
	chevrolet = 49.53 * days;
	nissan = 50.72 * days;
	
	//printing output for each car and pricing
	printf("Tesla Model 3 Standard Range: $%.2lf\n", tesla);
	printf("Chevrolet Malibu: $%.2lf\n", chevrolet);
	printf("Nissan Rogue: $%.2lf\n", nissan);
	
	//does not return any value

}

//function definition for problem 3
void timeDisplay(int seconds)
{
	int mins, hours, remainingSeconds;
	
	//calculating hours, minutes and remaining seconds
	hours = seconds / 3600;
	mins = (seconds % 3600) / 60;
	remainingSeconds = seconds % 60;
	
	printf("%d seconds is %d hours, %d minutes, and %d seconds.\n", seconds, hours, mins, remainingSeconds);
}
//function definition for problem 4
double mathFunction(int n)
{
	//calculating the function f(n)
	double total = (pow(n,n)-pow(2,n))/((sqrt(n)*pow(n,4))/(exp(n-2)+ 9)) - 8 * n;
	return total; 

}