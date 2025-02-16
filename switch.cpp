#include <iostream>//preprocessor command
using namespace std;
int main()
{
	int rating;
	cout << "Enter the rating:\n";
	cin >> rating;
	switch (rating)
	{
	case 1:
		cout << "Poor\n";
		break;
	case 2:
		cout << "Below Average\n";
		break;
	case 3:
		cout << "Average\n";
		break;
	case 4:
		cout << "Good\n";
		break;
	case 5:
		cout << "Excellent\n";
		break;
	default:
		cout << "Invalid\n";
	}
	return 0;
}
