#pragma once
#include <iostream>
#include <cmath>

using namespace std;

namespace UnnecessaryNamespace
{
	void Bye()
	{
		cout << "Thank you";
	}
}

class complex			//THE MOST READABLE CODE
{
public:
	//int* a, b, c, d, cho;
	int a;
	int* a1 = &a;
	int b;
	int* b1 = &b;
	int c;
	int* c1 = &c;
	int d;
	int* d1 = &d;
	int cho;
	int* cho1 = &cho;

	char choice;



	
	void prompt()
	{

		do
		{
			pstart();

		start:
			cout << "Enter the number of the operation you would like to perform: \n1.)Addition...\n2.)Subtraction\n3.)Mutliplication\n4.)Division" << endl;

			cin >> *cho1;
			if (*cho1 == 1)
			{
				add(a1, b1, c1, d1);
				run();

			}
			else if (*cho1 == 2)
			{
				sub(a1, b1, c1, d1);
				run();
			}
			else if (*cho1 == 3)
			{
				mult(a1, b1, c1, d1);
				run();
			}
			else if (*cho1 == 4)
			{
				div(a1, b1, c1, d1);
				run();
			}
			else
			{
				cout << "invalid input" << endl;
				goto start;
			}
		} while (toupper(choice) == 'Y');


	}
	void add(int* a1, int* b1, int* c1, int* d1)
	{
		int sumr = (*a1 + *b1);
		int sumi = (*c1 + *d1);
		cout << sumr << " + " << sumi << "i " << endl;

	}
	void sub(int* a1, int* b1, int* c1, int* d1)
	{
		int diffr = (*a1 - *b1);
		int diffi = (*c1 - *d1);
		cout << diffr << " - " << diffi << "i " << endl;
	}
	void mult(int* a1, int* b1, int* c1, int* d1)
	{
		int prodr = (*a1 * *b1 - *c1 * *d1);
		int prodi = (*a1 * *d1 - *b1 * *c1);
		cout << prodr << " * " << prodi << "i " << endl;
	}
	void div(int* a1, int* b1, int* c1, int* d1)
	{
		int denom = pow(*b1, 2) + pow(*d1, 2);
		int quotr = (*a1 * *b1 + *c1 * *d1) / (denom);
		int quoti = (*a1 * -*d1 + *c1 * *b1) / (denom);
		cout << quotr << " / " << quoti << "i " << endl;
	}
	void run()
	{
		cout << "Would you like to run again? Y or N";
		cin >> choice;
	}
	void pstart()
	{
	start:
		cout << "Enter your first and second real number: " << endl;
		cin >> *a1 >> *b1;

		cout << "Enter your first and second imaginary number: " << endl;
		cin >> *c1 >> *d1;
	}
};