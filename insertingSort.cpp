#include<iostream>
#include<vector>
using namespace std;

// void insertionSort(vector<int> &v){
//     int n = v.size();
//     for(int i=1;i<n;i++){
//         int current_ele = v[i];
//         int j=i-1;

//         while(j>=0 && v[j]>current_ele){
//             v[j+1] = v[j];
//             j--;
//         }
//         v[j+1] = current_ele;
//     }
//     return;
// }


// int main(){
// int n;
// cout<<"give size of arr: ";
// cin>>n;

// vector<int> v(n);
// for(int i = 0; i< n; i++){
//     cin>>v[i];

// }

// insertionSort(v);

// for(int i = 0; i<n; i++){
//     cout<<v[i]<<" ";
// }

// }
void insertion_sort(vector<int> &arr){

    int n = arr.size();
    for(int i = 1; i<n ; i++){
        int key = arr[i];
        int j = i - 1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }

}

int main(){

    vector<int> arr = {23,404,52,46,562,2};

    insertion_sort(arr);

    for(int arrs : arr){
        cout<<arrs<< " ";

    }
    return 0;
}