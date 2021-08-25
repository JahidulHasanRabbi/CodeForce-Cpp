#include<iostream>
#include<string>

using namespace std;

int main()
{
    int x, y, z;
    int n,i;
    cin >> n;

    int tx=0, ty=0, tz=0;

    for(i=0; i<n; i++)
    {
        cin >> x >> y >> z;
        tx+=x;
        ty+=y;
        tz+=z;
    }

    if(tx==0 && ty==0 && tz==0) {
        cout << "YES" << endl;
    }

    else 
        cout << "NO" << endl;

    return 0;
}