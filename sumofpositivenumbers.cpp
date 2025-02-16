/*a program that sums all positive numbers
 and stops when a 0 or -ve number is input*/
#include <iostream>
using namespace std;
int main()
{
	int i=1;
	int sum = 0;
	do
	{
		cout << "Write a positive number(or zero/negative to stop):";
		cin >> i;//read the input
		if(i > 0)//to ensure input of a positive number
			sum += i;

	}
	while(i > 0);
	cout << sum;
	return 0;
}
