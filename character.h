#include <string>
#ifndef CHARACTER_H
#define CHARACTER_H

class character{
  public:
    character();
    virtual void Accelerate();
    void Break();
    inline float speed()const{
      return this->speed_;
    }
    inline float max_speed()const{
      return this->max_speed_;
    }
    virtual ~character();
    virtual std::string WhatAmI() const = 0;
  protected:
    float speed_;
    float max_speed_;
};

#endif
