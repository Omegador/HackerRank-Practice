#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    // Take in number of values
    int n = 0;
    cin >> n;
    
    int sum = 0;
    int* arr = new int[n];
    
    for(int i = 0; i < n; i++)
    {
        // Take into array and add
        cin >> arr[i];
        sum += arr[i];
    }
    
    // Print out sum
    cout << sum;
    
    delete[] arr;
    
    return 0;
}
