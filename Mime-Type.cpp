#include <bits/stdc++.h>

using namespace std;

string to_upper( string su ) {
    transform(su.begin(), su.end(), su.begin(), ::toupper);
    return su;
}

int main() {
    int n, q;
    cin >> n >> q;
    map<string,string> dict;
    for(int i = 0; i < n;i++) {
        string ext, mt;
        cin >> ext >> mt;
        dict[to_upper(ext)] = mt;
    }
    for(int i = 0; i < q;i++) {
        string str;
        cin >> str;
        int pos = str.find_last_of('.');
        if(pos == string::npos) {
            cout << "UNKNOWN" << endl;
        } else {
            string ext = str.erase(0, 1+pos);
            ext = to_upper(ext);
            if( dict[ext] == "" ) {
                cout << "UNKNOWN" << endl;
            } else {
                cout << dict[ext] << endl;
            }
        }
    }

}
