#include <iostream>
using namespace std;

int main()
{
    int train[3][11];
    int nowHu=0, maxHu=0;
    
    for (int j=1; j<11; j++) {
        for (int i=1;i<3;i++){
            cin>>train[i][j];
        }
    }
    
    for (int j=1;j<11;j++){
        nowHu =train[2][j]-train[1][j]+nowHu;
            if(nowHu>maxHu){
                maxHu=nowHu;
            }
    }
    
    cout<<maxHu;
    

    return 0;
}