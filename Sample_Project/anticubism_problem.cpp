#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include <iostream>
#include <algorithm>

#define N 110000
#define min(a, b)(a < b ? a : b);

using namespace std;

int generate_polygon(){
    int rods;
    scanf("%d", &rods);
    
    int rod_length [rods];
    memset(rod_length, 0, sizeof(rod_length));
    
    for( int i = 0; i < rods ; i++){
        scanf("%d", &rod_length[i]);
    }
    
    sort(rod_length, rod_length + rods);
    
    cout << rod_length[2];
    return 0;
}

int main()
{
    generate_polygon();   
}