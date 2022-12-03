#include "BinaryEncoder.hpp"

void BinaryEncoder::encode(const std::string &text){

    std::string text_with_no_space;

    std::cout << "Output: ";

    for(int x{0};x<text.size();x++){

        char letter = text.at(x);

        if(letter != ' ')
            text_with_no_space += letter;

    }

    for(int x{0};x < text_with_no_space.size() / 8;x++){

        int letter_decimal__val {0};

        for(int y{x*8};y < (x*8+8);y++){

            if(text_with_no_space[y] == '1'){
            
                int index = (8 - y % 8) - 1;

                letter_decimal__val += pow(2,index);

            }

        }

        std::cout << static_cast<char>(letter_decimal__val);

    }

    std::cout << std::endl;
}