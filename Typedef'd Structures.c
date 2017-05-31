// Data Structures and Algorithm Development - C
#include<stdio.h>
#include <conio.h>
#include <string.h>

//Typedef'd strucutre Fraction
typedef struct Fraction{
	int num;
	int denom;
}Fraction;

//Function for the addition of the two fractions
Fraction addFraction(Fraction a, Fraction b)
{
	Fraction fra;
	fra.num = (b.denom * a.num ) + (a.denom * b.num);
	fra.denom = (a.denom * b.denom);
	return fra;
}

//Function for the subtraction of the two fractions
Fraction subFraction(Fraction a, Fraction b)
{
	Fraction fra;
	fra.num = (b.denom * a.num ) - (a.denom * b.num);
	fra.denom = (a.denom * b.denom);
	return fra;
}

//Function for the multiplication of the fractions
Fraction mulFraction(Fraction a, Fraction b)
{
	Fraction fra;
	fra.num = (b.num * a.num );
	fra.denom = (a.denom * b.denom);
	return fra;
}

//Function for the divisio of the two fractions
Fraction divFraction(Fraction a, Fraction b)
{
	Fraction fra;
	fra.num = (b.denom * a.num );
	fra.denom = (a.denom * b.num);
	return fra;
}

int main()
{
	//Creating the two fractions objects
	Fraction fra1,fra2,fra;

	//Asking for the user input
	printf("Enter numerator and denominator for the fraction separated by space: ");

	//Scanning the user input for the first fraction and storing the values
	scanf("%d %d",&fra1.num,&fra1.denom);

	//Scanning the user input for the second fraction and storing the values
	printf("Enter numerator and denominator for the fraction separated by space: ");
	scanf("%d %d",&(fra2.num),&(fra2.denom));

	//Printing the two fractions
	printf("\nThe first fraction is : %d / %d \n", fra1.num,fra1.denom);
	printf("The second fraction is : %d / %d \n \n", fra2.num,fra2.denom);

	//Calling the addition function
	fra = addFraction(fra1,fra2) ;
	printf("The Addition of the two fractions results in : %d / %d \n", fra.num , fra.denom);

	//Calling the subtraction function
	fra = subFraction(fra1,fra2) ;
	printf("The Subtraction of the two fractions results in : %d / %d \n", fra.num , fra.denom);

	//Calling the multiplication function
	fra = mulFraction(fra1,fra2) ;
	printf("The Multiplication of the two fractions results in : %d / %d \n", fra.num , fra.denom);

	//Calling the division function
	fra = divFraction(fra1,fra2) ;
	printf("The Division of the two fractions results in : %d / %d \n", fra.num , fra.denom);



	getch();
	return 0;
}
