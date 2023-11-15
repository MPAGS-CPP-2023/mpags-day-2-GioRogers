#include <string>
#include <iostream>

std::string runCaesarCipher(const std::string& inputText, const size_t key, const bool encrypt){
    /* Take an input string and return that string with the Caesar Cipher applied either in encrypt or decrypt mode. For more information of the 
    Caesar cipher look at https://brilliant.org/wiki/caesar-cipher/ although note the method shown for encoding the cipher is not the one used bellow.

    const std::string& inputText: Input string to be en(de)crypted

    const size_t key: The key of the cipher, i.e. the value by which the alphabet is shifted. 

    const bool encrypt: If true the function encrypts and if false the function decrypts. 

    return: The en(de)crypted string
    
    */
//Create the alphabet container, reverse alphabet container and output string
std::string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
std::string alphabetReversed {"ZYXWVUTSRQPONMLKJIHGFEDCBA"};
std::string outputText;
// Loop over input text
for (std::size_t i{0}; i<inputText.size(); i++){
// For each character find the corresponding position in the alphabet 
// Characters are stored as ASCII values. So (assuming we have capital letters which we should do) if we minus 65 (which is the ASCII for 'A') from our
// character then we should get the characters position in the alphabet, zero indexed.
int alphabetPosition {inputText[i] - 65};
std::cout << alphabetPosition << std::endl;
// Apply the shift (+ve or -ve depending on encrypt/decrypt)
// to the position, handling correctly potential wrap-around. 
if (encrypt){
    outputText += alphabet[(alphabetPosition+key)%26];
}else{
    outputText += alphabetReversed[(25-alphabetPosition+key)%26];
}
}
// Return the output string
return outputText;
}
