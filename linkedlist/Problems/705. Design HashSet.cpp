class MyHashSet {
public:
    bool arr[1000005];
    int ans[1000005];
    MyHashSet() {
        memset(arr,0,sizeof(arr));
        memset(ans,0,sizeof(ans));
    }
    
    void add(int key) {
        arr[key]  = true;
    }
    
    void remove(int key) {
        arr[key] = false;
    }
    
    bool contains(int key) {
        return arr[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */