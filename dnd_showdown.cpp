#include<bits/stdc++.h>
using namespace std;

void dnd_showdown(int n, vector<int> vc){
    int pairs=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<=j){
                // cout<<vc[i]<<" "<<vc[j]<<endl;
            if(((vc[i]+vc[j]) % 2) != 0){
                // cout<<vc[i]<<" "<<vc[j]<<endl;
                pairs++;
            }
            }
            
        }
        
    }
    cout<<pairs<<endl;
}

int main()
{
    int n;

    cin>>n;
    vector<int> vc(n);

    for(auto it = vc.begin(); it != vc.end(); it++){
        cin>>*it;
    }
    
    dnd_showdown(n, vc);
    return 0;
}