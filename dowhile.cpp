#include <iostream>//preprocessor command
using namespace std;
int main()
{
	int rows, i = 0;
	cout << "Enter the rows:";
	cin >> rows;
	do
	{
		cout << i << endl;
		i++;
	}
		while (i < rows);
	return 0;
}
