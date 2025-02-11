// Naive approach
#include<iostream>
using namespace std;

int bSearch(int arr[], int n, int x){
    int low = 0, high = n-1;     // low and high are the indexes of the array
    while(low <= high){
        int mid = (low + high)/2;      // mid is the index of the middle element
        if(arr[mid] == x){             // if the middle element is equal to x, return mid
            return mid;
        }else if(arr[mid] < x){        // if the middle element is less than x,                                    
            low = mid + 1;             // then x lies in the right half of the array
        } else{
            high = mid - 1;        // else x lies in the left half of the array
        }
    }
    return -1;       // if x is not present in the array, return -1
}

// Time Complexity: O(log n)

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};  // 0 1 2 3 4 5 6 7 8 indexes
    int n = sizeof(arr)/sizeof(arr[0]);   // size of the array
    int x = 50;     // element to be searched
    cout<<bSearch(arr, n, x);    // 4 function call

    return 0;
}
