#ifndef _TOKEN_H_
#define _TOKEN_H_

#include "string"

class Token
{
    public:
        enum TokenType
        {
            EMPTY,
            ENDFILE,

                ERROR,
                IF,
                ELSE,
                
        };
};

#endif