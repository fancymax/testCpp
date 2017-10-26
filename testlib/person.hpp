//
//  person.hpp
//  testSmartPoint
//
//  Created by fancymax on 2017/10/26.
//  Copyright © 2017年 ws. All rights reserved.
//

#include <string>

class Person
{
    
public:
    Person(int age,std::string name);
    Person();
    ~Person();
    
    void test();
    void print();
private:
    int _age;
    std::string _name;
};
