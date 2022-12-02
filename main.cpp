#include "BinaryEncoder.hpp"
#include "BinaryDecoder.hpp"
#include <sstream>

int main(){

    std::string input;

    std::string first_command;

    while(input != "quit"){

        std::getline(std::cin,input);

        std::stringstream command_stream {input};

        command_stream >> first_command;

        if(first_command == "encode"){

            std::string second_command;

            std::string buff;

            while(command_stream >> buff){

                second_command += buff;

                second_command += " "; 
 
            }

            BinaryEncoder::encode(second_command);

        }
        else if(first_command == "decode"){

            std::string second_command;

            std::string buff;

            while(command_stream >> buff){

                second_command += buff;

                second_command += " ";

            }

            BinaryDecoder::decode(second_command);

        }

    }

}