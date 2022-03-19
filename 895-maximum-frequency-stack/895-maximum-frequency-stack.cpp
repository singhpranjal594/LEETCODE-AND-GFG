class FreqStack {
public:
    map<  int,stack<long long int>>m;
    map<int,int>count;
    int maxf=0;
    FreqStack() {
        
    }
    
    void push(int x) {
         count[x]++;
	    maxf=max(maxf,count[x]-1);
	    m[count[x]-1].push(x);
	    
    }
    
    int pop() { 
      long long  int v=m[maxf].top();
	 m[maxf].pop();
	 if(m[maxf].empty())maxf--;
	 count[v]=count[v]-1;
	 return v;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */