#include <iostream>
using namespace std;

int main()
{
    int min=0, sum=0, num;
    
    for(int i=0;i<7;i++){
        cin>>num;
        
        if((num%2)!=0){
            sum+=num;
            if(min==0){
                min=num;
            }
            else if(num<min){
                min=num;
            }
        }
    }
    
    if(min==0){
        cout<<-1;
    }
        
    else{
        cout<<sum<<"\n"<<min;
    }

    return 0;
}