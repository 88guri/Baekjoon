#include <iostream>
using namespace std;

int main()
{
    int N,illegal=0;
    int carNum[5];
    
    cin>>N;
    
    for(int i=0;i<5;i++){
        cin>>carNum[i];
        if(carNum[i]==N){
            illegal+=1;
        }
    }
    
    cout<<illegal;

    return 0;
}