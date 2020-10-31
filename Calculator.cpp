#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

unsigned int factorial(int a) {
         int r=1;
         for (int i=a;i>0;i--) r*=i;
         return r;
}

int main () {
    double a,b,r,memory=0;
    char op, choice[10];

    cout<<"+ to add, - to subtract, * to multiply, / to divide, \
^ to power, ! to factorial\n\n";
    start: 

    cin>>a; 
    reused: 
    cin>>op; 
    
    if (op=='!') r=factorial(a); 
    else {
         cin>>b;
         if (op=='+') r=a+b;
         if (op=='-') r=a-b;
         if (op=='*') r=a*b;
         if (op=='/') r=a/b;
         if (op=='^') r=pow(a,b);
         }
   
    cout<<"="<<r<<endl;

    
    cout<<"\nType 'mi' to insert the number into memory, or 'mc' to clear memory\n";
    cin>>choice;
    if (!strcmp(choice,"mi")) memory=r; 
    else if (!strcmp(choice,"mc")) memory=0; 
    else cout<<"command unknown, program will go on\n"; 

    
    cout<<"\nType 'restart' to start again from the beggining, \
'reuse' to use the result, \n'mr' to reuse the number \
in the memory, or 'quit' to quit: ";
    cin>>choice; 
    if (!strcmp(choice,"restart")) goto start; 
    if (!strcmp(choice,"reuse")) { a=r; cout<<a; } 
    if (!strcmp(choice,"reuse")) goto reused; 
    if (!strcmp(choice,"quit")) goto end; 
    if (!strcmp(choice,"mr")) { a=memory; cout<<a; } 
    if (!strcmp(choice,"mr")) goto reused; 
    getchar();
    end: 
    return 0;
}
