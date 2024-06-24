#pragma once

#include <string>



// get valid input
unsigned int valid_input(std::string& text, std::string& prompt);

// length of a string -- lol i didn't realise there is a function for it
unsigned int get_length(std::string& text);

// combines two strings
const std::string concatenate(std::string& first, std::string& second);

// inserts second at the beginning of first
const std::string insert_beginning(std::string& first, std::string& second);

// inserts second in the middle of first
const std::string insert_middle(std::string& first, std::string& second);

// search for x in first and replace with y
const std::string search_and_replace(std::string& text);

// swap value at x and y
const std::string swap(std::string& text);

// replace string with new one
const std::string replace(std::string& text);

// compare if equal or not. lol wait for it
bool compare(std::string first, std::string second);