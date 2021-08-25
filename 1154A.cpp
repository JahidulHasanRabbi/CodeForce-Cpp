#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ve[4];

    for(int i=0; i<4; i++) {
        cin >> ve[i];
    }

    sort(ve, ve+4);

    int d=ve[3];
    int a=d-ve[0];
    int b=d-ve[1];
    int c=d-ve[2];

    cout << a << " " << b << " " << c << endl;155

    return 0;
}