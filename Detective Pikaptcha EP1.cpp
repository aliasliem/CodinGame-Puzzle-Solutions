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
    int width;
    int height;
    vector<string> lines;
    cin >> width >> height; cin.ignore();
    cerr<<width<<" "<<height<<endl;
    for (int i = 0; i < height; i++) {
        string line;
        cin >> line; cin.ignore();
        lines.push_back(line);
        cerr<<line<<endl;
    }
    for (int i = 0; i < height; i++) {

        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        
        for (int j = 0; j < width; j++) {
            int count = 0;
            if(lines[i][j]=='#') cout << lines[i][j];
            else {
                if(i>0&&lines[i-1][j]=='0') count++;
                if(i<height-1&&lines[i+1][j]=='0') count++;
                if(j>0&&lines[i][j-1]=='0') count++;
                if(j<width-1&&lines[i][j+1]=='0') count++;
                cout << count;
            }
        }
        cout << endl;
    }
}
