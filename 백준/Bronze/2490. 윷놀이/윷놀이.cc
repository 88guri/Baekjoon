#include <iostream>
using namespace std;

int main()
{
    int yutnori[3][4];
    char yutnoriName[3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
           cin>>yutnori[i][j];
        }
    }
    
    for(int i=0;i<3;i++){
        int zero=0,one=0;
        
        for(int j=0;j<4;j++){
            if(yutnori[i][j]==0){
                zero++;
            }
            else{
                one++;
            }
        }
        if(zero==1&&one==3){
            yutnoriName[i]='A';
        }
        else if(zero==2&&one==2){
            yutnoriName[i]='B';
        }
        else if(zero==3&&one==1){
            yutnoriName[i]='C';
        }
        else if(zero==4&&one==0){
            yutnoriName[i]='D';
        }
        else if(zero==0&&one==4){
            yutnoriName[i]='E';
        }
    }
    
    for(int i=0;i<3;i++){
        cout<<yutnoriName[i]<<"\n";
    }

    return 0;
}