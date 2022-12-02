#ifndef _BINARY_DECODER_HPP_
#define _BINARY_DECODER_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <math.h>
#include <algorithm>

class BinaryDecoder{ // Only english characters supported! (Sadece Ingilizce karakterler destekli)

    public:

        BinaryDecoder(){
            
        }

        static void decode(const std::string &text);

};

#endif