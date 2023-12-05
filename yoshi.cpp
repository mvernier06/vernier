#include "yoshi.h"
#include <string>

yoshi::yoshi() : character(){
  crest_=0;
};

yoshi::yoshi(int nb_crest){
  *crest_ = nb_crest;
};

std::string yoshi::WhatAmI() const{
  return std::to_string(this->crest_) + " crested Yoshi" ;
};

void yoshi::Accelerate(){
  if(speed()<max_speed() - 1){
    this->speed_=speed() + 2;
  }
};
