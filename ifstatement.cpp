#include <iostream>//preprocessor command
using namespace std;
int main()
{
	int age;
	cout << "Enter the age:\n";
	cin >> age;
	if (age <=5)
	{
		cout << "Toddler" << endl;
	}
	else if(age<=12)
	{
	cout 	<<"Kids"<<endl;	
	}
	else if(age<=18)
	{
		cout<<"Teens"<<endl;
	}
		else
		{
			cout<<"Adults"<<endl;
		}
	return 0;
}
