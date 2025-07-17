// User function template for C++

class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        for (int i = 0 ; i<arr.size(); i++){
            for(int j = 0 ; j<arr.size()-(i+1); j++){
                
                if(arr[j] > arr[j+1]){
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
			
            }
        }
        
        return arr[k-1];
    }
};
