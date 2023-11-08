#include <string>
#include <iostream>
#include "TransformChar.hpp"

std::string transformChar(const char in_char)
{   
    /* Take an input character and return a string of its capital or in the case of the input character being a number return the number spelled out in capitals.

    const char in_char: Input character

    return: The capital of the input character. The speeled (in capitals) word if the input character is a number
    
    */
    std::string outputChar;
    if (std::isalpha(in_char)) {
        outputChar += std::toupper(in_char);
    }
    // Transliterate digits to English words
    switch (in_char) 
    {
        case '0':
            outputChar += "ZERO";
            break;
        case '1':
            outputChar += "ONE";
            break;
        case '2':
            outputChar += "TWO";
            break;
        case '3':
            outputChar += "THREE";
            break;
        case '4':
            outputChar += "FOUR";
            break;
        case '5':
            outputChar += "FIVE";
            break;
        case '6':
            outputChar += "SIX";
            break;
        case '7':
            outputChar += "SEVEN";
            break;
        case '8':
            outputChar += "EIGHT";
            break;
        case '9':
            outputChar += "NINE";
            break;
    }
    return outputChar;
}
