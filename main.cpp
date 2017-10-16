//Author: John Crosby
#include<vector>
#include<string>
#include<iostream>
#include"bitmap.h"

using namespace std;


int main()
{
    Bitmap image;
    vector< vector<Pixel> > bmp;
    Pixel rgb;
    int columns, rows;
    bool validBmp;
    string name;

    do
    {
        cout<<"Please enter a valid bmp file name."<<endl;
        cin>>name;
        image.open(name);
        validBmp = image.isImage();
    } while(validBmp == false);

    cout<<"Your image has been loaded"<<endl;
    bmp = image.toPixelMatrix();
    rows = bmp.size();
    columns = bmp[0].size();
    cout<<"Height: "<<rows<<" pixels."<<endl;
    cout<<"Width: "<<columns<<" pixels."<<endl;
    /*Asking the user for input on what picture they want in grayscale
        -Make sure that the input is actually a picture. 
        -The program will keep asking the user for a picture as long as they do not input an image with the proper
         requirements.
        -Change the image into a bitmap as to allow for the altering of pixels.
    */
    
    for(int r=0; r<rows; r++)
    {
        for(int c=0; c<columns; c++)
        {
            image


    /*The program will change the color of the image.
        -Row by row, collumn by collumn it will change the color of the pixel to a grey color. 
        -The grey will be the average of the rgb values then make it a grey color.
        -This program will keep going tell the entire image is converted to a grey version.
    */
    




    /*The program will then save the new picture under a different name called oldtime.bmp and notify the user of the 
    name.
    */






    return 0;
}
