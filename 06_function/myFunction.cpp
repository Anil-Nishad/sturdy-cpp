/*
returnType functionName(parameterType parameterName) {
    // Function implementation goes here
    // ...
    return returnValue;
}
*/
#include <iostream>


int main(){
    int temp_1 = checkTemperature(35); 
    int temp_2 = checkTemperature(25); 
    std::cout << temp_1;
    std::cout << temp_2;
    makeChai(); // Call the function to make chai
    
    serveChai(2); // Call the function to serve chai
    serveChai("matcha");
    serveChai(); // Call the function to serve chai with default value
    return 0;
}

int checkTemperature(int temperature){
    return temperature > 30 ? 1 : 0; // Returns 1 if temperature is above 30, otherwise returns 0
}

// Funtion with no return value
// Funtion declaration
void serveChai(int cups);

// Funtion definition
void serveChai(int cups) {
    std::cout << "Serving " << cups << " cups of chai." << std::endl;
}

void serveChai(std::string teaType = "Masala Chai"){
    std::cout << "Serving " << "special " << teaType << " chai." << std::endl;
}

void makeChai(){
    std::cout << "Making chai..." << std::endl;
    std::cout << "Chai is ready!" << std::endl;
}