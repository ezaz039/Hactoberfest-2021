class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        map<char, char> brackets_pair {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (auto it {s.begin()}; it != s.end(); it++) {
            if (brackets.empty() || brackets.top() != brackets_pair[*it])
                brackets.push(*it);   
            else if (!brackets.empty() && brackets.top() == brackets_pair[*it]) 
                brackets.pop();
            else return false;
        }
        
        return brackets.empty();
    }
};
