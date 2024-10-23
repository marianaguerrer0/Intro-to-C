//Mariana Guerrero
//Dr. Steinberg
//COP3223 Section 001
//Small Program 1
 
#include <stdio.h>
#include <math.h>

int main()
{
    //problem 1 beings...

	
	//Added spaces to align the Xs.
	
	printf("XX      XX\n");
	printf(" XX    XX\n");
	printf("  XX  XX\n");
	printf("   XXXX\n");
	printf("  XX  XX\n");
	printf(" XX    XX\n");
	printf("XX      XX\n");
	
	//problem 1 ends...
	
	printf("********************************************\n");

    //problem 2 begins...

    //Declaring variables
	int c1;
	int c2;
	int c3;
	int c4;
	int c5;
	
	printf("Enter the amount of eggs laid for each of the 5 chickens.\n");
	printf("Chicken 1: ");
	scanf("%d", &c1); //asked for input for every chicken
	
	printf("Chicken 2: ");
	scanf("%d", &c2);
	
	printf("Chicken 3: ");
	scanf("%d", &c3);

	printf("Chicken 4: ");
	scanf("%d", &c4);

	printf("Chicken 5: ");
	scanf("%d", &c5);
	
	int total = c1 + c2 + c3 + c4 + c5; //adding all 5 inputs
	int dozen = total / 12; //calculating total of dozens
	int remaining = total - (12 * dozen); //calculating remaining eggs
	
	printf("There are %d dozen(s) and %d egg(s) total.\n", dozen, remaining);
    //problem 2 ends...
	
	printf("********************************************\n");

    //problem 3 begins...
	
	printf("Let's calculate the distance traveled for some motor vehicle.\n");
	printf("I will need some information to collect from you.\n");
	
    //Declaring variables
	double v;
	double t;
	double a;
	
	printf("Enter the initial velocity: ");
	scanf("%lf",&v); //asked input for every unit
	
	printf("Enter the time: ");
	scanf("%lf",&t);
	
	printf("Enter the acceleration: ");
	scanf("%lf",&a);
	
	//formula for calculating distance
	double distance = v * t + (1.0/2.0) * a * pow(t,2); 
	 
	printf("The distance traveled for the motor vehicle was %.3lf meters.\n",distance);
    //used %.3lf to display 3 decimal places
    
    //problem 3 ends...
	
	printf("********************************************\n");

    //problem 4 begins...
    
    //Declaring variables
	double r;
	double b1;
	double h1;
	double b2;
	double h2;
	double b3;
	double h3;
	double l;
	double bt1;
	double ht1;
	double bt2;
	double ht2;
	double bt3;
	double ht3;
	
	printf("Let's calculate the area of the 2D train.\n");
	printf("Let's start with the 5 circles.\n");
	printf("Enter the radius: ");
	scanf("%lf",&r);
	
	double area1 = 3.14159 * pow(r,2); //Calculating areas of the circle.
	
	printf("Now let's get the info on the three rectangles.\n");
	printf("Let's start with the rectangle with no window.\n");
	
	printf("Enter the base: ");
	scanf("%lf",&b1);
	
	printf("Enter the height: ");
	scanf("%lf",&h1);
	
	double area2 = b1 * h1; //Calculating area of rectangle 1
	
	printf("Let's now get the other rectangle with no window.\n");
	
	printf("Enter the base: ");
	scanf("%lf",&b2);

	printf("Enter the height: ");
	scanf("%lf",&h2);

	double area3 = b2 * h2; //Calculating area of rectangle 2

	printf("Let's now get the last rectangle with the opening space.\n");
	
	printf("Enter the base: ");
	scanf("%lf",&b3);

	printf("Enter the height: ");
	scanf("%lf",&h3);

	printf("Enter the length of the window: ");
	scanf("%lf",&l);
	
	double area4 = b3 * h3 - (l * l); //Calculating area of rectangle 3 minus window

	printf("Now let's get the info on the three triangles.\n");
	printf("Enter the base for triangle 1: ");
	scanf("%lf",&bt1);
	
	printf("Enter the height for triangle 1: ");
	scanf("%lf",&ht1);
	
	double area5 = (bt1 * ht1)/2; //Calculating area of triangle 1
	
	printf("Enter the base for triangle 2: ");
	scanf("%lf",&bt2);
	
	printf("Enter the height for triangle 2: ");
	scanf("%lf",&ht2);
		
	double area6 = (bt2 * ht2)/2;  //Calculating area of triangle 2

	printf("Enter the base for triangle 3: ");
	scanf("%lf",&bt3);
	
	printf("Enter the height for triangle 3: ");
	scanf("%lf",&ht3);
	
	double area7 = (bt3 * ht3)/2;  //Calculating area of triangle 3

	//adding all areas plus multipling the circle area times 5
	double total_area = ( 5 * area1) + area2 + area3 + area4 + area5 + area6 + area7;
	//output of total of all areas with %.5lf for 5 decimal places 
	printf("The area of the 2D train is %.5lf units.\n", total_area);
	
    //problem 4 ends...

    return 0;
}