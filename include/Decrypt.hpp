#ifndef _DECRYPT_HPP_
#define _DECRYPT_HPP_

#include <iostream>
#include <string>
#include <limits>
#include <AES.hpp>
#include <sstream>

class Decrypt{

    public:

        Decrypt(){


        }

        static void decrypt(const std::string &text);

};

#endif