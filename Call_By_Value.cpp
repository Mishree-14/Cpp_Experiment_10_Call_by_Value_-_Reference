//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

void swap(int a, int b){
    int swap;
    swap = a;
    a=b;
    b = swap;
}

int main() {
    int x= 47;
    int y = 80;
    
    cout<<"Value of original X: "<<x<<endl;
    cout<<"Value of original Y: "<<y<<endl;
    cout<<"\n"<<"---After swapping---"<<"\n";
    
    swap (x,y);
    cout<<"\n"<<"Value of X: "<<x<<endl;
    cout<<"Value of Y: "<<y<<endl;
    
    return 0;
}        

# OUTPUT: 

Value of original X: 47
Value of original Y: 80

---After swapping---

Value of X: 47
Value of Y: 80
