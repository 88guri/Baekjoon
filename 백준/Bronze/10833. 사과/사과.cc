#include <iostream>
using namespace std;

int main()
{
    int N,sum=0;
    int studentApple[100][2];
    cin>>N;
    
    for(int i=0;i<N;i++){
        cin>>studentApple[i][0]>>studentApple[i][1];
    }
    
    //남는사과 구하기 알고리즘
    
    for(int i=0;i<N;i++){
        sum+=(studentApple[i][1]%studentApple[i][0]);
    }
    
    cout<<sum;

    return 0;
}