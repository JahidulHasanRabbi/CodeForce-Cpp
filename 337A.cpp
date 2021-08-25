#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int s, p, pu[1000];
    cin >> s >> p;

    int i;
    for(i=0; i<p; i++) {
        cin >> pu[i];
    }

    sort(pu, pu+(s-1));

    int sum=(pu[s-1]-pu[0]);

    if(sum == 1) {
        cout << "0" << endl;
        return 0;
    }

    cout << sum << endl;

    return 0;
}