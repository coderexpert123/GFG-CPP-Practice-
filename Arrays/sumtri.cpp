// C++ program to print sum triangle for a given array
#include <bits/stdc++.h>
using namespace std;

// prints sum triangle for arr[0..n-1]
void printTriangle(int arr[], int n)
{
	// Initialize a 2D array to store triangle
	int tri[n][n];
	memset(tri, 0, sizeof(tri));

	// Initialize last row of triangle
	for (int i = 0; i < n ; i++)
		tri[n-1][i] = arr[i];

	// Fill other rows
	for (int i = n-2; i >=0; i--)
	for (int j = 0; j <= i; j++)
		tri[i][j] = tri[i+1][j] + tri[i+1][j+1];

	// Print the triangle
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i ; j++)
			cout << tri[i][j]<<" ";
		cout << endl;
	}
}

// Driver Program
int main()
{
	int arr[] = {4, 7, 3, 6, 7};
	int n = sizeof(arr)/sizeof(arr[0]);
	printTriangle(arr, n);
	return 0;
}
