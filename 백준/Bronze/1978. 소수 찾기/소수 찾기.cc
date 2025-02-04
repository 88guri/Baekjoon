#include <iostream>
using namespace std;

bool isPrimeNum(int num){
    if(num<2){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
    
int main()
{
    int N,allNum,primeNum=0;
    
    cin>>N;
    for(int i=1;i<=N;i++){
        cin>>allNum;
        if(isPrimeNum(allNum)){
            primeNum++;
        }
        
    }
    
    cout<<primeNum;
    
    return 0;
}