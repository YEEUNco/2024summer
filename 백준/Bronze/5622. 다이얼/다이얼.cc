#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> dial = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    string str;
    cin >> str;
    int time=0;
    for(char c : str){
        time+=dial[c-'A'];
    }
    cout << time;
}