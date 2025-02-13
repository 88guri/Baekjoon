#include <iostream>
using namespace std;

int main()
{
    int N,factorial=1;
    cin>>N;
    
    for(int i=N;i>=1;i--){
        factorial*=i;
    }
    
    cout<<factorial;

    return 0;
}