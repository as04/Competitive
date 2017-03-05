#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int N,Q,x,y,lastans=0,b,seq,j=0;
    cin>>N>>Q;
    vector< vector<int> > seqlist(N,vector<int>());
    while(Q--)
        {
        cin>>b>>x>>y;
        seq=((x^lastans)%N);
        if(b==1)
            {
            seqlist[seq].push_back(y);
        }
        else if(b==2)
            {
            
            lastans=seqlist[seq][y%seqlist[seq].size()];
            cout<<lastans<<endl;
        }
        
    }
  
    return 0;
}
