#include<iostream>

using namespace std;

int main()
{
    int bear1, bear2, count=0;;
    cin >> bear1 >> bear2;

    while(bear1 < bear2+1)
    {
        bear1=(3*bear1);
        bear2=(2*bear2);
        ++count;
    }
    cout << count << endl;

    return 0;
}
