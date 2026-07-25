#include <stdio.h>

int binary_search(const int arr[], int size, int target){
    int left = 0;
    int right = size -1;
    
    while ( left <= right){
        int mid = left + (right-left)/2;
        if(arr[mid] == target){
            return mid;
        }
        if( arr[mid] >= target) {
            right = mid -1;
        }
        else {
            left = mid +1;
        }
    }
    return -1;
};

int main () {
    int num_array[] = { 1,2,4,5,6,67};
    int size = sizeof(num_array) / sizeof(num_array[0]);
    int target = 69;
    const int result = binary_search(num_array,size,target);
    if(result < 0){
        printf("Target: %d Not found!\n", target);
    }
    else {
        printf("Target \"%d\" found at %d\n", target, result);
    }
};
