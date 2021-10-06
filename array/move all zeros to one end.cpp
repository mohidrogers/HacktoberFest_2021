#include <iostream>
using namespace std;
void push(int arr[], int n)
{
	int count = 0; 
	for (int i = 0; i < n; i++)
		if (arr[i] != 0)
			arr[count++] = arr[i]; 
	while (count < n)
		arr[count++] = 0;
}
int main()
{
	int arr[] = {1,0,1,1,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	push(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}
