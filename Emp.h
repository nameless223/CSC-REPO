#pragma once
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class EmployData
{
public:
	struct employ
	{
		string name;
		int age;
		string dob;
	};

	vector <employ> dataset;

	EmployData()
	{
		dataset =
		{
			{"Adam", 23, "02/21"},
			{"Joe", 22, "06/10"},
			{"Tom", 34, "05/09"},
			{"John", 44, "07/02"},
			{"Lee", 19, "09/13"},
			{"Sally", 40, "09/06"},
		};


	};

	static bool gtlComp(employ a, employ b)
	{
		return a.age < b.age;
	}
	static bool ltgComp(employ a, employ b)
	{
		return a.age > b.age;
	}

	void gtlSort()
	{
		sort(dataset.begin(), dataset.end(), gtlComp);
	}

	void ltgSort()
	{
		sort(dataset.begin(), dataset.end(), ltgComp);
	}

	void Print()
	{
		for (int i = 0; i < dataset.size(); i++)
		{
			cout << dataset[i].name << " " << dataset[i].age << " " << dataset[i].dob << endl;
		}

	}

	void gtL()
	{
		gtlSort();
		Print();
	}

	void ltG()
	{
		ltgSort();
		Print();
	}

	void serName()
	{
		string names;
		cout << "What name would you like to search for? " << endl;
		cin >> names;
		for (int i = 0; i < dataset.size(); i++)
		{
			if (names == dataset[i].name)
			{
				cout << dataset[i].name << " is " << dataset[i].age << " and has a birthday on " << dataset[i].dob;
			}
		}
	}

	void serAge()
	{
		int age;
		cout << "What Age would you like to search for? " << endl;
		cin >> age;
		for (int i = 0; i < dataset.size(); i++)
		{
			if (age == dataset[i].age)
			{
				cout << dataset[i].name << " is " << dataset[i].age << " and has a birthday on " << dataset[i].dob;
			}
		}
	}

	void serDOB()
	{
		string dob1;
		cout << "What DOB would you like to search for? " << endl;
		cin >> dob1;
		for (int i = 0; i < dataset.size(); i++)
		{
			if (dob1 == dataset[i].dob)
			{
				cout << dataset[i].name << " is " << dataset[i].age << " and has a birthday on " << dataset[i].dob;
			}
		}
	}

	void starter()
	{
		Print();
		cout << "-------------------------------------" << endl;
		cout << "What function would you like to perform? 1.)Search or 2.)Sort  ";
		cin >> choice;

		if (choice == 1)
		{
			cout << "What would you like to search by?\n1.)Name?\n2.)Age?\n3.)BirthDate? " << endl;
			cin >> choice;
			if (choice == 1)
			{
				serName();
			}
			else if (choice == 2)
			{
				serAge();
			}
			else if (choice == 3)
			{
				serDOB();
			}
		}

		else if (choice == 2)
		{
			cout << "Would you like to sort from 1.)GTL or 2.)LTG?  ";
			cin >> choice;
			if (choice == 1)
			{
				gtL();
			}

			else if (choice == 2)
			{
				ltG();
			}
		}
	}

private:
	int choice;

};