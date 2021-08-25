#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];

    for(int i=0; i<n; i++) {
        cin >> v[i];
    }

    int max_v = v[0];
    int min_v = v[0];
    int count=0;

    for(int i=1; i<n; i++) {
        if(v[i] < min_v) {
            min_v = v[i];
            count++;
        }
        else if(v[i] > max_v) {
            max_v = v[i];
            count++;
        }
    }

    cout << count << endl;

    return 0;
}