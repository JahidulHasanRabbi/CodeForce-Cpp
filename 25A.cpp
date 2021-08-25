#include<iostream>

using namespace std;

int main()
{
    int n, num[100];
    cin >> n;
    int i, even=0, odd=0;
    int evenn, oddd;

    for(i=1; i<=n; i++) {
        cin >> num[i];
    }

    for(i=1; i<=n; i++) {
        if(num[i]%2 == 0) {
            evenn=i;
            even++;
        }
        else {
            oddd=i;
            odd++;
        }
    }

    if(even == 1) {
        cout << evenn << endl;
    }
    else if (odd == 1) {
        cout << oddd << endl;
    }
    
    return 0;
}