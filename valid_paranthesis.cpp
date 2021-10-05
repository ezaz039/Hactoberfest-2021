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
                brackets.push(*it); //push new bracket to the stack
            else if (!brackets.empty() && brackets.top() == brackets_pair[*it]) 
                brackets.pop(); //remove the bracket from the stack if pair found
            else return false;
        }
        
        return brackets.empty(); //if statck size > 0 means there are brackets without a pair
    }
};
