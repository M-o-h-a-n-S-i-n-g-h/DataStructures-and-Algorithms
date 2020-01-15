#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void BubbleSort(int arr[], int size)
{
	int i, j;
	

	for (i = 0; i < size; i++)
	{	
		
		for (j = 0; j < size - i - 1; j++) {
			if (arr[j]<arr[j+1])
			{ 
				swap(&arr[j], &arr[j + 1]);
				
			}//Arranging in ascending order
		}
		
	}
}

void printarr(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << endl;
	}
}

int main()
{
	int arr[] = { 5,1,4,2,6 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr , size);
	printarr(arr, size);
	return 0;
}