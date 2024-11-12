#include <iostream>
#include <string>
#include <algorithm>

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

	employ employees[6] =
	{
		{"Adam\t", 23, "\tFebruary 21"},
		{"Joe\t", 22, "\tJuly 10"},
		{"Tom\t", 34, "\tJune 9"},
		{"John\t", 44, "\tAugust 2"},
		{"Lee\t", 19, "\tMay 13"},
		{"Sally\t", 40, "\tSeptember 6"},
	};

};



int main()
{
	EmployData f1;
	int choice;
	cout << "Would you like to sort the data?" << endl;
	cin >> choice;
	
	
	sort(begin(f1.employees), end(f1.employees));
	
	cout << f1.employees;
		
	
	
}