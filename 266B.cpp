#include<iostream>
#include<string>

using namespace std;

int main()
{
    int student, time;
    string s;
    cin >> student >> time >> s;

    while(time--)
    {
        for(int i=1; i<student; i++) {
            if(s[i] == 'G' && s[i-1] == 'B') {
                s[i]='B';
                s[i-1]='G';
                i++;
            }
        }
    }

    cout << s << endl;

    return 0;
}