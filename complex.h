#pragma once
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class complex			//THE MOST READABLE CODE
{
public:
	float a, b, c, d;
	int cho;
	//int input;
	char choice;
	void prompt()
	{

		do
		{
			pstart();

		start:
			cout << "Enter the number of the operation you would like to perform: \n1.)Addition...\n2.)Subtraction\n3.)Mutliplication\n4.)Division" << endl;
			cin >> cho;
			
			
			if (cho == 1)
			{
				add(a, b, c, d);
				run();
			}
			else
			{
				cout << "Invalid Input" << endl;
				goto start;
			}
	
			if (cho == 2)
			{
				sub(a, b, c, d);
				run();
			}
			else 
			{
				cout << "Invalid Input" << endl;
				goto start;
			}

			if (cho == 3)
			{
				mult(a, b, c, d);
				run();
			}
			else
			{
				cout << "Invalid Input" << endl;
				goto start;
			}

			if (cho == 4)
			{
				div(a, b, c, d);
				run();
			}
			else
			{
				cout << "invalid input" << endl;
				goto start;
			}
		} while (toupper(choice) == 'Y');


	}
	void pstart()
	{
	start:
		cout << "Enter your first and second real number: " << endl;
		cin >> a >> b;

		cout << "Enter your first and second imaginary number: " << endl;
		cin >> c >> d;
	}
	void add(float a, float b, float c, float d)
	{
		float sumr = (a + b);
		float sumi = (c + d);
		cout << sumr << " + " << sumi << "i " << endl;

	}
	void sub(float a, float b, float c, float d)
	{
		float diffr = (a - b);
		float diffi = (c - d);
		cout << diffr << " - " << diffi << "i " << endl;
	}
	void mult(float a, float b, float c, float d)
	{
		float prodr = (a * b - c * d);
		float prodi = (a * d - b * c);
		cout << prodr << " * " << prodi << "i " << endl;
	}
	void div(float a, float b, float c, float d)
	{
		float denom = pow(b, 2) + pow(d, 2);
		float quotr = (a * b + c * d) / (denom);
		float quoti = (a * -d + c * b) / (denom);
		cout << quotr << " / " << quoti << "i " << endl;
	}
	void run()
	{
		cout << "Would you like to run again? Y or N";
		cin >> choice;
	}
	
};