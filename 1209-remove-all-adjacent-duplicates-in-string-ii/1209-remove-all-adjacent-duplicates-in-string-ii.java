class Solution {
    class Pair{
		char ch;int f;
		public Pair(char ch,int f) {
			this.ch=ch;
			this.f=f;
		}
	}
    public String removeDuplicates(String s, int k) {
        
        
        Stack<Pair> st=new Stack<>();
    	st.push(new Pair(s.charAt(0),1));
    	
    	for(int i=1;i<s.length();i++)
    	{
    		if(!st.isEmpty() && st.peek().ch == s.charAt(i)) {
    			int freq=st.peek().f;
    			if(freq+1 == k) {
    				st.pop();
    			}
    			else {
    				st.pop();
    				st.push(new Pair(s.charAt(i),freq+1));
    			}
    		}
    		else {
    			st.push(new Pair(s.charAt(i),1));
    		}
    	}
    	String res="";
    	while(!st.isEmpty())
    	{
    		for(int i=0;i<st.peek().f;i++) {
    			res=st.peek().ch+res;
    		}
    		st.pop();
    	}
        return res;
    }
}