#include <iostream>
using namespace std;

int main ()
{
	cout << "Masukkan Kalimat : ";
	string a;
	getline (cin, a);
	for (int i=a.length (); i>=0; i--){
		cout << a.substr (i, 1);
	}
	return 0;
	
}
