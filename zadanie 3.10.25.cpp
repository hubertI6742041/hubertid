/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int Fib(int n){
if(n==1 || n==2){
    return 1;
}else{
return Fib(n-1)+Fib(n-2);
}

}
int main()
{
cout << "podaj n" <<endl;
 int n;
 cin>>n;
cout <<endl;

cout << Fib(n);
    return 0;
}
