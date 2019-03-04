//Dominique Shepherd
//CMPS I - Dr.Halverson
//Lab #7 While Loops
//3/4/19
//This program will show the inital salary for the first year then calculate
//the new salary as it adds 10 % each year, The when it reaches 50000 it will
//display a message showing how long it took the person to reach the amount.

#include<iostream>
#include<fstream>
#include <iomanip>
using namespace std;


int main()
{
	//Open outputfile 
	ofstream outfile;
	outfile.open("output.txt");
	outfile << "Dominique Shepherd \n\n\n";

	double salary = 20000; // assigns salary to 20000.
	int SalIncrease;
	int year = 1;
	cout << fixed << setprecision(2);// set to 2 decimal places.
	int count = 1;
	cout << "Year" << setw(13) << "Salary" << '\n';
	cout << "-------------------" << '\n';
	cout << setw(2) << year << setw(10) << "$" << setw(9) 
		    << salary << '\n';
	while (salary <= 50000)// loop stops when salary is or over 50000.
	{
		SalIncrease = salary *.10;
		year += 1;
		salary = salary + SalIncrease;
		cout << setw(2) << year << setw(10) << "$" 
				<< setw(9) << salary  << '\n';
		
	}
	cout << "It took the user almost 11 years to reach 50000 and over.\n";

	outfile.close(); // close of outfile.
	return 0;
}