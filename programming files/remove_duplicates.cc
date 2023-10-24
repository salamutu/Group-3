#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function remove_duplicates sorts a vector and returns a vector with duplicates removed
vector<int> remove_duplicates(vector<int> arr, vector<int>& removed_elements){
    // Create vector to store unique elements
    vector<int> unique_arr;
    // Sort vector
    sort(arr.begin(), arr.end());
    int n = arr.size();
    // Loop through all elements in arr
    for(int i=0; i<n; i++){
        // Add an element from arr to unique_arr if the value at index i is not equal to the value at index i-1 (not a duplicate)
        if(i == 0 || arr[i] != arr[i-1]){
            unique_arr.push_back(arr[i]);
        }
        else{    // Add the element to removed_elements if it is equal to the value at index i-1 (duplicate)
            removed_elements.push_back(arr[i]);
        }
    }
    return unique_arr;
}

int main(){
    // Test the function
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5};
    vector<int> removed_elements;
    vector<int> unique_arr = remove_duplicates(arr, removed_elements);
    cout << "Original array: ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Unique array: ";
    for(int i=0; i<unique_arr.size(); i++){
        cout << unique_arr[i] << " ";
    }
    cout << endl;
    cout << "Removed elements: ";
    for(int i=0; i<removed_elements.size(); i++){
        cout << removed_elements[i] << " ";
    }
    cout << endl;
    return 0;
}
