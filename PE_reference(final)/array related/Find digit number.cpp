// numbers whose sum of digits equals to given sum 
#include <bits/stdc++.h> 
using namespace std; 
  
// Recursive function to print all n-digit numbers 
// whose sum of digits equals to given sum 
  
// n, sum --> value of inputs 
// out --> output array 
// index --> index of next digit to be filled in 
//           output array 
void findNDigitNumsUtil(int n, int sum, char* out, 
                        int index) 
{ 
    // Base case 
    if (index > n || sum < 0) 
        return; 
  
    // If number becomes N-digit 
    if (index == n) 
    { 
        // if sum of its digits is equal to given sum, 
        // print it 
        if(sum == 0) 
        { 
            out[index] = '\0'; 
            cout << out << " "; 
        } 
        return; 
    } 
  
    // Traverse through every digit. Note that 
    // here we're considering leading 0's as digits 
    for (int i = 0; i <= 9; i++) 
    { 
        // append current digit to number 
        out[index] = i + '0'; 
  
        // recurse for next digit with reduced sum 
        findNDigitNumsUtil(n, sum - i, out, index + 1); 
    } 
} 
  
// This is mainly a wrapper over findNDigitNumsUtil. 
// It explicitly handles leading digit 
void findNDigitNums(int n, int sum) 
{ 
    // output array to store N-digit numbers 
    char out[n + 1]; 
  
    // fill 1st position by every digit from 1 to 9 and 
    // calls findNDigitNumsUtil() for remaining positions 
    for (int i = 1; i <= 9; i++) 
    { 
        out[0] = i + '0'; 
        findNDigitNumsUtil(n, sum - i, out, 1); 
    } 
} 
  
// Driver program 
int main() 
{ 
    int n = 2, sum = 3; 
  
    findNDigitNums(n, sum); 
  
    return 0; 
} 
