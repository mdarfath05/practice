#include<bits/stdc++.h>
using namespace std;

 int main()
{
    cout << "enter srting";
    string s;
    cin >> s;

     // precompute
    int hash[26]={0}; //agar capital ki small ki ny mlm kato size256 lele wo total characters
    for(int i=0;i<s.size();i++) //kali upper case alphabets kato same logic char..-'A'
    {
        hash[s[i]-'a']++;  //ya minus a karne ki zarurat ny 
    }

    int q;
    cout <<"enter q";
    cin >> q;
    while(q--)
    {
        char ch; //imporatant char
        cout <<"enter ch";
        cin >> ch;
       //fetch
        cout << hash[ch-'a'] <<endl; //ya b 
    }
    return 0;
}