#include <bits/stdc++.h>

using namespace std;



int main() {
    int t;
    cin >> t;
    for(int i0=0;i0<t;i0++){
    int N;
    cin >> N;

    vector < vector<char> > a(N,vector<char>(N));
    for (int i=0;i<N;i++) {
        string s;
        cin >> s;
        s.copy(&a[i][0],N);
        sort(a[i].begin(),a[i].end());
    }

    // check if cols are sorted
    bool sorted=true; // assume all cols sorted
    for (int c=0;c<N;c++) {
        for (int r=0;r<N-1;r++) {
            if (a[r][c]>a[r+1][c]) {
                sorted=false;
                break;
            }    
        }    
        if (!sorted) break;
    }

    if (sorted) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
    return 0;
}
