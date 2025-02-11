#include <iostream>
using namespace std;

int main()
{
    int N,sum=0,cost;
    
    cin>>N;
    
    for(int i=0;i<9;i++){
        cin>>cost;
        sum+=cost;
    }
    
    cout<<N-sum;

    return 0;
}