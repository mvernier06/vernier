#include "yoshi.h"
#include <string>

yoshi::yoshi(int crest) : character(){
  this->crest_=crest;
};

std::string yoshi::WhatAmI() const{
  return "yoshi";
};

void yoshi::Accelerate(){
  if(speed()<max_speed() - 1){
    this->speed_=speed() + 2;
  }
};
