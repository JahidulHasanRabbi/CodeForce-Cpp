#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int police=0;
    int crime=0;
    int count=0;
    int m[n];

    for(int i=0; i<n; i++) {
        cin >> m[i];
    }

    for(int i=0; i<n; i++) {
        if(m[i] > 0) {
            police+=m[i];
        }
        else if (police > 0) {
            police--;
        }
        else {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}