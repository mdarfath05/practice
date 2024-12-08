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
      cin >>arr[i];
    }
     
     // precompute
    int hash[13]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]] += 1;  //array me wo number hash me wo index ..wo index +1 hojatai jab repeat hotai
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
        cout << hash[num] <<endl;
    }
    return 0;
}