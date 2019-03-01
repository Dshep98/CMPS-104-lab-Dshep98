//Dominique Shepherd
//CMPS I - Dr.Halverson
//Lab #6 Switch Statements
//3/1/19
//This program will demostrate the use of input selction to output through switch statments.
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	//Open outputfile 
	ofstream outfile;
	outfile.open("output.txt");
	outfile << "Dominique Shepherd \n\n";
	int count = 1;
	while (count <= 5) // the while loop will run at least 5 times. 
	{
		int selection; // indicates all numbers entered are integers
		cout << "Which formula do you want to see?\n";
		cout << "1. Area of a circle\n";
		cout << "2. Area of a rectangle\n";
		cout << "3. Volume of a cylinder\n";
		cout << "4. None of them!\n";
		cin >> selection;
		switch (selection) 
		{
		case 1:
			cout << "Pi times radius squared\n";
			break;
		case 2:
			cout << "Length times width\n";
			break;
		case 3:
			cout << "Pi times radius squared times height\n";
			break;
		case 4:
			cout << "Well okay then...Goodbye!\n";
			break;
		default:
			cout << "Not good with numbers, eh?\n";
			break;
		}
		count += 1;
	}
	outfile.close(); // close of outfile
	return 0;
}