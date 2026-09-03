#include <numeric>
#include <iostream>
using namespace std;
//Here use double because it´s for 8 bytes and float it´s for 4 bytes

double operation(double a, double b, double c){return b*b-4*a*c;}
int main(){
double a;
    cout<< "Ingresa el valor de la letra a:";
    cin>> a;
double b;
    cout<< "Ingresa el valor de la letra b:";
    cin>> b;
double c;
    cout<< "Ingresa el valor de la letra c:";
    cin>> c;

cout<<"Haz ingresado estos datos:""\n" <<a << "\n" <<b << "\n" <<c;
cout<<"\n" << operation(a,b,c);

return 0;
}
