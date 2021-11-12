#include <stdio.h>

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indInsertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        return -1;
    }
    for(int i = size -1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
}

int main(){
    int arr[100]= {22, 32, 84, 19, 94, 77};
    int size = 6, element = 34, index = 3;
    display(arr, size);
    indInsertion(arr, size, element, 100, index);
    size += 1;
    display(arr, size);
    
    return 0;
}