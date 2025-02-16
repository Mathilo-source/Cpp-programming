#include <iostream>//preprocessor command
using namespace std;
int main()
{
	int rows, cols, i = 0;
	cout << "Enter the rows:";
	cin >> rows;
	cout << "Enter the cols:";
	cin >> cols;
	while (i <= rows)
	{
		int	k = 1;
		while(k <= cols-i)
		{
			cout << k << " ";
			k++;
		}
		cout << endl;
		i++;

	}

	return 0;
}
