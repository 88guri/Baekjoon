#include <iostream>
using namespace std;

int main()
{
    int A,B;
    
    cin>>A>>B;
    
    cout<<A*(B%10)<<"\n"
    <<A*((B/10)%10)<<"\n"
    <<A*(B/100)<<"\n"
    <<A*B;
    
    return 0;
}