#include <iostream>
using namespace std;

int main(){
    int jum;
    long n, total=0;

    cin>>jum;

    for (int i = 0; i < jum; i++){
        cin>>n;
        total += n;
    }
    
    cout<<total<<endl;
    
}
