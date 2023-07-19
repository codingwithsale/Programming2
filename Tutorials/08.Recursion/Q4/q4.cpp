#include<iostream>
#include<cmath>
#include<string>
#include<ctime>
using namespace std;

int reverse(int n)
{

   if (n < 10) {
        return n;
   }

   else{
        cout<<n%10;
        return reverse(n/10);
   }
};

int main()
{
   int n=8;
   reverse(n); 
   return 0;
}