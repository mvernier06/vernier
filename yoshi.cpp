#include "yoshi.h"
#include <string>

yoshi::yoshi() : character(){};

std::string yoshi::WhatAmI() const{
  return "yoshi";
};

void yoshi::Accelerate(){
  if(speed()<max_speed() - 1){
    this->speed_=speed() + 2;
  }
};
