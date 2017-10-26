//
//  main.cpp
//  testCommand
//
//  Created by fancymax on 2017/10/26.
//  Copyright © 2017年 ws. All rights reserved.
//

#include <iostream>
#include "person.hpp"
using namespace std;

Person* createP1() {
    Person* p1 = new Person(15,"p1");
    return p1;
}

Person createP2() {
    Person p2(15,"p2");
    return p2;
}

shared_ptr<Person> createP3() {
    shared_ptr<Person> p3(new Person(30,"p3"));
    return p3;
}

int main()
{
        Person* p1 = createP1();
        p1->print();
    
        Person p2 = createP2();
        p2.print();
    
        shared_ptr<Person> p3 = createP3();
        p3->print();
    
    return 0;
}
