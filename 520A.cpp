#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    string word;
    cin >> n >> word;
    int i, count=0;

    for(i=0; i<n; i++) {
        if(word[i] < 97) {
            word[i]+=32;
        }
    }

    sort(word.begin(), word.end());

    for(i=0; i<n; i++) {
        if(word[i] != word[i+1]) {
            count+=1;
        }
    }

    if(count > 25) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}