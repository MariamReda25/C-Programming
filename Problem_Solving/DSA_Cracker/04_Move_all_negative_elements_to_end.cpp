class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        vector<int>temp;
        int index = 0;
        for(int num : arr){
            if(num >= 0){
                temp.push_back(num);
            }
        }
        
        for(int num : arr){
            if(num < 0){
                temp.push_back(num);
            }
        }
        arr=temp;
    }
};
