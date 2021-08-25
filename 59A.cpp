#include<iostream>
#include<string>
using namespace std;

int main()
{
    string w;
    cin >> w;
    int upeer=0, lower=0;

    for(int i=0; i<w.length(); i++)  {
        if(w[i] < 91) {
            upeer++;
        }

        else {
            lower++;
        }
    }

    if(upeer < lower || upeer == lower) {
        for(int i=0; i<w.length(); i++) {
            if(w[i] < 96) {
                w[i]+=32;
            }
        }
    }
    else  {
        for(int i=0; i<w.length(); i++) {
            if(w[i] > 91) {
                w[i]-=32;
            }
        }
    }

    cout << w << endl;

    return 0;
}