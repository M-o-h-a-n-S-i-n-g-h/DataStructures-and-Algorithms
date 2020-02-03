#include <iostream>

using namespace std;

int towerofHanoi(int n, char source, char destination, char auxillary) {
	int count = 0;
	if (n == 1) {
		cout << "Moved the ring from " << source << " to " << destination << endl;
	}
	else
	{
		towerofHanoi(n - 1, source, destination, auxillary);
		cout << "Move the ring from " << source << " to " << destination << endl;
		towerofHanoi(n - 1, destination, auxillary, source);
		count++;
	}
	return 0;
	cout << count << endl;
}


int main() {
	
	int rings;
	//cout << "This is the tower of hanoi problem";
	cout << "Enter the number of rings" << endl;
	cin >>rings;
	towerofHanoi(rings, 'S', 'D', 'A');
	return 0;
}