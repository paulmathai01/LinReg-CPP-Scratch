#include "pch.h"
#include "Lin_reg.h"

#include <iostream>
#include <fstream>



void Lin_reg::slope()
{
	//this fucntion calculates the sum values and the regression contants
	for (int i = 0; i < n; i++)
	{
		sumX += X_var[i];
		sumY += Y_var[i];
		sumXY += X_var[i] * Y_var[i];
		sumX2 += X_var[i] * X_var[i];
	}
	//m and b are calculated for y = b+m*x form

	m = ((n * sumXY) - (sumX * sumY)) / ((n * sumX2) - sumX);
	b = ((sumX2 * sumY) - (sumX * sumXY)) / ((n * sumX2) - sumX);

	//Y = b + m*X
	//predicted y values are genarated
	for (int i = 0; i < n; i++)
	{
		Y_fit[i] = b + (m * X_var[i]);
	}
}
//accessor function for m
double Lin_reg::getm()
{
	return m;
}
//accessor function for b
double Lin_reg::getb()
{
	return b;
}

void Lin_reg::openfile(string file_path)
{
	//function opens the file and reads the values into the arrays
	cout << "Enter the File Path:";
	cin >> file_path;
	cout << endl;

	Infile.open(file_path);
	for (int i = 0; i < n; i++)
	{
		Infile >> X_var[i];
		Infile >> Y_var[i];
	}

}
//function to set n by passing a value
void Lin_reg::setn(int n)
{
	this->n = n;
}
//commented out the console testing main function
/*
int main()
{
	Lin_reg lr_obj;

	lr_obj.openfile("C:\\CSC5050\\Lin_reg\\Text.txt");
	if (lr_obj.Infile.is_open())
	{
		cout << "File Opened Successfully" << endl;

	}
	else
	{
		cout << "Failed to Open" << endl;
		return(0);
	}
	lr_obj.setn();
	lr_obj.slope();
	cout << "\r\nSlope =  " << lr_obj.getm();
	cout << "\r\nIntercept =  " << lr_obj.getb();

}
*/