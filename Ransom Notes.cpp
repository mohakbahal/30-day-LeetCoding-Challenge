class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        multiset<char>r(ransomNote.begin(),ransomNote.end());
        multiset<char>m(magazine.begin(),magazine.end());
        if(includes(m.begin(),m.end(),r.begin(),r.end()))
            return true;
        else
            return false;
    }
};