#pragma once

#include <iostream>
#include <string>
#include <cstring>

class BigInteger{
private:
    bool sign_;
    char* number_ = new char[256];
    int size_;
public:
    BigInteger();
    BigInteger(long long num);
    BigInteger(unsigned long long num);
    explicit BigInteger(const std::string& str);
    BigInteger(const BigInteger& other);
    BigInteger(BigInteger& other);
    BigInteger& operator=(const BigInteger& other);
    BigInteger& operator=(BigInteger&& other);

    bool operator==(const BigInteger& other)const;
    bool operator!=(const BigInteger& other)const;
    bool operator>(const BigInteger& other)const;
    bool operator>=(const BigInteger& other)const;
    bool operator<(const BigInteger& other)const;
    bool operator<=(const BigInteger& other)const;

    BigInteger operator-()const;

   
    char* Number() const {return number_;}
    bool Sign() const {return sign_;}

};

BigInteger operator+(const BigInteger& left_digit, const BigInteger& right_digit);
    

std::ostream& operator<< (std::ostream & out, const BigInteger& num){
    if (num.Sign()){
	    out << num.Number();
    }
    else {
        out << "-" << num.Number();
    }
	return out;
}
