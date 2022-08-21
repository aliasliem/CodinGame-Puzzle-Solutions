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
    int n; // the number of temperatures to analyse
    cin >> n; cin.ignore();
    long long t; // a temperature expressed as an integer ranging from -273 to 5526

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;


    if(n==0) {
        cout << 0 << endl;
        return 0;
    }
    else {
        cin >> t;
        long long mx=abs(t), mv=t;
        for (int i = 1; i < n; i++) {
            cin >> t; cin.ignore();
            int x=abs(t);
            if (x<=mx) { if(x!=mv||t>0) mv=t; mx=x; }
            cerr << x << " " << mv << endl;
        }
        cout << mv << endl;
    }

}
