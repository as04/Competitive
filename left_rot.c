#include <bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,n,d,temp,j,ele;
    vector<int> a;
    cin>>n>>d;
    for(i=0;i<n;i++)
       {
        cin>>ele;
        a.push_back(ele);
    }
     for(i=0;i<d;i++)
         {
         temp=a[0];
         for(j=0;j<n-1;j++)
             {
             a[j]=a[j+1];
            }
         a[j]=temp;
     }
    for(i=0;i<n;i++)
       {
        cout<<a[i];
    }
    
    return 0;
}
