#include<iostream>
#include<string>

using namespace std;

int main()
{
    string football;
    cin >> football;

    int continu=1;

    for(int i=1; i<football.length(); i++) {
        if(football[i] == football[i-1]) {
            ++continu;
            if(continu == 7) {
                cout << "YES" << endl;
                return 0;
                
            }
        }
        else {
            continu=1;
        }
    }

    cout << "NO" << endl;
    return 0;
}