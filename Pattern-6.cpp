#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0; i<n; i++)
    {
        for(int j = n-i-1; j>0; j--) cout<<" ";
        int k = (i+1)*2-1;
        for(int j = 0; j<(i+1)*2-1; j++) cout<<k--;
        cout<<endl;
    }
}   
