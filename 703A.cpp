#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    int Win_a = 0;
    int Win_b = 0;
    int draw = 0;
    for(int i=0; i<n; i++) {

        int a, b;
        cin >> a >> b;
        if(a == b) {
            draw++;
        }
        else if(a>b) {
            Win_a++;
        }
        else {
            Win_b++;
        }
    }

    if(Win_a == Win_b) {
        cout << "Friendship is magic!^^" << endl;
    }
    else if (Win_a > Win_b) {
        cout << "Mishka" << endl;
    }
    else {
        cout << "Chris" << endl;
    }

    return 0;
}