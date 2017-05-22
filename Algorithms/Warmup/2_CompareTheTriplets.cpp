#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int a = 0, b = 0;
    int* Alice = new int[3];
    int* Bob = new int[3];
    
    // Take in Alice
    for(int i = 0; i < 3; i++)
    {
        cin >> Alice[i];
    }
    
    // Take in Bob
    for(int i = 0; i < 3; i++)
    {
        cin >> Bob[i];
    }
    
    // Check each score
    for(int i = 0; i < 3; i++)
    {
        if(Alice[i] > Bob[i])
        {
            a++;
        }
        else if(Alice[i] < Bob[i])
        {
            b++;
        }
    }
    
    // Print out scores
    cout << a << " " << b;
    
    return 0;
}
