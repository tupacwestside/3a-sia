#include <iostream>
using namespace std;
int main ()
{
    int a,b;
    int quoz=0;
    cout<<"due numeri (dividendo e divisori):";
    cin>>a>>b;
    while (a>=b) {
        a -= b;
        quoz++;
    }
cout << "Quoziente = " <<quoz<<endl;
cout <<  "Resto    =     "<<a<<endl;

return 0;
}
