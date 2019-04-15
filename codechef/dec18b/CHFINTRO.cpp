#include<iostream>
using namespace std;
int main()
{
    int N,r;
    cin>>N>>r;
    while(N!=0)
    {
        int k;
        cin>>k;
        if(k>=r)
        {
            cout<<"Good boi"<<endl;
        }
        else
        {
            cout<<"Bad boi"<<endl;
        }
        N--;
    }
    return 0;
}
