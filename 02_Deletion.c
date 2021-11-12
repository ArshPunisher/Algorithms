#include <stdio.h>

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int indDeletion(int arr[], int size, int index){
   
    for(int i = index; i < size-1; i++){
        arr[i] = arr[i+1];
    }
}

int main(){
    int arr[100]= {22, 32, 84, 19, 94, 77};
    int size = 6, element = 34, index = 3;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    
    return 0;
}