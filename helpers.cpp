#include "helpers.h"
#include <iostream>


unsigned int valid_input(std::string& text, std::string& prompt)
{
    unsigned int index;
    do 
    {
        std::cout << text << std::endl;
        std::cout << prompt << std::endl;
        std::cin >> index;

        if (std::cin.fail() || index < 0 || index >= text.length()) 
        {
            std::cin.clear();
            std::cin.ignore();
            std::cout << "STRING_MANIPULATION  illinformed input. try again" << std::endl;
            continue;
        }
        break;
    } 
    while (true);

    return index;
}

unsigned int get_length(std::string& text)
{
    return text.length();
}

const std::string concatenate(std::string& first, std::string& second)
{
    return first+=second;
}

const std::string insert_beginning(std::string& first, std::string& second)
{
    return second+=first;
}

const std::string insert_middle(std::string& first, std::string& second)
{
    const unsigned int middle = first.length()/2; // floating point taken care of due to type
    return first.insert(middle, second);
}

const std::string search_and_replace(std::string& text)
{
    unsigned int index;
    std::string input = "Enter index to replace: ";
    index = valid_input(text, input);

    char character;
    std::cout << text << "\nEnter replacement char: " << std::endl;
    std::cin >> character;
    std::cout << std::endl;
    std::cin.clear();
    std::cin.ignore();

    text[index] = character;
    return text;
}

const std::string swap(std::string& text)
{
    char temp;
    unsigned int index, second_index;

    std::string input = "Enter index to swap: ";
    index = valid_input(text, input);
    input = "Enter second index to swap: ";
    second_index = valid_input(text, input);

    temp = text[index];
    text[index] = text[second_index];
    text[second_index] = temp;
    return text;
}

const std::string replace(std::string& text)
{
    std::string replacement;
    std::cout << "Enter a replacement string: " << std::endl;
    std::cin >> replacement;
    std::cin.clear();
    std::cin.ignore();

    text = replacement;
    return text;
}

// lol
bool compare(std::string first, std::string second)
{
    return first.compare(second);
}