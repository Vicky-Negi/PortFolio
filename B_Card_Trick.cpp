#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
void solve()
{
    int n,m;

    vector<int> cards;
    vector<int> swaps;
    cin>>n;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        cards.push_back(ele);
    }
    cin>>m;
    int sum=0;
    for(int i=0;i<m;i++){
        cin>>ele;
        sum=(sum+ele)%cards.size();
        swaps.push_back(ele);
    }
    cout<<cards[sum]<<endl;
    
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        solve();
    }
}