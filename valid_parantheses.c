class Solution {
public:
    bool isValid(string s) {
        stack <char> ch;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                ch.push(s[i]);
            if(ch.empty()==true)
            return false;
            switch (s[i])
            {
                case ')':
                    if(ch.top()=='[' || ch.top()=='{')
                        return false;
                    else
                        ch.pop();
                    break;
                case '}':
                    if(ch.top()=='[' || ch.top()=='(')
                        return false;
                    else
                        ch.pop();
                    break;
                case ']':
                    if(ch.top()=='(' || ch.top()=='{')
                        return false;
                    else
                        ch.pop();
                    break;
            }
        }
        if(ch.empty()==true)
        return true;
        else
        return false;
        
    }
};
