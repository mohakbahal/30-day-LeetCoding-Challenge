class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        list<char> ch(s.begin(),s.end());
        char temp;
        string result="";
        for(int i=0;i<shift.size();i++)
        {
            if(shift[i][0]==0)
            {
                for(int j=0;j<shift[i][1];j++)
                {
                    temp=ch.front();
                    ch.pop_front();
                    ch.push_back(temp);
                }
            }
            else
            {
                for(int j=0;j<shift[i][1];j++)
                {
                    temp=ch.back();
                    ch.pop_back();
                    ch.push_front(temp);
                }
            }
                
        }
        for(auto a:ch)
        {
            result+=a;
        }
        return result;
    }
};