class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
    for(int i = 0;i<s.length();i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            stk.push(s[i]);
        }else if(stk.empty() == true && (s[i] == ')' || s[i] == '}' || s[i] == ']')){
            return false;
        }
        else if(stk.top() == '(' && s[i] == ')'){
           stk.pop();
        }else if(stk.top() == '{' && s[i] == '}'){
            stk.pop();
        }else if(stk.top() == '[' && s[i] == ']'){
            stk.pop();
        }else {
            return false;
        }
    }
    if(stk.empty() == true) return true;
    return false;
    }
};