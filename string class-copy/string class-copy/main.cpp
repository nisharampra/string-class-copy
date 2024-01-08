//
//  main.cpp
//  string class-copy
//
//  Created by Nisha Ramprasath on 3/11/23.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
    string s="welcome";
    char str[10];
    s.copy(str,3);
    str[3]='\3';
    cout<<str<<endl;
    return 0;
}
