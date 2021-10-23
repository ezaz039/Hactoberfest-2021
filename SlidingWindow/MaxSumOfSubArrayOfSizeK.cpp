#include <iostream>
using namespace std;
int maxSum(int arr[], int n, int k)
{
	if (n < k) {
		cout << "Invalid";
		return -1;
	}
	int max_sum = 0;
	for (int i = 0; i < k; i++)
		max_sum += arr[i]; //finding sum of first k elements
	int window_sum = max_sum;
	for (int i = k; i < n; i++) {
		window_sum += arr[i] - arr[i - k]; //calculating sum of each window. Removing first element of last window and adding a new element.
		max_sum = max(max_sum, window_sum); //comparing sum for each window
	}
	return max_sum;
}
int main()
{
	int arr[] = { 1, 4, 2, 10, 2, 3, 1, 20,30};
	int k = 4;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxSum(arr, n, k);
	return 0;
}
