// Number hashing using map

#include<iostream>
#include<map>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i] ;

    // Pre-compute

    map <int, int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }

    // Fetch 

    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;

        cout << mpp[number] << endl;
    }

    return 0;
}