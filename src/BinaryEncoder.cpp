#include "BinaryEncoder.hpp"

void BinaryEncoder::encode(const std::string &text){

    std::string text_with_no_space;

    for(int x{0};x<text.size();x++){

        char letter = text.at(x);

        if(letter != ' ')
            text_with_no_space += letter;

    }

    // 0000001

    // 0 - 7
    // 8 - 15
 
    for(int x{0};x < text_with_no_space.size();x++){

        for(int y{x*8};y< (x*8+8);y++){

            

        }

    }

}