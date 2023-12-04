#include "character.h"
#include<iostream>

void test_constructeur();
void test_accelerate();
void test_break();

int main(){
  test_constructeur();
  test_accelerate();
  test_break();

  std::exit(EXIT_SUCCESS);
};

void test_constructeur(){
  std::cout<<"test du constructeur : "<< std::endl;
  character char1 = character();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
};

void test_accelerate(){
  std::cout<<"test de Accelerate() : "<< std::endl;
  character char1 = character();
  char1.Accelerate();
  std::cout<<"La vitesse est : ";
  std::cout<< char1.speed()<<std::endl;
  std::cout<<"La vitesse est max : ";
  std::cout<< char1.max_speed()<<std::endl;
};

void test_break(){
  std::cout<<"test de Break() : "<< std::endl;
  character char1 = character();
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
