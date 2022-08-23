#include <bits/stdc++.h> 

using namespace std;

string gunung( int h, int i ) {
	string s = "";
  if( i < 0 ) {
    for( int j=0; j < h; j++ ) {
      s = s + "  ";
    }
	} else {
    for( int j=0; j < h-1-i; j++ ) {
      s = s + " ";
    }
    s = s + "/";
    for( int j=0; j < i; j++ ) {
      s = s + "  ";
    }
    s = s + "\\";
    for( int j=0; j < h-1-i; j++ ) {
      s = s + " ";
    }
	}	
	return s;
}

// trim from end (in place)
static inline void rtrim(std::string &s) {
	s.erase(s.find_last_not_of(" \n\r\t")+1);
}

int main() {
	int maxh = 2;
	vector<int> arr{1,2,1};
	vector<int> tertinggi_next(3);
	for( int brs=0; brs < maxh; brs++ ) {
	  string all_s = "";
		for( int kol=0; kol < arr.size(); kol++ ) {
			int h = arr[kol];
			int i = brs - (maxh-h);
      string s = gunung( h, i ); 
      all_s += s; 
		}
    rtrim(all_s);  
		cout << all_s << endl;
  }
}
/*
    h=3 maxh = 3
    "  /\"
    " /  \"
    "/    \"
    h-3 maxh = 4
    "      "
    "  /\  "
    " /  \ "
    "/    \"

*/
