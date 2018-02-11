//
//  main.cpp
//  SphereCalculationsOOP
//
//  Created by Rudolf Musika on 2/11/18.
//  Copyright © 2018 Rudolf Musika. All rights reserved.
//

#include <iostream>
#include "Sphere.hpp"

int main() {
    double oldNum,newNum;
    std::cout<<"Please enter a radius of the sphere you wish to see: ";
    std::cin>>oldNum;
    std::cout<<"Please enter another new radius of the sphere you wish to see: ";
    std::cin>>newNum;

    
    std::cout<<"\n";
    Sphere unitSphere;
    Sphere mySphere(oldNum);// Sets radius of Sphere to oldNum you entered.
    mySphere.setRadius(newNum); // Resets radius to the newNum you gave it.
    std::cout <<"New radius Diamter is "<<mySphere.getDiameter()<<std::endl;
    std::cout <<"New radius Circumference is "<<mySphere.getCircumference()<<std::endl;
    std::cout <<"New radius Area is "<<mySphere.getArea()<<std::endl;
    std::cout <<"New radius Volume is "<<mySphere.getVolume()<<std::endl;
    
    std::cout << "\nYou get the gist of it, Thanks for working with it \n";
    return 0;
}
