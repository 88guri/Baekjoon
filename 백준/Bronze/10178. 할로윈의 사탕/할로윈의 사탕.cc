#include <iostream>
using namespace std;

int main()
{
    int allCase;
    int testCase[1000][2];
    
    cin>>allCase;
    
    for(int i=0;i<allCase;i++){
        cin>>testCase[i][0]>>testCase[i][1];
    }
    
    for(int i=0;i<allCase;i++){
        cout<<"You get "<<testCase[i][0]/testCase[i][1]
        <<" piece(s) and your dad gets "
        <<testCase[i][0] % testCase[i][1]
        <<" piece(s)."<<"\n";
    }

    return 0;
}