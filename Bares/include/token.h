/**
 * @file token.h
 * @authors Anderson Caio & Rayan Avelino
 * @date 23/05/2017
 */
#ifndef _TOKEN_H_
#define _TOKEN_H_

/// Code from class<<
#include <string>     //!< std::string
#include <iostream>   //!< std::ostream

/// Represents a token.
struct Token
{
    public:
        enum class token_t : int
        {
            OPERAND = 0,    //!< Basically numbers.
            OPERATOR,       //!< "+", "-", "*", "/", "^".
            OPENING_SCOPE,  //!< "(".
            CLOSING_SCOPE   //!< ")".
        };

        std::string value;  //<! The original token value.
        token_t type;       //<! The token type.

        /// Construtor default.
        explicit Token( std::string v_="", token_t t_ = token_t::OPERAND )
            : value( v_ )
            , type( t_ )
        {/* empty */}

        /// Just to help us debug the code.
        friend std::ostream & operator<<( std::ostream& os_, const Token & t_ ){
            std::string types[] = { "OPERAND", "OPERATOR", "OPENING_SCOPE", "CLOSING_SCOPE" };
            os_ << "<" << t_.value << "," << types[(int)(t_.type)] << ">";
            return os_;
        }

};
#endif