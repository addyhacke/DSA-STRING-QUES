class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
       map<string, vector<string>>m;
    
    for(int i=0;i<string_list.size();i++)
    {
        string s=string_list[i];
        sort(s.begin(), s.end());
        
        m[s].push_back(string_list[i]);
    }
    
    
    vector<vector<string> > v;
    
    for(auto it=m.begin();it!=m.end();it++)
    {
        v.push_back(it->second);
    }
    
    return v;

    }
};