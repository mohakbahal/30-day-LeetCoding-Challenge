class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string , vector<string>> giv;
     vector<vector<string>> v;
      for(string s : strs)
      {
          string s2=s;
          sort(s2.begin(),s2.end());
          giv[s2].push_back(s);
          
      }
        for(auto mp: giv)
            v.push_back(mp.second);
        return v;
    }
};