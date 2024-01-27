class Solution {
public:
    bool isValid(string s) {
       stack<char> stack;

     for (int i = 0; i < s.length(); i++) {
          char c = s[i];
        if (c == '(')
            stack.push(')');
        else if (c == '{')
            stack.push('}');
        else if (c == '[')
            stack.push(']');
        else if (stack.empty() || stack.top() != c)
            return false;
        else
            stack.pop();
    }

    return stack.empty();
}

        };
        
