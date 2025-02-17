#include <iostream>
using namespace std;

int main()
{
    int T,inNum1,inNum2;
    int caseX[10000];
    
    cin>>T;
    
    for(int i=1;i<=T;i++){
        cin>>inNum1>>inNum2;
        caseX[i]=(inNum1+inNum2);
    }
    
    for(int j=1;j<=T;j++){
        cout<<"Case "<<j<<": "<<caseX[j]<<"\n";
    }
    
    return 0;
}