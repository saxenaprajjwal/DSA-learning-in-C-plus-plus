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
   cout << "sum = " << digSum1;  
   return 0 ;
 }