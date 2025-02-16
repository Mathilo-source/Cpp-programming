#include <iostream> 
using namespace std; 
int main () 
{ 
int x = 20;// variable x declaration. 
int *ptr; // creating a pointer  declaring a pointer
 ptr = &x; // unapea io pointer the address of x 
int & r = x;//creating a reference meaning r is another name for x 
 r = 30; 
 cout << "Value of variable x is : " << x << endl; 
 cout << "Address stored in ptr variable is : " << ptr << endl; 
 cout << "Value at the address pointed by ptr is: " << *ptr << endl; 
 cout << "Value at the address referenced by r is: " << r << endl; 
 cout << "Value of x " << x << endl; 
return 0; 
}