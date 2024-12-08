#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout << "enter size";
    int n;
    cin >> n;

    int arr[n];
    cout << "enter elemrnts";
    for(int i=0;i<n;i++)
    {
      cin >>arr[i]; //honato precomputing ya b kareja mapp declare karko yach increment b horek loop ki zarurat ny
    }
     
     // precompute
    map<int,int>mpp;
    for(int i=0;i<n;i++)
    {
      mpp[arr[i]] += 1;  //array me wo number hash me wo index ..wo index +1 hojatai jab repeat hotai
    }

    for(auto it:mpp)
    {
        cout << it.first <<"->" <<it.second <<endl;
    }

    int q;
    cout <<"enter q";
    cin >> q;
    while(q--)
    {
        int num;
        cout <<"enter num";
        cin >> num;
       //fetch
        cout << mpp[num] <<endl;
    }
    return 0;
}