#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<pair<string,int> >v(3);
    v[0].first = "Joya";
    v[0].second = 101;
        v[1].first = "Joy";
    v[1].second = 102;   
     v[2].first = "roy";
    v[2].second = 103;

    for(int i=0;i<v.size();i++) {
        cout << v[i].first<< " "<<v[i].second<<"\n";
    }
   
    
    return 0;
}
