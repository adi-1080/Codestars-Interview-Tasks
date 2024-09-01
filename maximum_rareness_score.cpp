#include<bits/stdc++.h>
using namespace std;

void maximum_rareness_score(int n, int k, vector<int> vc){
    
    vector<int> rarity_scores(n,0);
    for(int i=0; i<=n-k; i++){
        int sum=0;
        for(int j=i; j<i+k; j++){
            sum = sum + vc[j];
            rarity_scores.push_back(sum);
        }
    }
    int max = rarity_scores[0];
    for (int i = 0; i < rarity_scores.size(); i++)
    {
        if(rarity_scores[i] > max){
            max = rarity_scores[i];
        }
    }
    
    cout<<max<<endl;
}

int main()
{
    int n,k;

    cin>>n>>k;

    vector<int> vc(n);

    for(auto it = vc.begin(); it != vc.end(); it++){
        cin>>*it;
    }
    maximum_rareness_score(n,k,vc);

    return 0;
}