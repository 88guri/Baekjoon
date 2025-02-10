#include <iostream>
using namespace std;

int main()
{
    int A,B;
    int sum[100];
    int count=0;
    
    for(int i=0;i<100;i++){
        cin>>A>>B;
        if(A==0&&B==0){
            break;
        }
        sum[i]=A+B;
        count++;
    }
    
    for(int j=0;j<count;j++){
        cout<<sum[j]<<"\n";
    }
    
    return 0;
}