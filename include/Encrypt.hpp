#ifndef _ENCRYPT_HPP_
#define _ENCRYPT_HPP_

#include <iostream>
#include <string>
#include <AES.hpp>

class Encrypt{

    public:

        Encrypt(){

            
        }

        static void encrypt(const std::string &text);

};

#endif