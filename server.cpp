// COSC 3360/6310 - Fundamentals of Operating Systems 
// Jehan-François Pâris

// Client-server pair process that tells police officers whether a given car has been reported as stolen or not.
// Single threaded server waits for requests from multiple clients

#include <iostream>
#include <string>

int main(){

    std::cout << "Server process" << std::endl;


    // Create a server that waits for requests from multiple clients
    // It is always waiting for client requests, and communication can be done using a blocking/nonblocking receive
    // Indirect communication will also be used

    /*
     1. Read in the day's stolen car database 
     2. Create a socket
     3. Bind an address to that socket
     4. Wait for incoming messages
     5. Receive and print out a message from client
     6. Consult its DB and send a Yes/No reply to the client
     7. Wait for next client message request
    */

    return 0;
}