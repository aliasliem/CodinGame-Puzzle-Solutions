#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int arr[9][9];
bool check() {
    for (int i = 0; i < 9; i++) { // baris
        int visited[10] = {0};
        for (int j = 0; j < 9; j++) {
            int bil = arr[i][j];
            if( visited[bil] == 0 ) visited[bil] = 1;
            else return false;
        }
    }
    for (int i = 0; i < 9; i++) { // kolom
        int visited[10] = {0};
        for (int j = 0; j < 9; j++) {
            int bil = arr[j][i];
            if( visited[bil] == 0 ) visited[bil] = 1;
            else return false;
        }
    }

    for (int y = 0; y < 9; y+=3) { // kolom y
        for (int x = 0; x < 9; x+=3) { // kolom x
            int visited[10] = {0};
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int bil = arr[y+i][x+j];
                    if( visited[bil] == 0 ) visited[bil] = 1;
                    else return false;
                }
            }
        }
    }

    return true;
} 


int main()
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            int n;
            cin >> n; cin.ignore();
            arr[i][j] = n;
        }
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << (check() ? "true" : "false") << endl;
}
