// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "PNG.h"
#include "HSLAPixel.h"
#include "ImageTransform.h"
#include <cmath>

using namespace uiuc;
using namespace std;

// Main function does the following 
// - Reads the alma.png
// - Coverts it to grayscale and writes it
// - Coverts it to blue/orange and writes it
// - Creates a spotlight at a position and writes it

int main()
{
    //Read in file
    cout << "Hello World!" << endl;
    string input_file = "alma.png"; 
    PNG i; 
    bool success_r = i.readFromFile(input_file); 

    // Convert to grayscale
    string output_file_gray = "gray.png";
    PNG gray_scale = grayscale(i); 
    bool success_w1 = gray_scale.writeToFile(output_file_gray);

    // Illinify
    string output_file_illini = "illini.png";
    PNG illinified = illinify(i);
    bool success_w2 = illinified.writeToFile(output_file_illini);

    // Spotlight
    string output_file_spotlight = "spotlight.png";
    PNG spotlight = createSpotlight(i,450,300);
    bool success_w3 = spotlight.writeToFile(output_file_spotlight);

}
