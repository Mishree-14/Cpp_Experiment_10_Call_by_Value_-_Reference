//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

void swap (int&a,int&b){
    int c = a;
    a=b;
    b = c;
}

int main() {
    int x= 11;
    int y = 24;
    
    cout<<"Value of original X: "<<x<<endl;
    cout<<"Value of original Y: "<<y<<endl;
    cout<<"\n"<<"---After swapping---"<<"\n";
    
    swap (x,y);
    cout<<"\n"<<"Value of X: "<<x<<endl;
    cout<<"Value of Y: "<<y<<endl;
    
    return 0;
}

# OUTPUT:

Value of original X: 11
Value of original Y: 24

---After swapping---

Value of X: 24
Value of Y: 11
