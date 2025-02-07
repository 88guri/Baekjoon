#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int T,N;
    float C,G;
    float gpa[10][2];
    
    cin>>T;
    
    for(int i=0;i<T;i++){
        float cSum=0,gSum=0;
        
        cin>>N;
        
        for(int j=0;j<N;j++){
            cin>>C>>G;
            cSum+=C;
            gSum+=C*G;
        }
        gpa[i][0]=cSum;
        gpa[i][1]=gSum/cSum;
    }
    
    for(int j=0;j<T;j++){
        cout<<fixed << setprecision(0)<<gpa[j][0]
        <<" "<<fixed << setprecision(1)<<gpa[j][1]<<"\n";
    }

    return 0;
}