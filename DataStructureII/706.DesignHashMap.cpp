// 148 ms	52.9 MB
class MyHashMap {
public:
     map<int, int> mp;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        mp[key] = value;
    }
    
    int get(int key) {
        
        if(mp.count(key)){
            return mp[key];
        }
        return -1;
    }
    
    void remove(int key) {
         
        if(mp.count(key)){
           mp.erase(key);
        }
          
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
