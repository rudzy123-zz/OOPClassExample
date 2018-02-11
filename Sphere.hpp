//
//  Sphere.hpp
//  SphereCalculationsOOP
//  Code Methods from Page 740 Frank M Carrano. Walls & Mirrors

//  Created by Rudolf Musika on 2/11/18.
//  Copyright © 2018 Rudolf Musika. All rights reserved.
//

#ifndef Sphere_hpp
#define Sphere_hpp

#include <stdio.h>
const double PI = 3.14159;

class Sphere
{
private:
    double theRadius; // The Sphere's radius
public:
    /** Default constructor: Creates a sphere and initializes its radius to a default value.
     Precondition: None
     PostCondition: A sphere of radius 1 exists.
     */
    Sphere();
    /** Constructor: Creates a sphere and initializes its radius.
     Precondition: initialRadius is the desired radius
     Postcondition: A sphere of radius initalRadius exists.
     */
    Sphere(double initialRadius);
    /** Sets (alters) the radius of this sphere.
     Precondition: newRadius is the desired radius.
     Postcondition: The sphere's radius is newRadius.
     */
    void setRadius(double newRadius);
    /** Gets this sphere's radius.
     Precondition: None.
     Postcondition: Returns the radius.
     */
    double getRadius() const;
    /** Gets this sphere's diameter.
     Precondition: None.
     Postcondition: Returns the diameter
     */
    double getDiameter() const;
    /** Gets this sphere's circumference.
     Precondition: PI is a named constant.
     Postcondition: Returns the circumference.
     */
    double getCircumference() const;
    /** Gets this sphere's surface area.
     Precondition: PI is a named constant.
     Postcondition: Returns the surface area.
     */
    double getArea() const;
    /** Gets this sphere's volume.
     Precondition: PI is a named constant.
     Postcondition: Returns the volume.
     */
    double getVolume() const;
    // The compiler-generated destructor is sufficient.
}; //end Sphere
#endif /* Sphere_hpp */

// End of header file.
