#include "BinaryEncoder.hpp"
#include "BinaryDecoder.hpp"
#include "Encrypt.hpp"
#include "Decrypt.hpp"
#include <sstream>

int main(){
            
    std::string input;

    std::string first_command;


    srand(time(0));-
    system("color a");
    
    start:

    std::cout << "**Commands**" << std::endl;

    std::cout << "encrypt <text>" << std::endl;
    std::cout << "decrypt <text>" << std::endl;
    std::cout << "encode <text>" << std::endl;
    std::cout << "decode <text>" << std::endl;

    try{

    while(input != "quit"){

        std::getline(std::cin,input);

        std::stringstream command_stream {input};

        command_stream >> first_command;

        std::cout << "[-------------------------------------------------------]\n";

        if(first_command == "encode"){

            std::string second_command;

            std::string buff;

            while(command_stream >> buff){

                second_command += buff;

                second_command += " "; 
 
            }

            second_command.pop_back();

            std::cout << "Binary Encoder" << std::endl;

            std::cout << "Input: " << second_command << std::endl;

            BinaryDecoder::decode(second_command);

        }
        else if(first_command == "decode"){

            std::string second_command;

            std::string buff;

            while(command_stream >> buff){

                second_command += buff;

                second_command += " ";

            }

            second_command.pop_back();

            std::cout << "Binary Decoder" << std::endl;

            std::cout << "Input: " << second_command << std::endl;

            BinaryEncoder::encode(second_command);

        }
        else if(first_command == "encrypt"){

            std::string second_command;

            std::string buff;

            while(command_stream >> buff){

                second_command += buff;

                second_command += " ";

            }

            second_command.pop_back();

            std::cout << "Encryptor" << std::endl;

            std::cout << "Input: " << second_command << std::endl;

            Encrypt::encrypt(second_command);
            
        }

        else if(first_command == "decrypt"){

            std::string second_command;

            std::string buff;

            while(command_stream >> buff){

                second_command += buff;

                second_command += " ";

            }

            second_command.pop_back();

            std::cout << "Decryptor" << std::endl;

            std::cout << "Input: " << second_command << std::endl;

            Decrypt::decrypt(second_command);
            
        }
        else
            std::cout << "Invalid command" << std::endl;


        std::cout << "[-------------------------------------------------------]\n";

    }

    }catch(...){

        std::cout << "Buffer size is incorrect. (Buffer boyutu yeterli degil)" << std::endl;

        goto start;

    }

    

}