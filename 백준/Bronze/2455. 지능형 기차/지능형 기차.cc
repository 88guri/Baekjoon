#include <iostream>
using namespace std;

int main()
{
    int train[2][4];
    int nowHu=0,maxHu=0;
    
    for(int j=0;j<4;j++){
        for(int i=0;i<2;i++){
            cin>>train[i][j];
        }
    }
    
    for(int j=0;j<4;j++){
        nowHu=train[1][j]-train[0][j]+nowHu;
        if(nowHu>maxHu){
            maxHu=nowHu;
        }
    }
    
    cout<<maxHu;
    

    return 0;
}