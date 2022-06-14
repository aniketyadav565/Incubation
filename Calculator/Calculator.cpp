#include<iostream>
using namespace std;
int main(){
    cout<< "\n\t\t\t***>>Calculator<<***"<<endl;
    cout<< "Choose any operation\n\t1. Addition\n\t2. Substraction\n\t3. Multiplication\n\t4. Division"<<endl;
    char op;
    cin>> op;
    switch (op)
    {
    case '1':{
        cout<<"Enter no of values you want to add"<<endl;
        int n;
        cin>>n;
        long double sum=0;
        long double val;
        cout<<"Enter values to add"<<endl;
        for(int i=0;i<n;i++){
            cin>>val;
            sum+=val;
        }
        cout<<"Sum = "<<sum<<endl;
        break;
    }
    case '2':{
        cout<<"Enter values"<<endl;
        long double a;
        long double b;
        cin>>a;
        cin>>b;
        cout<<"Differance = "<<(double)a-b<<endl;
    }
    case '3':{
        cout<<"Enter values"<<endl;
        long double a1;
        long double b1; 
        cin>>a1;
        cin>>b1;
        cout<<"Multiplication = "<<(double)a1*b1<<endl;
    }
    case '4':{
        cout<<"Enter values"<<endl;
        long double p;
        long double q;
        cin>>p;
        cin>>q;
        cout<<"Division = "<<(double)p/q<<endl;
    }
    default:
    cout<<"Invalid Input";
        break;
    }
    return 0;
}