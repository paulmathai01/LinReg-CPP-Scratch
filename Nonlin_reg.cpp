#include "pch.h"
#include "Nonlin_reg.h"
//function to set n by passing a value
void Nonlin_reg::setn(int n)
{
	this->n = n;
	//one example of the use of this pointer
}
void Nonlin_reg::openfile(string file_path)
{
	//function opens the file and reads the values into the arrays
	Infile2.open(file_path);
	for (int i = 0; i < n; i++)
	{
		Infile2 >> X_var[i];
		Infile2 >> Y_var[i];
	}
}

void Nonlin_reg::slope()
{
	//this fucntion calculates the sum values and the regression contants
	for (int i = 0; i < n; i++)
	{
		sumX += X_var[i];
		sumY += Y_var[i];
		sumXY += X_var[i] * Y_var[i];
		sumX2 += X_var[i] * X_var[i];
	}
	//a1 and a0 are converted to exponential form to a and b
	// y = a*e^(bx)
	a1 = ((n * sumXY) - (sumX * sumY)) / ((n * sumX2) - sumX);
	a0 = ((sumX2 * sumY) - (sumX * sumXY)) / ((n * sumX2) - sumX);
	// e is taken as 2.71828
	a = pow(2.71828, a0);
	b = a1;

	for (int i = 0; i < n; i++)
	{
		//genarating the predicted y points
		Y_fit[i] = a * pow(2.71828, b * X_var[i]);
	}

}