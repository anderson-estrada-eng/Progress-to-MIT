#include <numeric>
#include <iostream>
using namespace std;
//Here use double because it´s for 8 bytes and float it´s for 4 bytes

double operation(double a, double b, double c){return b*b-4*a*c;}
int main(){
double a;
    cout<< "Enter the value of the letter a:";
    cin>> a;
double b;
    cout<< "Enter the value of the letter b:";
    cin>> b;
double c;
    cout<< "Enter the value of the letter c:";
    cin>> c;

cout<<"You have entered this information:""\n" <<a << "\n" <<b << "\n" <<c;
cout<<"\n" << "The result is:" << operation(a,b,c);

return 0;
}
