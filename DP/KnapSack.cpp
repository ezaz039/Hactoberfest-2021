//Knapsack
#include <iostream>
using namespace std;
int c = 0;
int max(int a, int b)
{
 c = c + 2;
 if (a > b)
 return a;
 else
 return b;
}
int main()
{
 int n, i, w, W;
 cout << "Enter number of items and total capacity ";
 cin >> n >> W;
 int K[n + 1][W + 1];
 cout << "Enter profit of each item \n";
 int val[n], wt[n];
 for (int i = 0; i < n; i++)
 cin >> val[i];
 cout << "Enter weight of each item \n";
 for (int i = 0; i < n; i++)
 cin >> wt[i];
 for (i = 0; i <= n; i++)
 {
 c++;
 for (w = 0; w <= W; w++)
 {
 c++;
 if (i == 0 || w == 0)
 {
 c++;
 K[i][w] = 0;
 }
 else if (wt[i - 1] <= w)
 {
 c++;
 K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w
]);
 }
 else
 {
 c++;
 K[i][w] = K[i - 1][w];
 }
 }
 }
 for (int i = 0; i <= n; i++)
 {
 for (int j = 0; j <= W; j++)
 cout << K[i][j] << " ";
 cout << "\n";
 }
 cout << "Max profit is " << K[n][W] << endl;
 cout << "Step count: " << c << endl;
 return 0;
}
