#include "Encrypt.hpp"

void Encrypt::encrypt(const std::string &text){

    start:

    std::string f_text = text;

    uint32_t text_size = f_text.length();

    if(text_size % 16 != 0)
        for(int x{0};x < 16 - (text_size % 16);x++)
            f_text += "0";

    std::vector<unsigned char> letter_vector;

    for(auto &letter:f_text)
        letter_vector.push_back(letter);

    std::vector<unsigned char> key; //key example

    for(int x{0};x<16;x++) 
        key.push_back(rand()%16); // creating the key

    AES aes(AESKeyLength::AES_128);  ////128 - key length, can be 128, 192 or 256
    
    std::vector<unsigned char> encrypted_text = aes.EncryptECB(letter_vector, key);

    for(auto &letter:encrypted_text)
        if(letter == ' ' or letter == '\n')
            goto start;

    std::cout << "Key: ";

    for(auto &key_code:key)
        std::cout << static_cast<int>(key_code) << " ";

    std::cout << std::endl;

    std::cout << "Output: ";

    for(auto &letter:encrypted_text)
            std::cout << letter;

    std::cout << std::endl;
}
