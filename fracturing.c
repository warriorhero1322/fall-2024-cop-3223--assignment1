/*
fracturing.c
Author: Blake Mulkey
Date: 9/8/2024
Class: COP 3223C, Professor Parra
Purpose: Calculates some basic geometric vaules of a circle using 2 points.
Main purpose of assignment is to learn how to structure code to use functions.
Input: Coordinates of the points on a circle; (x1, y1) and (x2, y2)

Output: Distance between the 2 points, perimeter of the circle, area of the circle
width of the circle, and height of the circle
*/

#include <stdio.h>
#include <math.h>

#define PI 3.14159

/*
double askForUserInput()

Purpose: Returns a double that was recieved from the user using the command line
Input: A double from the user
Output: None

Precondition: The user input is a double
Postcondition: None
*/
double askForUserInput() {
    double input;
    scanf("%lf", &input);

    return input;
}// askForUserInput

/*
double calculateDistance()

Purpose: Calculate the distance between to points in a cartesian coordinate system

Algorithm: sqrt((x2 - x1)^2 + (y2 - y1)^2); Distance formula

Input: Two points: (x1, y1) and (x2, y2)
Output: The points entered by the user.

Precondition: The user inputs are two points on a circle that are opposite each other
Postcondition: None
*/
double calculateDistance() {
    double x1, x2, y1, y2, distance;
    printf("Please enter the x value for the first point: ");
    x1 = askForUserInput();
    
    printf("Please enter the y for the first point: ");
    y1 = askForUserInput();

    printf("Please enter the x value for the second point: ");
    x2 = askForUserInput();
    
    printf("Please enter the y for the second point: ");
    y2 = askForUserInput();

    distance = sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

    printf("Point #1 entered: x1 = %1.lf; y1 = %1.lf\n", x1, y1);
    printf("Point #2 entered: x2 = %1.lf; y2 = %1.lf\n", x2, y2);

    return distance;
}// calculateDistance

/*
double calculatePerimeter()

Purpose: Calculate the perimeter of the circle using the distance between 2 points as the diameter

Algorithm: PI * diameter; Perimeter of a circle formula

Input: Two points: (x1, y1) and (x2, y2)
Output: The points entered by the user and the perimeter of subsequent circle.

Precondition: The user inputs are two points on a circle that are opposite each other
Postcondition: None
*/
double calculatePerimeter() {
    double diameter = calculateDistance();
    double perimeter = (PI * diameter);

    printf("The perimeter of the city encompassed by your request is %.2lf\n", perimeter);
    return 1;
}// calculatePerimeter

/*
double calculateArea()

Purpose: Calculate the area of the circle using the distance between 2 points as the diameter

Algorithm: PI * (diameter / 2)^2; Area of a circle formula

Input: Two points: (x1, y1) and (x2, y2)
Output: The points entered by the user and the area of subsequent circle.

Precondition: The user inputs are two points on a circle that are opposite each other
Postcondition: None
*/
double calculateArea() {
    double diameter = calculateDistance();
    double area = PI * pow(diameter / 2, 2);

    printf("The area of the city encompassed by your request is %.2lf\n", area);

    return 1;
}// calculateWidth

/*
double calculateWidth()

Purpose: Calculate the width of the circle using the distance between 2 points as the diameter

Input: Two points: (x1, y1) and (x2, y2)
Output: The points entered by the user and the width of subsequent circle.

Precondition: The user inputs are two points on a circle that are opposite each other
Postcondition: None
*/
double calculateWidth() {
    double width = calculateDistance();

    printf("The width of the city encompassed by your request is %.2lf\n", width);
    return 1;
}// calculateWidth

/*
double calculateHeight()

Purpose: Calculate the height of the circle using the distance between 2 points as the diameter

Input: Two points: (x1, y1) and (x2, y2)
Output: The points entered by the user and the height of subsequent circle.

Precondition: The user inputs are two points on a circle that are opposite each other
Postcondition: None
*/
double calculateHeight() {
    double height = calculateDistance();

    printf("The height of the city encompassed by your request is %.2lf\n", height);
    return 1;
}// calculateHeight

int main(int argc, char **argv) {
    printf("The distance between the two points is %.2lf\n", calculateDistance());
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}