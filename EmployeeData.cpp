#include <iostream>
#include <string>
#include <algorithm>
#include <vector>


using namespace std;

class EmployData
{
public:
	struct allemploy
	{
		string name;
		int age=;
		string dob=;
	};

	vector <employ> dataset;

	void feeddata() 
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
	void gtL(employ a, employ b)
	{
		gtlComp(a, b);
		gtlSort();
		Print();
	}
private:
	int choice;
};



int main()
{	
	EmployData f1;
	
	f1.gtL();
}