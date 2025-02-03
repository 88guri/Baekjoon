#include <iostream>
using namespace std;

int main()
{
    int num,maxNum=0,listNum=1,where=0;
    
    for(int i=1;i<=9;i++){
        cin>>num;
        if(num>maxNum){
            maxNum=num;
            where=listNum;
        }
        listNum++;
    }
    
    cout<<maxNum<<"\n"<<where;
    return 0;
}