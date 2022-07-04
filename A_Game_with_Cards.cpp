#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
void solve()
{
    int n,m;

    vector<int> alice;
    vector<int> bob;
    cin>>n;
    int ele;
    for(int i=0;i<n;i++){
        cin>>ele;
        alice.push_back(ele);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>ele;
        bob.push_back(ele);
    }
    int max_alice=*max_element(alice.begin(), alice.end());
    int max_bob=*max_element(bob.begin(), bob.end());
    int curr_card;
    curr_card=max_alice;
     bool aturn=true;
    if(curr_card>max_bob){
        cout<<"Alice"<<endl;
    }
    if(curr_card==max_bob && aturn==true)
    {
        cout<<"Alice"<<endl;
    }
    if(curr_card<max_bob){
        cout<<"Bob"<<endl;
    }
    bool bturn=true;
    curr_card=max_bob;
    if(curr_card>max_alice){
        cout<<"Bob"<<endl;
    }
     if(curr_card<max_alice){
        cout<<"Alice"<<endl;
    }
    if(curr_card==max_alice && bturn==true)
    {
        cout<<"Bob"<<endl;
    }
    


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