#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<char> vec = {'a','b','c'};
    for(char i : vec)
    {
    cout << i <<endl;
    }

    cout<< "size ="<<vec.size()<<endl;
    return 0;

}