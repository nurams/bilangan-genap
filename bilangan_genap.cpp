#include <iostream>
using namespace std;

int main() 
{
    int a = 1;
    int b = 20;
    int c;
    int d;
    c=a;
    cout << "HITUNG MAJU"<<endl;
    while (c<=b){
          if(c%2==0)cout<<" "<<c<<endl;
          c++;
        }
        d=c;
    cout << "HITUNG MUNDUR"<<endl;
    while (d>=a){
          if(d%2==0)cout<<" "<<d<<endl;
          d--;
        }
}
