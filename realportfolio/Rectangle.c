//
//  Rectangle.c
//  realportfolio
//
//  Created by Sahai, Neil on 9/13/19.
//  Copyright © 2019 Sahai, Neil. All rights reserved.
//

#include "Rectangle.h"
#include <stdio.h>
#include <math.h>
int Rectangle(void) {
    double length;
    double width;
    double answer;
    double answer2;
    printf ("Please provide a number for the width of a rectangle\n");
    scanf ("%lf", &length);
    printf ("Please provide a value for the length of the rectangle\n");
    scanf ("%lf", &width);
    answer = length*width;
    answer2= (2*length)+(2*width);
    printf ("The area of the rectangle is %f\n", answer);
    printf ("The perimeter of the rectangle is %f\n", answer2);
    return 0;
}
