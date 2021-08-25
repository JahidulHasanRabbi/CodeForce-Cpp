#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int p[3];

    for(int i=0; i<3; i++) {
        cin >> p[i];
    }

    sort(p, p+3);

    int ans=0;
    int i=0;
    int count=0;

    while(ans!=n)
    {
        ans+=p[i];
        count++;
        i++;
    }

    cout << count << endl;

    return 0;
}