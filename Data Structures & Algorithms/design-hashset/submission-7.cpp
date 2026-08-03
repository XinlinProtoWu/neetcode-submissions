#include <cstring>
class MyHashSet {
public:
    MyHashSet() {
        // KEY is in range of [0, 1000000]
        // 31251 * 32 = 1000032
        memset(s, 0, sizeof(s));
    }
    
    void add(int key) {
        s[key / 32] |= getMask(key);
    }
    
    void remove(int key) {
        s[key / 32] &= ~getMask(key);        
    }
    
    bool contains(int key) {
        return (s[key / 32] & getMask(key)) != 0;
    }
private:
    int s[31251];

    int getMask(int key) {
        return 1 << (key % 32);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */