class Solution {

public:

vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    int arr[26]={0};
    vector<string> vec;
    for(int i=0;i<words2.size();i++)
    {  int a[26]={0};
      
        for(int j=0;j<words2[i].size();j++)
         a[words2[i][j]-'a']++;
        
        for(int i=0;i<26;i++)
        {
           if(a[i]>arr[i])arr[i]=a[i];
        }
    }
    for(int i=0;i<words1.size();i++)
    {   
        bool flag=true;
        int arr1[26]={0};
        for(int j=0;j<words1[i].size();j++)
        {
           arr1[words1[i][j]-'a']++;
        }
    for(int i=0;i<26;i++)
    {
      
            if(arr[i]>arr1[i])
            { flag=false;break;}
        
    }
     if(flag==true)
         vec.push_back(words1[i]);
      
     
   }
     return vec;
}
};