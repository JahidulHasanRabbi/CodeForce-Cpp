#include<iostream>

using namespace std;

int main()
{
    int n,pro1, pro2, pro3, i, j, total=0, solve=0;
    cin >> n;

    for(i=1; i<=n; i++) {
        cin >> pro1 >> pro2 >> pro3;
        total= (pro1+pro2+pro3);

        if(total > 1) {
            ++solve;
        }
    }
    cout << solve << endl;
    return 0;
}