#include <iostream>//preprocessor command
using namespace std;
int main()
{
	int rows, k;
	cout << "Enter the rows:";
	cin >> rows;
	for(k = 0; k < rows; k++)
	{
		if (k == 4)continue;
		cout << k << endl;
	}

	return 0;
}
//in a while loop continue is placed after the update but before the body