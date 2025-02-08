#include <iostream>
using namespace std;

int main()
{
    int n;
    string name,mName;
    string maxPlayer[100];
    
    cin>>n;
    for(int i=0;i<n;i++){
        int p=0,max=0;
        long price=0;
        
        cin>>p;
        
        for(int j=0;j<p;j++){
            cin>>price>>name;
            if(max<price){
                max=price;
                mName=name;
            }
        }
        maxPlayer[i]=mName;
    }
    
    for(int k=0;k<n;k++){
        cout<<maxPlayer[k]<<"\n";
    }

    return 0;
}