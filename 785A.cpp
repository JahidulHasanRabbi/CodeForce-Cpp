#include<iostream>

using namespace std;

int main()
{
    int n;
    string word;
    string b="Tetrahedron", c="Cube", d="Octahedron";
    string e="Dodecahedron", f="Icosahedron";
    cin >> n;
    int i, count=0;

    for(i=0; i<n; i++) {
        cin >> word;
        if(word == b) {
            count+=4;
        }
        if(word == c) {
            count+=6;
        }
        if(word == d) {
            count+=8;
        }
        if(word == e) {
            count+=12;
        }
        if(word == f) {
            count+=20;
        }

    }

    cout << count << endl;

    return 0;
}