#ifndef MPAGSCIPHER_PROCESSCOMMANDLINE_HPP
#define MPAGSCIPHER_PROCESSCOMMANDLINE_HPP

#include <string>
#include <vector>

// Process the comand line arguments.
bool processCommandLine(
    const std::vector<std::string>& args,
    bool& helpRequested,
    bool& versionRequested,
    std::string& inputFileName,
    std::string& outputFileName,
    bool& encrypt,
    size_t& key);

#endif // MPAGSCIPHER_PROCESSCOMMANDLINE_HPP