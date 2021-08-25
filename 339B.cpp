#include<iostream>

using namespace std;

int main()
{
    int n, m;
    long long time=0;
    int l=1;

    cin >> n >> m;

    for(int i=0; i<m; i++) {
        int a;
        cin >> a;

        if(a>=l) {
            time+= a-l;
        }
        else {
           time+= n - (l-a);
        }
        l=a;
    }

    cout << time << endl;

    return 0;
}