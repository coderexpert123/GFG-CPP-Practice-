// Iterative C++ program to
// multiply array elements
#include<bits/stdc++.h>

using namespace std;

// Function to calculate the
// product of the array
int multiply(int array[], int n)
{
	int pro = 1;
	for (int i = 0; i < n; i++)
		pro *=  array[i];
	return pro;
}

// Driver Code
int main()
{
	int array[] = {1, 2, 3, 4, 5, 6};
	int n = sizeof(array) / sizeof(array[0]);
	
	// Function call to calculate product
	cout << multiply(array, n);
	return 0;
}
