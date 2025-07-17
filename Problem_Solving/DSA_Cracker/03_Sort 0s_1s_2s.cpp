/*Time Complexity O(n)*/
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n_zero=0,n_one=0,n_two=0;
        
       for (int i : arr){
           if (i == 0)
               n_zero++;
            else if (i == 1)
               n_one++;
            else 
               n_two++;
             
       }
       
       int i = 0;
        
      while (n_zero--) 
          arr[i++] = 0;
      while(n_one--)
         arr[i++] = 1;
      while (n_two--)
         arr[i++] = 2;
    }
};
