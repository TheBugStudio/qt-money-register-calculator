#ifndef TOKEN_H
#define TOKEN_H

#include <vector>

class tokens
{
protected:
    std::vector<char> tokenChar;
    int tokenType;
public:
    tokens(){tokenType = 0;}
    tokens(std::vector<char> tokenEntrada){tokenChar = tokenEntrada;}
    ~tokens() = default;
};

#endif // TOKEN_H

/*
 1-operador
 2-operador
 3-moneda
*/
