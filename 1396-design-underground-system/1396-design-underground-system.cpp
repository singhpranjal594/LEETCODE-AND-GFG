class UndergroundSystem {
public:
    map<int,pair<string,int>> m;
    map<string,pair<long long,int>> ans;
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        m[id]=make_pair(stationName,t);
    }
    
    void checkOut(int id, string stationName, int t) {
        string temp= m[id].first;
        temp+='-';
        temp+=stationName;
        ans[temp].second++;
        ans[temp].first+=(t-m[id].second);
    }
    
    double getAverageTime(string startStation, string endStation) {
        string temp=startStation;
        temp+='-';
        temp+=endStation;
        double res= (double)((ans[temp].first* 1.0)/(ans[temp].second* 1.0));
        return res;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */