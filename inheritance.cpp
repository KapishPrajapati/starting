#include<iostream>
using namespace std; 

class add{
    
    public:
    int  adding(int a,int b){
        return a+b;
    }

    int adding(int a, int b, int c){
        return a+b+c;
    }

    int adding(double a, double b){
        return a+b;
    }
};



int main(){
    add add1;
    cout<<add1.adding(3,4)<<endl;
    cout<<add1.adding(3,4,5)<<endl;
    cout<<add1.adding(2.5,3.8)<<endl;

    return 0;
}
