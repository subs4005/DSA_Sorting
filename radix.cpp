#include <iostream>
#include <vector>
#include <climits>

using namespace std;

void countSort(vector<int> &v, int pos){
    int n = v.size();

    vector<int> freq(10,0);
  
  
    // Count occurrences of digits at the current position
    for(int i = 0; i < n; i++){
        freq[(v[i] / pos) % 10]++;
    }

    // Convert count to prefix sum
    for (int i = 1; i < 10; i++) {
        freq[i] += freq[i - 1];
    }

    // Sort elements based on current digit
    vector<int> ans(n);
    for(int i = n - 1; i >= 0; i--) {
        ans[--freq[(v[i] / pos) % 10]] = v[i];
    }

    // Copy back sorted elements
    for(int i = 0; i < n; i++) {
        v[i] = ans[i];
    }

}


void radix(vector<int> &v) {
    int max_ele = INT_MIN;  // Now this will work
    for(auto x : v) {
        max_ele = max(x, max_ele);
    }

    // Apply countSort for every digit position
    for(int pos = 1; max_ele / pos > 0; pos *= 10) {
        countSort(v, pos);
    }
}



int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    radix(v);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}