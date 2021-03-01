#include <iostream>
using namespace std;

void biner (int x) {
	
	if (x>1) {
		
		biner (x/2);
	}
	
	cout << x%2;
}

void octal (int x) {
	
	if (x>1) {
		
		octal (x/8);
	}
	
	cout << x%8;
}

void heksa (int x) {
	
	if (x>1) {
		
		heksa (x/16);
	}
	
	cout << x%16;
}

int main()
{
	
	int x;
	cout << "Masukkan Angka Desimal : ";
	cin >> x;
	
	cout << "\nDalam Biner : ";
	biner (x);
	
	cout << "\nDalam Octal : ";
	octal (x);
	
	cout << "\nDalam Heksa : ";
	octal (x);
	cout << endl ;
	
	return 0;
}
