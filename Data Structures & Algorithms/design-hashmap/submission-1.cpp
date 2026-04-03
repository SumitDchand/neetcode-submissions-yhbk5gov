class MyHashMap {
public:
    vector<int> arr;

    MyHashMap() {
        arr.resize(1000001,-1);
    }
    
    void put(int key, int value) {
        // if(arr[key]!= NULL){
        //     arr[key] = value;
        // }
        // else 
        arr[key]= value;
        
    }
    
    int get(int key) {
        return arr[key];
    }
    
    void remove(int key) {
        if(arr[key]!=NULL){
            arr.erase(arr.begin() + key);//note it reomves and take rest values to the left...
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