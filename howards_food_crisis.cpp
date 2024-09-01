#include<bits/stdc++.h>
using namespace std;

void howards_food_crisis(int x, int y, int m, int n){
    int days=0;
    for (int i = 0; x>n && y>=n; i++)
    {
        x = x - m;
        y = y - n;
        days += 1;
    }
    cout<<days<<endl;
}

int main()
{
    int no;
    int x,y;
    int m,n;
    int days=0;

    cin>>no;

    while(no != 0){
        cin>>x>>y;
        cin>>m>>n;
        howards_food_crisis(x,y,m,n);
        no--;
    }
    
    
    return 0;
}