//
//  grass_hopper_jump.cpp
//  Sample_Project
//
//  Created by Burusothman A on 4/29/16.
//  Copyright © 2016 atus. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

#define toDigit(c) (c-'0')
vector<std::string> &split(const std::string &s, char delim, std::vector<std::string> &elems) {
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

vector<std::string> split(const std::string &s, char delim) {
    std::vector<std::string> elems;
    split(s, delim, elems);
    return elems;
}

string read_inputs(){
    int strip_length;
    string input;
    int position = 1;
    string direction;
    string jumps;
    vector<string> jumpings;
    
    cout << direction;
    //read inputs
    getline( cin, input);
    strip_length = stoi(input);
    do {
    getline( cin, direction);
    } while (direction.empty());
    cin.clear();
    do {
    getline( cin, jumps);
    } while (jumps.empty());
    cin.clear();
    jumpings =split(jumps,' ');
    for( int i =0; i < direction.length(); i++){
        (direction[i] == '>') ? position = (i + 1) + stoi(jumpings.at(i)) : position = (i + 1)-stoi(jumpings.at(i));
        if(position > strip_length || position < 1){
            return "FINITE";
        }
    }
    
    return "INFINITE";
}
