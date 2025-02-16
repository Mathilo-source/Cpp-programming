#include <iostream>//preprocessor command
using namespace std;
int main()
{
	int rows, k;
	cout << "Enter the rows:";
	cin >> rows;
	for(k = 0; k < rows; k++)
	{
		cout << k << endl;
		if (k == 4)break;
	}

	return 0;
}
