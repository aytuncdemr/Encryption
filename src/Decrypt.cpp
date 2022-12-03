#include "Decrypt.hpp"

std::vector<int> find_ints_in_string(std::string &input){

    std::vector<int> result;

    std::stringstream stream {input};

    std::string stream_component;

    while(stream >> stream_component)
        result.push_back(atoi(stream_component.c_str()));

    return result;
}

void Decrypt::decrypt(const std::string &text){

    std::vector<unsigned char> key; 

    std::cout << "Input Key: ";

    std::string input_key;

    std::getline(std::cin,input_key);

    std::vector<int> key_values = find_ints_in_string(input_key);

    for(auto &key_value:key_values)
        key.push_back(key_value);

    AES aes(AESKeyLength::AES_128);  ////128 - key length, can be 128, 192 or 256

    std::vector<unsigned char> letter_vector;

    for(auto &letter:text)
        letter_vector.push_back(letter);

    std::vector<unsigned char> decrypted_text = aes.DecryptECB(letter_vector, key);

    std::cout << "Output: ";

    for(auto &letter:decrypted_text)
        std::cout << letter;

    std::cout << std::endl;
}