#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> v(3);

    while(cin >> v[0] >> v[1] >> v[2]){
        if(v[0]==0 && v[1]==0 && v[2]==0) break;
        sort(v.begin(), v.end(), less());

        if((v[0]*v[0]+v[1]*v[1])==(v[2]*v[2])) cout << "right\n";
        else cout << "wrong\n";
    }
    
}