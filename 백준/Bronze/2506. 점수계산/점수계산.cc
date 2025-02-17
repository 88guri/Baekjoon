#include <iostream>
using namespace std;

int main()
{
    int N,inNum,sum=0,score=0;
    bool sequence=0;
    
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>inNum;
        if(inNum==1){
            score++;
            sum+=score;
        }
        else{
            score=0;
        }
    }
    
    cout<<sum<<endl;
    
    return 0;
}