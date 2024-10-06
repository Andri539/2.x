#include <iostream>

using namespace std;
int main()

{
	double m; 
	double z1; 
	double z2; 
	cout << "m = "; cin >> m;
	double z1 = sqrt(int(3 * m + 2) ^ (int)2 - 24 * m) / (3 * sqrt(m) - 2 / sqrt(m));
	double z2 = sqrt(m);
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
