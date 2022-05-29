class Solution {
    int check(string s1,string s2) {
        int count[26] = {0};
        int n = s1.size();
        int m = s2.size();
        
        for(int i=0;i<n;i++)
            count[s1[i]-'a']++;
        
        for(int i=0;i<m;i++) {
            if(count[s2[i]-'a']!=0)
                return 0;
        }
        return 1;
    }
public:
    int maxProduct(vector<string>& words) {
        int l1 = 0;
        int l2 = 0;
        int pro = 0;
        int n = words.size();
        for(int i = 0;i<n-1;i++) {
            l1 = words[i].size();
            for(int j=i+1;j<n;j++)
                if(check(words[i],words[j])) {
                    int newPro = words[i].size()*words[j].size();
                    pro = max(pro,newPro);
                    
                }
        }
        
        return pro;
    }
};