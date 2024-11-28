class RandomizedSet {
private:
    map<int, int> mp;       // Lưu giá trị và chỉ số trong vector
    vector<int> v;          // Lưu các giá trị

public:
    RandomizedSet() {}

    bool search(int val) {
        return mp.find(val) != mp.end();
    }
    
    bool insert(int val) {
        if (search(val)) // Nếu đã tồn tại
            return false;
        v.push_back(val);
        mp[val] = v.size() - 1; // Cập nhật chỉ số
        return true;
    }
    
    bool remove(int val) {
        if (!search(val)) // Nếu không tồn tại
            return false;
        
        int index = mp[val];
        int lastValue = v.back();
        
        // Di chuyển giá trị cuối cùng vào vị trí bị xóa
        v[index] = lastValue;
        mp[lastValue] = index;
        
        // Xóa phần tử cuối cùng
        v.pop_back();
        mp.erase(val);

        return true;
    }
    
    int getRandom() {
        return v[rand() % v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */
