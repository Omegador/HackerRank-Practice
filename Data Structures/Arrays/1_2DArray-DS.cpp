#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main()
{
    // Take in 6x6 data
    vector< vector<int> > arr(6,vector<int>(6));
    
    for(int arr_i = 0;arr_i < 6;arr_i++)
    {
       for(int arr_j = 0;arr_j < 6;arr_j++)
       {
          cin >> arr[arr_i][arr_j];
       }
    }
    
    // Find hourglasses
    int max = -100;
    int xOffset = 0, yOffset = 0;

    // Hourglass height is 3
    for(yOffset = 0; yOffset + 2 < 6; yOffset++)
    {
        // Hourglass width is 3
        for(xOffset = 0; xOffset + 2 < 6; xOffset++)
        {
            int a = arr[yOffset][xOffset];
            int b = arr[yOffset][xOffset+1];
            int c = arr[yOffset][xOffset+2];
            int d = arr[yOffset+1][xOffset+1];
            int e = arr[yOffset+2][xOffset];
            int f = arr[yOffset+2][xOffset+1];
            int g = arr[yOffset+2][xOffset+2];

            // If maximum is smaller than total
            if(max < a+b+c+d+e+f+g)
            {
                max = a+b+c+d+e+f+g;
            }
        }
    }
    
    // Output maximum
    cout << max;
    
    return 0;
}