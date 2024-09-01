#include<bits/stdc++.h>
using namespace std;

void oneSetBit(int n){
    if(n==0)
        cout<<"NO"<<endl;
    else if(ceil(log2(n)) == floor(log2(n)))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

int main()
{
    int no;

    int n;

    cin>>no;

    while(no != 0){
        cin>>n;
        oneSetBit(n);
        no--;
    }
    return 0;
}