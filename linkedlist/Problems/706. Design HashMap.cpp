class MyHashMap {
public:
    bool arr[1000005];
    int ans[1000005];
    MyHashMap() {
        memset(arr,0,sizeof(arr));
        memset(ans,0,sizeof(ans));
    }
    
    void put(int key, int value) {
         ans[key] = value;
         arr[key] = true;
    }
    
    int get(int key) {
        if(arr[key]){
            return ans[key];
        }
        else return -1;
    }
    
    void remove(int key) {
        arr[key] = false;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */