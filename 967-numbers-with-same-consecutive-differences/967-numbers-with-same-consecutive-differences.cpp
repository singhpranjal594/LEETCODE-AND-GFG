class Solution {
public:
    vector<int> v;
int DigitCount(int n)
{
    int cnt;
    while(n)
    {
        cnt++;
        n=n/10;
    }
    return cnt;
}
void findNumber(int n, int k, int start)
{
    
    if(DigitCount(start)==n)
    {
        v.push_back(start);
        return;
    } 
    int lst = start%10;
    
    for(int i=0; i<10; i++)
    {
        if(abs(lst-i)==k)
            findNumber(n , k, start*10 + i);
    }
    
}
vector<int> numsSameConsecDiff(int n, int k) 
{
    for(int i=1; i<10; i++)
    {
        findNumber(n, k, i);
    }   
    return v;
}
};