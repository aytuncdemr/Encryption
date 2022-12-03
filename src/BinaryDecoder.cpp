#include "BinaryDecoder.hpp"

void BinaryDecoder::decode(const std::string &text){

    std::cout << "Output: ";

    for(int n{0};n<text.size();n++){

        int decimal_val = static_cast<int>(text.at(n));

        std::array<int,8> binary {0};

        std::vector<uint32_t> index;

        while(decimal_val > 0){

            uint32_t max_base_2 {0};

            while(decimal_val >= pow(2,max_base_2 + 1))
                max_base_2++;

            decimal_val -= pow(2,max_base_2);

            index.push_back(max_base_2);

        }

        for(int x{0};x<index.size();x++)
            binary.at(8 - (index[x] + 1)) = 1;
        
        for(int x{0};x<binary.size();x++)
            if(binary.at(x) == true)
                std::cout << 1;
            else
                std::cout << 0;

        std::cout << " ";

    }

    std::cout << std::endl;

}