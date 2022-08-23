#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    map<string, string> data_input;
    int n;
    cin >> n; cin.ignore();
    int m;
    cin >> m; cin.ignore();
    for (int i = 0; i < n; i++) {
        string input_name;
        string input_signal;
        cin >> input_name >> input_signal; cin.ignore();
        data_input[ input_name ] = input_signal;
    }
    for (int i = 0; i < m; i++) {
        string output_name;
        string type;
        string input_name_1;
        string input_name_2;
        cin >> output_name >> type >> input_name_1 >> input_name_2; cin.ignore();
        cout << output_name << " ";
        string s1 = data_input[ input_name_1 ];
        string s2 = data_input[ input_name_2 ];
        int len = s1.length(); 
        for( int j = 0; j < len; j++ ) {
            bool a = (s1[j] == '-');
            bool b = (s2[j] == '-');
            bool c;
            if( type == "AND" ) {
                c = (a and b);
            }
            if( type == "OR" ) {
                c = (a or b);
            }
            if( type == "XOR" ) {
                c = (a xor b);
            }
            if( type == "NAND" ) {
                c = !(a and b);
            }
            if( type == "NOR" ) {
                c = !(a or b);
            }
            if( type == "NXOR" ) {
                c = !(a xor b);
            }
            cout << ( c ? "-" : "_" ); 
        }
        cout << endl;
    }

        // Write an answer using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
}
