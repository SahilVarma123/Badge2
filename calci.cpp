#include<iostream>
using namespace std ;
int main()
{
    char op;
    float num1,num2;
    
    cout<<"Enter the operand: +,-,*,/ ";
    cin>>op;
    
    cout<<"Enter two operands: ";
    cin>>num1>>num2;
    
    switch(op)
    {
        case'+':
        cout<<num1<<" + "<<num2<<" = "<<num1 + num2;
        break;
        
        case'-':
        cout<<num1<<" - "<<num2<<" = "<<num1 - num2;
        break;
        
        case'*':
        cout<<num1<<" * "<<num2<<" = "<<num1 * num2;
        break;
        
        case'/':
        cout<<num1<<" / "<<num2<<" = "<<num1 / num2;
        break;
        
        default:
        //if the operator is other than: +,-,*,/, then the error message is shown;
        cout<<"Error! the operator is not correct";
    }
return 0;
}
