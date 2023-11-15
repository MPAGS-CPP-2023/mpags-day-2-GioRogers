#include <string>
#include <iostream>

std::string runCaesarCipher(const std::string& inputText, const size_t key, const bool encrypt){

//Create the alphabet container and output string
std::string alphabet {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
std::string alphabetReversed {"ZYXWVUTSRQPONMLKJIHGFEDCBA"};
std::string outputText;
// Loop over input text
std::cout << inputText << std::endl;

for (std::size_t i{0}; i<inputText.size(); i++){
    std::cout << "Working" << std::endl;
    std::cout << inputText[i] << std::endl;
// For each character find the corresponding position in the alphabet 
// Characters are stored as ASCII values. So (assuming we have capital letters which we should do) if we minus 96 (which is the ASCII for 'A') from our
// character then we should get position, zero indexed.
int alphabetPosition {inputText[i] - 65};
std::cout << alphabetPosition << std::endl;
// Apply the shift (+ve or -ve depending on encrypt/decrypt)
// to the position, handling correctly potential wrap-around
std::cout << 25%25 << std::endl;
if (encrypt){
    outputText += alphabet[(alphabetPosition+key)%26];
}else{
    outputText += alphabetReversed[(25-alphabetPosition+key)%26];
}



}
// Return the output string
return outputText;
}
