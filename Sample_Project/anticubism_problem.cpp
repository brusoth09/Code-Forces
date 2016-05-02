#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <cstring>

#define N 100000

using namespace std;

long getSum(long array[], int length){
    long sum = 0;
    for(int count = 0; count < length ;count++)
        sum += array[count];
    return sum;
}
long generate_polygon(){
    int rods;
    scanf("%d", &rods);
    
    long rod_length [rods];
    memset(rod_length, 0, sizeof(rod_length));
    
    for( int i = 0; i < rods ; i++){
        scanf("%ld", &rod_length[i]);
    }
    
    sort(rod_length, rod_length + rods);
    
    return 2*rod_length[rods-1] - getSum(rod_length,rods) + 1;
}