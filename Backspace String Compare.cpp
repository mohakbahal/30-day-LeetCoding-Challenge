class Solution {
public:
    bool backspaceCompare(string S, string T) {
        string s, t;
        for (auto c : S)
        {
            if (c == '#')
            {
                if (!s.empty())
                    s.pop_back();
            }
            else
                s.push_back(c);
        }
        for (auto c : T)
            if (c == '#')
            {
                if (!t.empty())
                    t.pop_back();
            }
        else
            t.push_back(c);
        return s == t;
    }
};