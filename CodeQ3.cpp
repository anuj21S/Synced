#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int verifycycle(int * a, int n){
    int x,y,z;
    for (int i = 0; i<n;i++){
        x = a[i];
        y = a[(i-1+n)%n];
        z = a[(i+1)%n];
        if (!((x < y && x < z) || (x > y && x > z))){
            return 0;
        }
    }
    return 1;
}
int main(){
    int cases,n,in,x,f;
    cin >> cases;
    vector <int> v;
    while(cases--){
        cin >> n;
        int a[n];
        v.clear();
        for (int i=0;i<n;i++){
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        for (int i=0;i<(n+1)/2;i++){
            a[2*i] = v[i];
        }
        for (int i=0;i<(n)/2;i++){
            a[2*i+1] = v[i+(n+1)/2];
        }
        if (verifycycle(a,n)){
            cout << "YES" << endl;
            for (int i=0;i<n;i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}
/*
int ismininrng(int m, int * arr, int n){
    for (int i=0;i<n;i++){
        if (arr[i]<m){
            return 0;
        }
    }
    return 1;
}
int firstminindex(int * arr , int n){
    int in = 0;
    for (int i=0;i<n;i++){
        if (arr[in]>arr[i]){
            in = i;
        }
    }
    return in;
}
int main(){
    int cases,n,in,x,f;
    cin >> cases;
    vector <int> v;
    
    while(cases--){
        cin >> n;
        int a[n];
        int b[n];
        v.clear();
        f = 1;
        for (int i=0;i<n;i++){
            cin >> a[i];
        }
        for (int i=0;i<n;i++){
            cin >> b[i];
        }
        for (int i=0;i<n;i++){
            in = firstminindex(a+i,n-i);
            if (ismininrng(b[in+i],b+i,n-i)){
                if (in != 0){
                    v.push_back(in+i);
                    x = a[in+i];
                    a[in+i] = a[i];
                    a[i] = x;
                    x = b[in+i];
                    b[in+i] = b[i];
                    b[i] = x;
                }
            }else{
                f = 0;
                cout << -1 << endl;
                break;
            }
        }
        if (f){
            cout << v.size() << endl;
            for (int i=0;i<v.size();i++){
                cout << (v[i]+1) << " " << (i+1) << endl;
            }
        }
    }
}
*/