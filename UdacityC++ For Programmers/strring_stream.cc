/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;
 int main(){
    string stringLength;
    float width = 0;
    float height = 0;
    float area = 0;
    cout << "Enter room width: ";
    getline (cin,stringLength);
    stringstream(stringLength) >> width;
    cout<<"You entered "<<width<<"\n";
    cout <<  "Enter room length: ";
    getline(cin,stringLength);
    stringstream(stringLength)>> height;
    cout<<"You entered "<<height<<"\n";
    cout << "Area is " << width*height;
    
    
    
    return 0;
}