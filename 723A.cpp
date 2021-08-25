#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int x[3];
    
    for(int i=0; i<3; i++) {
        cin >> x[i];
    }

    sort(x, x+3);

    int a = x[1] - x[0];
    int b = x[2] - x[1];
    int d = a+b;

    cout << d << endl;

    return 0;
}