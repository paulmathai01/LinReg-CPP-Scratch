//required libraries for  file handling
#include "pch.h"
#include <fstream>
#include <iostream>

using namespace std;


class Lin_reg
{
private:
	//similarly these were the only ones that could  be made private
	double sumX = 0, sumY = 0,sumXY = 0, sumX2 = 0;
	double m, b;

public:
	int n = ::size;

	double X_var[::size];
	double Y_var[::size];
	double Y_fit[::size];
	ifstream Infile;
	//accessors and mutators for the slope and intercept
	double getm();
	double getb();
	void setn(int n);
	void slope();
	//default value is given to avoid problems.
	//it is an absolute value hence you will have to change this based on where the file is, it is given in the project folder.
	void openfile(string file_path = "C:\\CSC5050\\Lin_reg\\Text.txt");

};


