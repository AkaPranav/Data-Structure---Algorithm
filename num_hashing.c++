#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Size of the array : ";
    cin >> n;
    int arr[n];
    cout << "Enter values into array : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Precompute the hash values for the array

    int hash[100];
    for(int i = 0; i < n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Query times! ";
    cin >> q;
    while(q--){
        int number;
        cout << "Enter number to search : ";
        cin >> number;

        // Fetch
        cout << hash[number] << " times!" << endl;
    }

    return 0;
}