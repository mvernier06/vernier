#include "mario.h"
#include<iostream>
#include <string>

void test_constructeur();
void test_accelerate();
void test_break();
void test_WhatAmI();

int main(){
  test_constructeur();
  test_accelerate();
  test_break();
  test_WhatAmI();

  std::exit(EXIT_SUCCESS);
};

void test_constructeur(){
  std::cout<<"test du constructeur : "<< std::endl;
  mario char1 = mario();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
};

void test_accelerate(){
  std::cout<<"test de Accelerate() : "<< std::endl;
  mario char1 = mario();
  char1.Accelerate();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
};

void test_break(){
  std::cout<<"test de Break() : "<< std::endl;
  mario char1 = mario();
  char1.Accelerate();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
  char1.Break();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
};

void test_WhatAmI(){
  std::cout<<"test du WhatAmI : "<< std::endl;
  mario char1 = mario();
  std::cout<<"Le character est un : ";
  std::cout<< char1.WhatAmI()<<std::endl;
}
