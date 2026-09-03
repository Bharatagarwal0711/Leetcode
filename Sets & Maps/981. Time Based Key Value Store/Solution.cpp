#include<iostream>
#include<unordered_map>
#include<vector>
#include<string>
using namespace std;

class TimeMap {

    unordered_map<string, vector< pair<int,string > > > mp;

public:

    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mp[key].emplace_back(timestamp,value);
    }
    
    string get(string key, int timestamp) {

        if(mp.find(key) == mp.end()) return "";

        auto& arr = mp[key];

        int low = 0;
        int high = arr.size()-1;
        int mid;

        while(low<=high){

            mid = low + (high-low)/2;
            int val = arr[mid].first;

            if(val == timestamp) return arr[mid].second;
            else if(val > timestamp) high = mid-1;
            else low = mid+1;

        }
        if(high >= 0 ) return arr[high].second;
        return "";
    }
};

/*

 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);

 */