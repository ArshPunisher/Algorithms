#include <stdio.h>

int linearInt(int arr[], int size, int element){
    for(int i=0; i<=size; i++){
        if(arr[i] == element){
            return i;
        }
    }
    return -1;
}

int BinarySrch(int arr[], int size, int element){
    int low = 0, high = size -1, mid;
    while(low<=high){
        mid = (low + high)/2;

        if(arr[mid] == element){
            return mid;
        }

        if(arr[mid] < element){
            low = mid +1;
        }

        else{
            high = mid -1;
        }
    }
}

int main(){
    int arr[] = {1, 3, 6, 8, 88, 121, 153, 345 ,422, 476, 568, 690};
    int size = sizeof(arr)/sizeof(int);
    int element = 88;
    // int index = linearInt(arr, size, element);
    int index = BinarySrch(arr, size, element);
    printf("The %d element is at index %d\n", element, index);
    return 0;
}