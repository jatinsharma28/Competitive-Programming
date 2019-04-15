#include<bits/stdc++.h>
#include<string>
using namespace std;
const int MAX_CHAR = 26;
void commonCharacters(string str[], int n)
{

    int coumt=0;
    bool prim[MAX_CHAR];
    memset(prim, true, sizeof(prim));


    for (int i = 0; i < n; i++) {


        bool sec[MAX_CHAR] = { false };


        for (int j = 0; str[i][j]; j++) {

            if (prim[str[i][j] - 'a'])
                sec[str[i][j] - 'a'] = true;
        }

        memcpy(prim, sec, MAX_CHAR);
    }
    for (int i = 0; i < 26; i++)
        if (prim[i])
            coumt++;

cout<<coumt<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t!=0)
    {
        int n=0;
        cin>>n;
        string d[n];
        string small;
        int len[n];
        int s=n;;
        for(int i=0;i<n;i++)
        {
            cin>>d[i];


        }
commonCharacters(d, n);
 t--;
    }
return 0;
}
