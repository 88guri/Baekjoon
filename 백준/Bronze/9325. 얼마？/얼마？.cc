#include <iostream>
using namespace std;
int main()
{
    int cases,s,n,p,q;
    int cost[1000];
    
    cin>>cases;
    
    for(int i=0;i<cases;i++){
        cin>>s;
        cost[i]+=s;
        
        cin>>n;
        
        if(n!=0){
            for(int j=0;j<n;j++){
                cin>>p>>q;
                
                cost[i]+=(p*q);
            }
        }
    }
    
    for(int i=0;i<cases;i++){
        cout<<cost[i]<<"\n";
    }

    return 0;
}