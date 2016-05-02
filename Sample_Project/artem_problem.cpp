#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

int find_artem_solution(){
    string input;
    int output;
    getline(cin, input);
    
    output = (stoi(input)/3)*2;
    
    if((stoi(input)%3) != 0){
        output++;
    }
    return output;
}

int find_artem_solution2(){
    string input;
    getline(cin,input);
    return ((stoi(input)%3 == 0) ? stoi(input)/3 : stoi(input)/3 + stoi(input)/3 + 1);
}

