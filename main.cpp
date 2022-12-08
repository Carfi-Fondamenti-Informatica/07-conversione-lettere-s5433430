#include <iostream>
using namespace std;
#include "lib.h"

int main() {
    char a;
    bool t;
cin>>a;

t= conversione(a);
if(t== true){
    cout<<a<<endl;
}
else{
    cout<<"errore"<<endl;
}
    return 0;
}

