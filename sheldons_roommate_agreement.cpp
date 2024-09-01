#include<bits/stdc++.h>
using namespace std;

void sheldons_roommate_agreement(int n, int k, vector<int> vc){
    int count=0;
    int sum=0;
    sort(vc.begin(),vc.end());
    for (int i = 0; i < n; i++)
    {
        sum = sum + vc[i];
        if(sum>k){
            break;
        }
        count++;
    }
    cout<<count<<endl;
}

int main()
{
    int no;
    cin>>no;

    int n,k;

    
    while(no!=0){
        cin>>n>>k;
        vector<int> vc(n);
        for(auto it = vc.begin(); it != vc.end(); it++){
        cin>>*it;
    }
    sheldons_roommate_agreement(n,k,vc);
    no--;
    }
    return 0;
}