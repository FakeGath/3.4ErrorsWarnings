
//This code adds the iostream Library
#include <iostream>

int main(){
    //This code prints out the phrase " Hello World " in console.
    std :: cout << "Hello World!" << std :: endl;

    //this code is only to generate a RTE
    //int value = 7/0;
    // it was supoused to be std:: cout << "Value: " << value << std::endl;

    // code fixed remove print of value 
    std:: cout << "Value: " << std::endl;

    // return has been added due to the type of main it has to return an int.
    return 0;
}