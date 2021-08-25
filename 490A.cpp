#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int student[n];

    for(int i=0; i<n; i++) {
        cin >> student[i];
    }
    int team = n/3;
    if(team < 1) {
        cout << "0" << endl;
        return 0;
    }

    int Math = 0;
    int Programming = 0;
    int PE = 0;

    for(int i=0; i<n; i++) {
        if(student[i] == 1) {
            Math++;
        }
        else if(student[i] == 2) {
            Programming++;
        }
        else if(student[i] == 3) {
            PE++;
        }
    }

    int mini = min((Math, Programming), PE);

    cout << mini << endl;

    for(int i=0; i<n; i++) {
        if(int j=0; j<mini; j++) {
            if
        }
    }

    return 0;
}