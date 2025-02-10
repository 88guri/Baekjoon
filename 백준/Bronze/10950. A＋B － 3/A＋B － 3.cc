#include <iostream>
using namespace std;

int main()
{
    int N,num,A,B;
    int sum[100];
    
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>A>>B;
        sum[i]=A+B;
    }
    
    for(int j=0;j<N;j++){
        cout<<sum[j]<<"\n";
    }
    
    return 0;
}