#include <iostream>
 using namespace std;
 int main(){ 
    
// print the sum of digits of a number using while loop  (n= 10829)

   int n = 10829;
   int digSum = 0;                          // n % 10 gives you the last digit of n. Example: If n = 10829, then n % 10 is 9.   
                                            // n / 10 removes the last digit from n. Example: If n = 10829, then n / 10 is 1082.
   while (n > 0){
      int lastdig = n % 10;
      cout << lastdig << " ";
      digSum = digSum + lastdig;
      n =  n / 10;
   }
   cout << endl; 
   cout << "sum = " << digSum << endl; 

// print the sum of odd digits of a number using while loop 

   int n1 = 10829;
   int digSum1 = 0;
   
   while (n1 > 0){
      int lastdig1 = n1 % 10;
      if(lastdig1 % 2 != 0){
            digSum1 += lastdig1;
      }
      n1 =  n1 / 10;
   }
   cout << "sum = " << digSum1 << endl;  


// print the digits of a given no in reverse using while loop
 
   int n2 = 12345;
   int lastdig2;
      while(n2 > 0){
         lastdig2 = n2 % 10;
         n2 = n2 /10;
         cout << lastdig2;
      }
         cout << endl;

// reverse a given number and print the result 
 
      int n3 = 123456;
      int res = 0;
      int lastdig3;
      while(n3 > 0){
         lastdig3 = n3 % 10;
         res = res * 10 + lastdig3;
         n3 = n3 / 10;
      }
         cout << "revrese = " << res << endl;

   return 0 ;
 }