class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int c=0;
        int n=pushed.size();
        for(auto x:pushed)
        {
            st.push(x);
            
                
                while(!st.empty()&&c<n&&st.top()==popped[c])
                {
                    st.pop();
                    c++;
                }
            }
        
    if(c==n)
        return 1;
    else
        return 0;
        
    }
};