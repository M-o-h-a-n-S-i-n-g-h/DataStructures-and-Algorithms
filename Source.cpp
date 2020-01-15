#include<iostream>
using namespace std;
const int  rows = 2;
const int  cols = 3;

int main()
{
	int arr[2][3], arr2[2][3], res[2][3];
	cout << "Enter the elements1 " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> arr[i][j];
		cout << "\n";
	}
	cout << "Enter the elements2 " << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
			cin >> arr2[i][j] ;
		cout << "\n";
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++)
			 res[i][j] = arr[i][j] + arr2[i][j];
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}


