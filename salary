#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;

int main()
{
    double basic;
    int allow ;
    char grade ;
    
    cin >> basic ;
    cin >> grade;
    double  hra=basic*0.2;
    double da=basic*0.5;
    if(grade == 'A')
    {
      allow = 1700;
    }
     else if(grade == 'B')
     {
       allow = 1500 ;
     
     }else
     {
       allow = 1300;
     }
    double pf=basic*0.11;
  // basic = round(1.59*basic+ allow) ;
   double total =basic+hra+da+allow-pf;
   int ans=round(total);
  cout << ans ;
 
}
