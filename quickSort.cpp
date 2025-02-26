#include<iostream>
using namespace std;

int partition(int arr[], int first , int last){
        int pivot = arr[last]; 
        int i = first - 1;// For inserting elements < pivot
        int j = first; // For finding elements < pivot

        for (; j < last; j++){
            if(arr[j] < pivot){
                i++;
                swap(arr[i], arr[j]);
            }
        }
        // i is pointing to the last element < pivot
        //correct position for pivot will be i + 1
        swap(arr[i+1], arr[last]);
        return i + 1;
}


void quickSort(int arr[], int first, int last){
    //base case
    if(first>=last){
        return;
    }

    // recursive case

    int pi = partition(arr, first, last);
        quickSort(arr, first, pi-1);
        quickSort(arr, pi + 1, last); 

}

int main(){
    int arr[] = {20,10,30,51,45,8,65,89};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr, 0, n-1);

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}