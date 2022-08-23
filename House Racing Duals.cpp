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
    int n;
    int arr[100000];
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        int pi;
        cin >> pi; cin.ignore();
        arr[i] = pi;
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    sort( arr, arr+n );
    int min = 10000000 + 1;
    for (int i = 1; i < n; i++) {
        int sel = abs(arr[i]-arr[i-1]);
        if( sel < min ) min = sel;
    }

    cout << min << endl;
}
