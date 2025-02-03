#include <iostream>
using namespace std;

int main()
{
    int num;
    float sum=0,average=0,maxNum=0;
    
    cin>>num;
    float list[1000];
    
    for(int i=0; i<num;i++){
        cin>>list[i];
        if(list[i]>maxNum){
            maxNum=list[i];
        }
    }
    
    for(int i=0;i<num;i++){
        list[i]=list[i]/maxNum*100;
        sum+=list[i];
    }
    
    cout<<sum/num;
    return 0;
}