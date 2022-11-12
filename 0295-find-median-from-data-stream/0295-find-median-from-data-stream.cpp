class MedianFinder {
    priority_queue<int>left;
    priority_queue<int,vector<int>,greater<int>>right;
    int mid;
    int sz=0;
public:
    MedianFinder() {
    }
    
    void addNum(int num) {
        sz++;
        if(sz==1)mid=num;
        else if(sz%2==0){
            if(num<mid){
                left.push(num);
                right.push(mid);
            }else{
                left.push(mid);
                right.push(num);
            }
        }
        else if(left.top()>num){
            left.push(num);
            mid=left.top();
            left.pop();
        }else{
            right.push(num);
            mid=right.top();
            right.pop();
        }
    }
    
    double findMedian() {
        if(sz%2==0){
            double a=(double)left.top();
            a+=(double)right.top();
            a/=2;
            return a;
        }
        else return mid;
    }
};