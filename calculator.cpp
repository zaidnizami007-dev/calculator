#include<iostream>
using namespace std;
//calculator
int a;
int b;
char op;
int main(){
cout<<"enter two no.s"<<endl;
cin>>a>>b;
cout<<"Enter operator (+,-,*)"<<endl;
cin>>op;
switch(op){
    case '+':
    cout<<"Sum is"<<a+b<<endl;
    break;
    case '-':
    cout<<"Diffrence is"<<a-b<<endl;
    break;
    case '*':
    cout<<"Product is"<<a*b<<endl;
    break;
    case '/':
    cout<<"Qutiont is"<<a/b<<endl;
    break;
    default:
    cout<<"Invalid operator"<<endl;
    break;
}
return 0;
}