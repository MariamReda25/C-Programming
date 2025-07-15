/**************************************
 * Author: Mariam Reda Ibrahim
 * Created on: Jul 15 2025
 * DSA Cracker(array) : p1 MinMax Array
 *  Time complexity O(n) - Space O(1)
 **************************************/
void MinMax_array (int * arr,int size,int *min , int *max){

	*max = arr[0];
	*min = arr[0];

	for (int i = 1; i < size; i++){

		if(arr[i] > *max)
			*max = arr[i];

		if (arr[i] < *min)
			*min = arr[i];
	}

}
