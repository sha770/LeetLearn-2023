class ProductOfNumbers {
public:
 vector<int>v;
    ProductOfNumbers() {
        
    }
    
    void add(int num) {
       v.push_back(num); 
    }
    
    int getProduct(int k) {
        if(k>v.size()) return 0;
        int p=1;
        for(int i=v.size()-k;i<v.size();i++){
            p*=v[i];
        }
        return p;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */