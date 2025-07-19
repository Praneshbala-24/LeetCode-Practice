#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> bracketMap = {
            {')', '('},
            {']', '['},
            {'}', '{'}
        };

        for (char c : s) {
            // If it's a closing bracket
            if (bracketMap.count(c)) {
                if (st.empty() || st.top() != bracketMap[c]) {
                    return false;
                }
                st.pop(); // matched opening bracket found
            } else {
                // It's an opening bracket
                st.push(c);
            }
        }

        // If stack is empty, all brackets matched
        return st.empty();
    }
};
