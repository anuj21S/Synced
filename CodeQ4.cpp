#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int cases,n,x;
    cin >> n;
    vector<int> arr;
    for (int i=0;i<n;i++){
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    cout << arr[(n-1)/2] << endl;
}
/*
int main(){
    int cases,n,x,flag;
    char ch;
    cin >> cases;
    while(cases--){
        cin >> n;
        vector<int> arr;
        for (int i=0;i<n;i++){
            cin >> x;
            arr.push_back(x);
        }
        sort(arr.begin(),arr.end());
        cout << arr[n/2] << endl;
    }
}
*/