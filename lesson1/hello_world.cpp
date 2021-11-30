
// single comment

/* longer
one */

# include <iostream>
# include <string>

int main()
{
    std::cout << "Type your name" << std::endl; // std special name that idenfies the std namespace. cout is console output

    // << can be called "from". So basically, sending the string type your name along with endline to stdout  

    std::string name; // var declaration
    std::cin >> name; // ">>" extraction operator (into). So send the console input into the name var.
    
    std::cout << "Hello, " << name << std::endl;

    return 0;
}