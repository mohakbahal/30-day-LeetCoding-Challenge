class Solution {
public:
    bool checkValidString(string s) {
        stack<int> s1;
        stack<int> s2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                s1.push(i);
            if(s[i]=='*')
                s2.push(i);
            if(s[i]==')')
            {
                if(!s1.empty())
                    s1.pop();
                else if(!s2.empty())
                    s2.pop();
                else
                    return false;
                    
            }
        }
        while(!s1.empty()  && !s2.empty())
        {
            if(s1.top()>s2.top())
                return false;
            s1.pop();
            s2.pop();
            
        }
        return s1.empty();
        
    }
};