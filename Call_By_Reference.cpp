//Mishree Kalaria
//24070123052
//Batch: A2

#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int swap;
    swap = *a;
    *a=*b;
    *b = swap;
}

int main() {
    int x= 500;
    int y = 400;
    
    cout<<"Value of original X: "<<x<<endl;
    cout<<"Value of original Y: "<<y<<endl;
    cout<<"\n"<<"---After swapping---"<<"\n";
    
    swap (&x,&y);
    cout<<"\n"<<"Value of X: "<<x<<endl;
    cout<<"Value of Y: "<<y<<endl;
    
    return 0;
}  

# Ouput:

Value of original X: 500
Value of original Y: 400

---After swapping---

Value of X: 400
Value of Y: 500
