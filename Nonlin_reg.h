//required libraries for  file handling
#include "pch.h"
#include <fstream>
#include <iostream>


using namespace std;
class Nonlin_reg
{
private:
	//only these variables could be made private since others are accessed outside the scope of the class
	double sumX = 0, sumY = 0,  sumXY = 0, sumX2 = 0;

public:
	//function declaration and member variable initialisation
	ifstream Infile2;
	double X_var[::size] = { 0 };
	double Y_var[::size] = { 0 };
	double Y_fit[::size] = { 0 };
	int n = ::size;
	double a0 = 0, a1 = 0, a = 0, b = 0;
	void setn(int n);
	//default value is given to avoid problems.
	//it is an absolute value hence you will have to change this based on where the file is, it is given in the project folder.
	void openfile(string file_path = "C:\\CSC5050\\Lin_reg\\Text.txt");
;	void slope();

};

