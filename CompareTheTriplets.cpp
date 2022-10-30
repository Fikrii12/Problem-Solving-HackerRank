#include <iostream>
using namespace std;

int main(){
    int a[3], b[3], pointA=0, pointB=0;

    for (int i=0; i<3; i++){
        cin>>a[i];
    }

    for (int i=0; i<3; i++){
        cin>>b[i];
    }

    for (int i=0; i<3; i++){
        if(a[i] > b[i]){
            pointA++;
        }
        if(b[i] > a[i]){
            pointB++;
        }
    }

    cout<<pointA<<" "<<pointB<<endl;
    
}