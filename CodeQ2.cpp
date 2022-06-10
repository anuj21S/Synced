#include <iostream>
using namespace std;
int main(){
    int cases,m,n,k,x,flag,i;
    char ch;
    cin >> cases;
    while(cases--){
        cin >> m >> n;
        char g[m][n];
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cin >> g[i][j];
            }
        }
        for (int j=0;j<n;j++){
            for (int i=m-1;i>=0;i--){
                if (g[i][j]==42){
                    g[i][j] = '.';
                    k = i+1;
                    while (k<m && g[k][j]=='.'){
                        k++;
                    }
                    k--;
                    g[k][j] = '*';
                }
            }
        }
        for (int i=0;i<m;i++){
            for (int j=0;j<n;j++){
                cout << g[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }
}