//
//  person.cpp
//  testSmartPoint
//
//  Created by fancymax on 2017/10/26.
//  Copyright © 2017年 ws. All rights reserved.
//

#include "person.hpp"
#include <iostream>

Person::Person(int age,std::string name) {
    _age = age;
    _name = name;
}

Person::Person() {
    _age = 5;
}

void Person::test() {
    _age = 10;
}

void Person::print() {
    std::cout<< "name:" << _name;
    std::cout<< " ";
    std::cout<< "age:" << _age;
    std::cout<< std::endl;
}

Person::~Person() {
    std::cout<< this  << " name:" << _name << " deinit" << std::endl ;
}


