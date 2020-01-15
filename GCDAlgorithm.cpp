#include<iostream>
using namespace std;

int gcd(int m, int n) {

	while (n != 0) {
		int reminder = m % n;
		m = n;
		n = reminder;
	}
	return m;
	cout << m << endl;
}
	
int main()
{
	gcd(50,15);
	return 0;
}

