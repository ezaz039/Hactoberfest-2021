// C++ program to demonstrate searching
// in parent and printing result
// in child processes using fork()
#include <iostream>
#include <unistd.h>
using namespace std;

// Driver code
int main()
{

	int key = 10;
	int id = fork();

	// Checking value of process id returned by fork
	if (id > 0) {

		cout << "Parent process \n";

		int a[] = { 3, 8, 4, 10, 80 };
		int n = 5;
		int flag;
		int i;

		for (i = 0; i < n; i++)
		{

			if (a[i] != key) {
				flag = 0;
			}

			else {

				flag = 1;
			}
		}

		if (flag == 1) {

			cout << "key is not present in array";
		}

		else {

			cout << "key is present in array";
			cout << "\n";

		}
	}

	// If n is 0 i.e. we are in child process
	else {

		cout << "Child process \n";
		cout << "numbers to be search is ";
		cout << key;
	}

	return 0;
}
