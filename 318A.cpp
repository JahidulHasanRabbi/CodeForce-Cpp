#include<iostream>

using namespace std;

int main()
{
    int odd[100000], even[100000];
    int n, i, oddc=1, evenc=1;
    cin >> n;

    for(i=1; i<=n; i++) {
        if(i%2 == 0) {
            even[evenc]=i;
            evenc++;
        }
        else {
            odd[oddc] = i;
            oddc++;
        }
    }

    for(i=1; i<=even.length(); i++) {
        cout << even[i];
    }

    return 0;
}