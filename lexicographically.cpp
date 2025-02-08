
// lexigraphically using strcmp()
// It compares two strings character by character.
// If str1 is lexicographically smaller than str2, it returns a negative value.
// If str1 is equal to str2, it returns 0.
// If str1 is greater than str2, it returns a positive value.


#include <iostream>
#include<cstring>
using namespace std;

void selectionSort(char fruit[][60], int n){

    for(int i = 0; i<n-1; i++){

        int min_idx = i;
        for(int j = i+1; j < n; j++){
            if(strcmp(fruit[min_idx], fruit[j]) > 0 ){
                min_idx = j;
            }
        }
        if(min_idx != i){
            swap(fruit[i], fruit[min_idx]);
            // we can also do this to swap
            /*char temp[60];
            strcpy(temp, fruit[i]);
            strcpy(fruit[i], fruit[min_idx]);
            strcpy(fruit[min_idx], temp);*/
        }
    }
}


int main(){
    char fruit[][60] = {"papaya", "lime", "watermelon", "apple", "mango", "kiwi"};

    int n = sizeof(fruit)/sizeof(fruit[0]);

    selectionSort(fruit, n);

    for(int i = 0; i < n; i++){
        cout << fruit[i] <<" ";
    }cout<<endl;
}