
/// Accpeted

#include<bits/stdc++.h>

using namespace std;
void solve(){

    int n; cin>>n;
    bool dot = false;
    int cnt = 0;
    int row = 2*n;
    int col = 2*n;
    int currRow = 0;
    int currCol = 0;
    bool rowDot = false;
    while(currRow<row){
        if(cnt==2){
            dot = !dot;
            cnt = 0;
        }
        cnt++;
        if(!dot){
            cout<<"#";
        }
        else{
            cout<<".";
        }
        currCol++;
        if(currCol == col){
           // print
            currCol = 0;
            currRow++;
            cout<<endl;
            cnt = 0;
            if(currRow%2 == 0){
                rowDot = !rowDot;
            }
            dot = rowDot;
        }
    }

}

int main(){
    int t; cin>>t;
    while(t--){
        solve();
    }
    return 0;
}