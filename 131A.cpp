#include<iostream>

using namespace std;

int main()
{
    string word;
    cin >> word;
    int i;
    int l=word.length();
    bool change=true;

    for(i=1; i<l; i++) {
        if(word[i] >= 97) {
            change=false;
        }
    }

    if(change)
    {
        for(i=0; i<l; i++) {
            if(word[i] >= 97) {
                word[i]-=32;
            }
            else {
                word[i]+=32;
            }
        }
    }

    cout << word << endl;

    return 0;
}