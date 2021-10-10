The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days.
The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.






class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        vector<int> ans;
       stack<int> s;
       s.push(0);
       ans.push_back(1);
       for(int i=1;i<n;i++)
       {
           while(!s.empty() && price[s.top()]<=price[i])
           {
               s.pop();
           }
           if(s.empty())
           ans.push_back(i+1);
           else
           ans.push_back(i-s.top());

           s.push(i);

       }
       return ans;
    }

};
