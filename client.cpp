// COSC 3360/6310 - Fundamentals of Operating Systems 
// Jehan-François Pâris

// Client-server pair process that tells police officers whether a given car has been reported as stolen or not.
// Client process sends a request to the server and waits for a response


#include <iostream>
#include <string>

int main(){

    std::cout << "Client process" << std::endl;

    // Create a client process that sends a request to the server and waits for a reply
    // The request is sent using blocking send since it will be blocked until server sends a response
    // The communication will be done using indirect communication
    

    /*
        1. Prompt the user for server host name and port number
        2. Create a socket
        3. Prompt the user for a car license number
        4. Send the number to the server
        5. Receive the server’s reply and print it out 
        6. Terminate
    
    */

    return 0;
}