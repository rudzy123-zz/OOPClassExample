//
//  Sphere.cpp
//  SphereCalculationsOOP
//
//  Created by Rudolf Musika on 2/11/18.
//  Copyright © 2018 Rudolf Musika. All rights reserved.
//

#include "Sphere.hpp"
Sphere::Sphere()
{
    theRadius = 1.0;
}// end default constuctor

Sphere::Sphere(double initialRadius)
{
    setRadius(initialRadius); //Sphere:: not needed here
}// end constructor

void Sphere::setRadius(double newRadius)
{
    if (newRadius>0)
        theRadius=newRadius;
    else
        theRadius=1.0;
}// end setRadius

double Sphere::getRadius() const
{
    return theRadius;
}// end getRadius

double Sphere::getDiameter() const
{
    return 2.0*theRadius;
}// end getDiameter

double Sphere::getCircumference()const
{
    return PI*getDiameter();
}// end getCircumference

double Sphere::getArea()const
{
    return 4.0*PI*theRadius*theRadius;
}// end getArea

double Sphere::getVolume()const
{
    double radiusCubed;
    radiusCubed= theRadius*theRadius*theRadius;
    return (4.0*PI*radiusCubed)/3.0;
}//end getVolume

//End of Implementation file
