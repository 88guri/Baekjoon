#include <iostream>
using namespace std;

int main()
{
    int T,N,inputNum;
    int sumList[10];
    cin>>T;
    for(int i=0;i<T;i++){
        int sum=0;
        cin>>N;
        for(int j=0;j<N;j++){
            cin>>inputNum;
            sum+=inputNum;
        }
        sumList[i]=sum;
    }
    
    for(int k=0;k<T;k++){
        cout<<sumList[k]<<"\n";
    }

    return 0;
}