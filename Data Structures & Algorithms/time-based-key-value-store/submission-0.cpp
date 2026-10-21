class TimeMap {
public:
    TimeMap() {
        
    }
    unordered_map<string, map<int, string>>m;
    
    void set(string key, string value, int timestamp) {
        m[key].insert({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (m.find(key) == m.end()) return "";

        auto &inner = m[key];
        auto in = inner.upper_bound(timestamp);

        if (in == inner.begin()) return "";
        --in;
        return in->second;

    }
};
