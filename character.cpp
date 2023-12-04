#include "character.h"

character::character(){
  this->speed_=0;
  this->max_speed_=10;
};

void character::Accelerate(){
  if(this->speed_<this->max_speed_){
    ++ this->speed_;
  }
};

void character::Break(){
  if (this->speed_>0){
    -- this->speed_;
  }
};

character::~character(){};
