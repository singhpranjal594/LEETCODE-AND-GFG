class Solution {
public:
    vector<int> partitionLabels(string s) {
        map<char,int>map;
for(int i=0;i<s.length();i++){
char ch=s[i];
map[ch]=i;
}
vector<int>res;
int mx=0;
int prev=-1;
for(int i=0;i<s.length();i++){
mx=max(mx,map[s[i]]);
if(i==mx){
res.push_back(mx-prev);
prev=i;
}
}
return res;
}
};
        
