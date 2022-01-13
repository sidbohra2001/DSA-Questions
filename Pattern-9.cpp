#include<iostream>
using namespace std;
int main()
{
    int n = 5;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<i; j++) cout<<" ";
        for(int j = n-i; j>0; j--)
        {   
            if(j==n-i)
                cout<<char(64+n-i);
            else
                cout<<' ';
        }
        for(int j = n-i; j>1; j--)
        {  
             if(j==2)
                cout<<char(64+n-i);
            else
                cout<<' ';
        }
        cout<<endl;
    }
}
