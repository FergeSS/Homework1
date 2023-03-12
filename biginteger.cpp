#include "biginteger.h"

BigInteger::BigInteger(){
    number_[0] = '0';
    number_[1] = '\0'; 
    sign_ = true;
    size_ = 1;
}


BigInteger::BigInteger(long long num): sign_(num >= 0){
    int i = 0;

    num = std::abs(num);
    
    while (num > 0){
        number_[i++] = char(num % 10 + '0');
        num /= 10;
    }

    for (int k = 0; k < i/2; ++k){
        std::swap(number_[k], number_[i - k - 1]);
    }

    number_[i] = '\0';

    size_ = i;
}

BigInteger::BigInteger(unsigned long long num): sign_(num >= 0){
    int i = 0;

    while (num > 0){
        number_[i++] = char(num % 10 + '0');
        num /= 10;
    }

    for (int k = 0; k < i/2; ++k){
        std::swap(number_[k], number_[i - k - 1]);
    }

    number_[i] = '\0';

    size_ = i;
}

BigInteger::BigInteger(const std::string& str){
    if (str.empty()){
        throw std::invalid_argument("Empty string");
    }

    if (str[0] == '-' && str[1] == '\0'){
        throw std::invalid_argument("Invalid character");
    }

    for (std::string::size_type i = 0; i < str.size(); ++i){
        if (i != 0 && std::isdigit(str[i]) == 0){
            throw std::invalid_argument("Invalid character");
        }
        if (i == 0 && str[i] == '-'){
            sign_ = false;
        } else if(sign_ == false){
            number_[i - 1] = str[i];            
        } else {
            number_[i] = str[i];
        }  
        ++size_;  
    }

}

BigInteger::BigInteger(const BigInteger& other): sign_(other.sign_), number_(other.number_), size_(other.size_){}

BigInteger::BigInteger(BigInteger& other): sign_(other.sign_), number_(other.number_), size_(other.size_){
    other.number_ = nullptr;
    other.sign_ = false;
    other.size_ = 0;
}

BigInteger& BigInteger::operator=(const BigInteger& other){
    if (this != &other){
        sign_ = other.sign_;
        number_ = other.number_;
        size_ = other.size_;
    }
    return *this;
}

BigInteger& BigInteger::operator=(BigInteger&& other){
    if (this != &other){
        sign_ = other.sign_;
        number_ = other.number_;
        size_ = other.size_;
        other.sign_ = false;
        other.number_ = nullptr;
        other.size_ = 0;
    }
    return *this;
}

bool BigInteger::operator==(const BigInteger& other)const {
    return sign_ == other.sign_ && strcmp(number_, other.number_) == 0;
}

bool BigInteger::operator!=(const BigInteger& other)const {
    return sign_ != other.sign_ || strcmp(number_, other.number_) != 0;
}

bool BigInteger::operator>(const BigInteger& other)const {
    if (sign_ != other.sign_){
        return sign_ > other.sign_;
    }
    if (size_ != other.size_){
        return size_ > other.size_ && sign_ == true || size_ < other.size_ && sign_ == false;
    }
    int i = 0;
    while (i < size_){
        if (number_[i] - other.number_[i] != 0){
            return number_[i] > other.number_[i];
        }
        ++i;
    }
    return false;
}

bool BigInteger::operator>=(const BigInteger& other)const {
    return *this > other || *this == other;
}

bool BigInteger::operator<(const BigInteger& other)const {
    return !(*this >= other);
}

bool BigInteger::operator<=(const BigInteger& other)const {
    return !(*this > other);
}

BigInteger BigInteger::operator-()const {
    BigInteger result(*this);
    result.sign_ = !result.sign_;
    return result;
}

BigInteger operator+(const BigInteger& left_digit, const BigInteger& right_digit){
    
}

int main(){
    BigInteger num, num_1;

    num = -2;
    num_1 = 22;

    std::cout << num << std::endl;

    return 0;
}