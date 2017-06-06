#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int size = 0;
    int buffer = 0;
    vector<int> list;
    
    // Take in data
    cin >> size;
    
    for(int i = 0; i < size; i++)
    {
        cin >> buffer;
        list.push_back(buffer);
    }
    
    // Partition
    partition(size, list);
    
    // Print

    return 0;
}

int partition(int size, vector<int> list)
{
    
    //int pivot = 
}