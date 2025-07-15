/***************************************
 * Author: Mariam Reda Ibrahim
 * Created on: Jul 15 2025
 * DSA Cracker(array) : p0 Reverse Array
 * Time complexity O(n) - Space O(1)
 ***************************************/

void reverse_array (int * arr,int size){
	int i = 0, j = size-1;
	while(i < j){
		int temp = arr[i];
		arr[i++] = arr[j];
		arr[j--] = temp;
	}
}
