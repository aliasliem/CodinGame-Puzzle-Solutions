#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int l;
    string arr[30];
    cin >> l; cin.ignore();
    int h;
    cin >> h; cin.ignore();
    string t;
    getline(cin, t);
    for (int i = 0; i < h; i++) {
        string row;
        getline(cin, row);
        arr[i] = row;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    for( int i = 0; i < h; i++ ) {
        string s = "";
        for( int j = 0; j < t.length(); j++ ) {
            int col;
            if( t[j] >= 'a' && t[j] <= 'z' ) {
                col = (t[j]-'a') * l;
            } else 
            if( t[j] >= 'A' && t[j] <= 'Z' ) {
                col = (t[j]-'A') * l;
            } else
            {
                col = ( 26 ) * l;
            }
            for( int k = 0; k < l; k++ ) {
                s = s + arr[i][col+k];
            }       
        }
        cout << s << endl;
    }

    //cout << "answer" << endl;
}
