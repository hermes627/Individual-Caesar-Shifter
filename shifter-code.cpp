#include <bits/stdc++.h>
using namespace std;

int main() {
	string orig = "";
    cin >> orig;

    int nums[orig.length()+10];
    for(int i=0;i<orig.length();i++){
        cin >> nums[i];
    }

    string caesar = "";
    for(int i=0;i<orig.length();i++){
        char now = orig[i];
        if(now>=65 and now<=90){
            caesar+=(now-65+nums[i])%26+65;
        }else{
            caesar+=(now-97+nums[i])%26+97;
        }
    }

    cout << caesar;
}
