//
//  main.cpp
//  ce
//
//  Created by Peter XU on 2018/4/9.
//  Copyright © 2018 Peter XU. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main(){
    std::string myText("some-text--to-tokenize");
    std::istringstream iss(myText);
    std::string token;
    while (std::getline(iss, token, '-'))
    {
        std::cout << token << std::endl;
    }
    return 0;
}
