#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

enum RESULT {
    PLAYER1,
    PLAYER2,
    WAR
};

queue<int> qa, qb, qc, qd;
bool pat = false;
int round = 0;

int getval( string s ) {
    string cards = "234567891JQKA";
    return cards.find(s[0]);
}

RESULT play(int a, int b) {
    if( a > b ) return PLAYER1;
    if( a < b ) return PLAYER2;
    if( a == b ) return WAR;
}

void war();
void battle();

void battle() {
    int a = qa.front(); 
    int b = qb.front(); 
    cerr<<"BATTLE "<<qa.size()<<" "<<qb.size()<<" "<<a<<"x"<<b<<" "<<endl;
    qa.pop();
    qb.pop();
    qc.push(a);
    qd.push(b);
    if(a == b) { // WAR
        war();
    } else 
    if(a < b) { // WAR
        while(!qc.empty()) {
            qb.push( qc.front() );
            qc.pop();
        }
        while(!qd.empty()) {
            qb.push( qd.front() );
            qd.pop();
        }
    } else
    if(a > b) { // WAR
        while(!qc.empty()) {
            qa.push( qc.front() );
            qc.pop();
        }
        while(!qd.empty()) {
            qa.push( qd.front() );
            qd.pop();
        }
    }
}

void war() {
    cerr<<"WAR "<<qa.size()<<" "<<qb.size()<<" "<<qc.size()<<" "<<qd.size()<<" "<<endl;
    if( qa.size() < 3 || qb.size() < 3 ) {
        pat = true;
        return;
    } else {
        for( int i = 0; i < 3 && !qa.empty(); i++ ) {
            int a = qa.front(); 
            qc.push(a);
            qa.pop();
        }
        for( int i = 0; i < 3 && !qb.empty(); i++ ) {
            int b = qb.front(); 
            qd.push(b);
            qb.pop();
        }
        battle();
    }
}

void playRound() {
    round++;
    battle();
}


int main()
{
    queue<int> *qw;
    int n; // the number of cards for player 1
    cin >> n; cin.ignore();
    for (int i = 0; i < n; i++) {
        string cardp_1; // the n cards of player 1
        cin >> cardp_1; cin.ignore();
        qa.push(getval(cardp_1));
    }
    int m; // the number of cards for player 2
    cin >> m; cin.ignore();
    for (int i = 0; i < m; i++) {
        string cardp_2; // the m cards of player 2
        cin >> cardp_2; cin.ignore();
        qb.push(getval(cardp_2));
    }

    // Write an answer using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;
    while(!pat && !qa.empty() && !qb.empty()) {
        playRound();
    }
    if( pat ) {
        cout << "PAT" << endl;
    } else 
    if( qa.size() > 0 ) {
        cout << "1 " << round << endl;
    } else 
    if( qb.size() > 0 ) {
        cout << "2 " << round << endl;
    }
}
