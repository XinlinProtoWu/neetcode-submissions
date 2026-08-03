class MyHashSet {
public:
    set <int> hs;
    MyHashSet() {
    }
    
    void add(int key) {
        hs.insert(key);
    }
    
    void remove(int key) {
        hs.erase(key);        
    }
    
    bool contains(int key) {
        return hs.count(key);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */