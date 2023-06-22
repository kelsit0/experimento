#include<iostream>


int suma(int,int);
int resta(int,int);
int multp(int, int);
int division(int,int);

using namespace std;
int main(){
    char opt;
    int a=0,b=0;
    do{
        cout<<"1)Suma"<<endl;
        cout<<"2)Resta"<<endl;
        cout<<"3)Multp"<<endl;
        cout<<"4)Div"<<endl;
        cout<<"s)Salir"<<endl;
        cout<<endl;
        cin>>opt;
            switch(opt){
            case '1':
                cout<<"Ingresa el 1er num"<<endl;
                cin>>a;
                cout<<"Ingresa el 2do num"<<endl;
                cin>>b;
                cout<<"resultado: "<<suma(a,b);
                cout<<endl;
                break;
            case '2':
                break;
            case '3':
                break;
            case '4':
                break;
        }
    }while(opt!='s');
    return 0;
}

int suma(int a, int b){
    return a+b;
}

int resta(int a, int b){
    return a-b;
}

int multp(int a, int b){
    return a*b;
}

int division(int a,int b){
    return a/b;
}
