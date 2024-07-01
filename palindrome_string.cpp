#include<iostream>
using namespace std;

int main()
{
    int n;
    string S[];
    cin>>S;

    int L =0;
    int R=n-1;
    while(L<=R)
    {
        if(S[L]!=S[R])
        {
            flag=false;
            break;
            L++;
            R--;
            
        }
    }
    return 0;
}