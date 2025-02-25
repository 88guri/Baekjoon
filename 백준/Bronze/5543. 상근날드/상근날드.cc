#include <iostream>
using namespace std;

int main()
{
    int sangduck,jungduck,haduck,coke,sprite,minNum;
    
    cin>>sangduck>>jungduck>>haduck>>coke>>sprite;
    
    sangduck=min((sangduck+coke-50),(sangduck+sprite-50));
    jungduck=min((jungduck+coke-50),(jungduck+sprite-50));
    haduck=min((haduck+coke-50),(haduck+sprite-50));
    
    minNum = min(sangduck, min(jungduck, haduck));
    
    cout<<minNum;
    
    return 0;
}