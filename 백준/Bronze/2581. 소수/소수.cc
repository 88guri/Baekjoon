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
    int M,N,sum=0,min=-1;
    
    cin>>M>>N;
    
    for(int i=M;i<=N;i++){
        if(isPrimeNum(i)){
            sum+=i;
            if(min==-1){
                min=i;
            }
            else if(min>i){
                min=i;
            }
        }
    }
    
    if(min==-1){
        cout<<min;
    }
    else{
        cout<<sum<<"\n"<<min;
    }

    return 0;
}