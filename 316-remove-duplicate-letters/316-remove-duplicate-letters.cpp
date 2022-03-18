class Solution {
public:
    string removeDuplicateLetters(string str) {
        stack<char> st;
        vector<int> a(26,0);
        set<int> s; 
        for(char c:str){
            a[c-'a']++;
        }
        
        for(char c:str){
	
            if(s.find(c)!=s.end()){
                a[c-97]--;
                continue;
            }
			
		 
			
            while(!st.empty()&&st.top()>c&&a[st.top()-'a']>1){
                a[st.top()-'a']--; 
                s.erase(st.top()); 
                st.pop();
            }
			
			
            st.push(c);
            s.insert(c);
        }
        
        string ans="";
        
       while(!st.empty()){
            ans+=st.top();  
            st.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
        
    
};