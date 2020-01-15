#include<iostream>

using namespace std;

template<class x>

void swap(x a, x b)
{
	x temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Swapped numbers" << a << " and " << b << endl;

}

int main()
{
	int a, b;
	float c, d;
	swap(50, 15);
	swap(25.50, 55.60);
	swap('a', 'b');
	swap(2000000, 5000000);
	return 0;
}