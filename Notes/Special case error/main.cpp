#include <iostream>

using namespace std;
int main()
{
    double d,p;
    d=0;
    p=0;
    d++,p--;//no error
    //double i = 0,int d = 0;//error
    
    /*
    for (int i = 0, double d = 0.0; i < 10; i++)
    {
      d += .4;
      cout << d << endl;
    }//hence error
    */
    
    for (double i = 0, d = 0; i < 10; i++)
    {
      d +=1;
      cout << d << endl;
    }

    return 0;
}
