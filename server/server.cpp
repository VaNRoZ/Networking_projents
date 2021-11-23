#include "Server.h"
#include "Protocol.h"

void print_instructions();

int main() {
  Server server;
  string command;
  
  std::cout<< "**** WELCOME TO THE SERVER APPLICATION ****" << std::endl;
  
  print_instructions();
  
  do
  {
    std::cin >> command;
    
    if (command == "lcu") // list all connected users
    {
    server.printUsers();
    }
    else if (command =="Is") //list all sessions
