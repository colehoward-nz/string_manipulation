#include <iostream>
#include <string>

#include "helpers.cpp"


int main()
{
    //input logic
    unsigned int option;  
    std::string first, second;

    std::cout << "STRING_MANIPULATION  Enter some word/text: ";
    std::getline(std::cin, first);
    std::cout << "STRING_MANIPULATION  Enter some more word/text: ";
    std::getline(std::cin, second);
    std::cout << std::endl;
    
      
    while (option <= 7)
    {
        //menu
        std::cout << "0. Return length\n1. Concatenate\n2. Insert last\n" 
                  << "3. Insert middle \n4. Search for and replace\n" 
                  << "5. Swap values  \n6. Replace string\n7. Compare\n" << std::endl;
        std::cin >> option;
        std::cout << std::endl;

        //if cin fails the input is not of the variable 'option's type. aka not int
        if (std::cin.fail())
        {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "STRING_MANIPULATION  illinformed input. use -1 to quit.\n" << std::endl;
            continue;
        }

        //handle options
        switch (option)
        {
            case 0:
                std::cout << first << "(" << get_length(first) << ")" << std::endl;
                std::cout << second << "(" << get_length(second) << ")" << std::endl;
                break;
            case 1:
                std::cout << concatenate(first, second);
                break;
            case 2:
                std::cout << insert_beginning(first, second);
                break;
            case 3:
                std::cout << insert_middle(first, second);
                break;
            case 4:
                std::cout << search_and_replace(first);
                break;
            case 5:
                std::cout << swap(first);
                break;
            case 6:
                std::cout << replace(first);
                break;
            case 7:
                std::cout << (compare(first, second) ? "not equal" : "equal");
                break;
                
            default: break;
        }
        std::cout << std::endl;
    }

    return 0;
}