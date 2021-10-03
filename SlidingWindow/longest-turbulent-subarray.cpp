class Solution {
public:
    int maxTurbulenceSize(vector<int>& a) 
    {
        int n=a.size();
        int cnt=1, ans=1;
        
        for(int i=0;i<n-1;i++)
        {
            if(a[i] < a[i+1])
            {
                if(i%2)
                    cnt=1;
                else
                    cnt++;
            }
            else
            {
                if(a[i] == a[i+1])
                {
                    cnt=1;
                    continue;
                }
                
                if(i%2)
                    cnt++;
                else
                    cnt=1;
            }
            
            ans=max(ans, cnt);
        }
        
        cnt=1;
        for(int i=0;i<n-1;i++)
        {
            if(a[i] < a[i+1])
            {
                if(i%2)
                    cnt++;
                else
                    cnt=1;
            }
            else
            {
                if(a[i] == a[i+1])
                {
                    cnt=1;
                    continue;
                }
                
                if(i%2)
                    cnt=1;
                else
                    cnt++;
            }
            
            ans=max(ans, cnt);
        }
        
        
        return ans;
    }
};