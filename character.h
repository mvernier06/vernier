#include <string>
#ifndef CHARACTER_H
#define CHARACTER_H

class character{
  public:
    character();
    void Accelerate();
    void Break();
    inline float speed()const{
      return this->speed_;
    }
    inline float max_speed()const{
      return this->max_speed_;
    }
    ~character();
    virtual std::string WhatAmI() const = 0;
  private:
    float speed_;
    float max_speed_;
};

#endif
