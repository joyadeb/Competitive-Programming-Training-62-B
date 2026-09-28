#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(90);
    v.push_back(20);
    v.push_back(40);
    v.push_back(10);
    v.push_back(80);
  
    sort(v.rbegin(), v.rend());
    
   
    
    cout << "Descending order: ";
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}
