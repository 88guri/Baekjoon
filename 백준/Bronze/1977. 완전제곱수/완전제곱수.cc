#include <iostream>
using namespace std;

int main() {
    int M,N;
    int sum=0, minNum=-1;
    
    cin>>M>>N;
    
    for(int i=M; i<=N; i++){
        for(int j=1;j<=N;j++){
            if(j*j==i){
                sum+=i;
                if(minNum==-1){
                    minNum=i;
                }
                else if(i<minNum){
                    minNum=i;
                }
            }
        }
    }
    
    if(minNum!=-1){
        cout<<sum<<"\n"<<minNum<<endl;
    }
    else{
        cout<<minNum<<endl;
    }
    return 0;
}
