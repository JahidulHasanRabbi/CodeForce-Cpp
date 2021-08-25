#include<iostream>
#include<string>
using namespace std;

int main()
{
    string word;
    cin >> word;

    for(int i=0; i<word.size(); i++) {
        char lower=tolower(word[i]);
        
        if(lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u' || lower == 'y')
            continue;
        
        else 
            cout << "." << lower;
    }

    return 0;
}