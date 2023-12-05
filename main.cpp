#include "mario.h"
#include "yoshi.h"
#include<iostream>
#include <string>

void test_constructeur_mario();
void test_accelerate();
void test_break();
void test_WhatAmI();
void test_constructeur_yoshi();

int main(){
  test_constructeur_mario();
  test_accelerate();
  test_break();
  test_WhatAmI();
  test_constructeur_yoshi();

  std::exit(EXIT_SUCCESS);
};

void test_constructeur_mario(){
  std::cout<<"test du constructeur du mario: "<< std::endl;
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

void test_constructeur_yoshi(){
  std::cout<<"test du constructeur du yoshi: "<< std::endl;
  yoshi char1 = yoshi();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
};
