#include <bits/stdc++.h>
using namespace std;

int main(){

   string s;

    while(getline(cin, s)){

        string word; 
        for (char ch:s) {
            if (ch!=' ') {  
                word += ch;  
            }
        }
        
        sort(word.begin(), word.end());

        cout << word << endl;

    }
}