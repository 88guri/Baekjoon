#include <iostream>
using namespace std;

int main()
{
    int N,X,inNum,count=0;
    int num[10000];
    cin>>N>>X;
    for(int i=0;i<N;i++){
        cin>>inNum;
        if(inNum<X){
            num[count]=inNum;
            count++;
        }
    }
    
    for(int j=0;j<count;j++){
        cout<<num[j]<<" ";
    }
    

    return 0;
}