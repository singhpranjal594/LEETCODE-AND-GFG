class Solution {
public:
    string simplifyPath(string path) {
        string ans;
        string temp;
        vector<string> s;
        stringstream ss(path);
        while(getline(ss,temp,'/'))
              {
                  if(temp==""||temp==".")
                      continue;
                  if(temp==".."&&!s.empty())
                      s.pop_back();
                  else if(temp!="..")
                      s.push_back(temp);
              }
              for(auto str:s)
              ans+='/'+str;
              if(s.empty())
              return "/";
              else
              return ans;
        
    }
};