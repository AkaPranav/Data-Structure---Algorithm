#include <iostream>
using namespace std;

int main(){
    string s;
    cout << "Enter string : ";
    cin >> s;

    // Precompute the hash values for the array

    int hash[26] = {0};
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "Query times! ";
    cin >> q;
    while(q--){
        char charr;
        cout << "Enter char to search : ";
        cin >> charr;

        // Fetch
        cout << hash[charr - 'a'] << " times!" << endl;
    }

    return 0;
}