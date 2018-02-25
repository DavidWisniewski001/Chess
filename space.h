////////////////////////////////////////////////////////////////////////////////
/*******************************************************************************
David Wisniewski
project 6b
This is the space for the Chess board
*******************************************************************************/
////////////////////////////////////////////////////////////////////////////////
#ifndef Space
#define Space
#include <cassert>
#include <climits>
#include<fstream>
#include <iostream>
#include <queue>
#include <string>
#include"char.h"
#include "colors.h"

using namespace std;
class space
{
public:
  space();
  bool is_black()const{ return black;}
  bool is_white()const{return white;}
  bool is_pawn()const{return pawn;}
  bool is_rook()const{return rook;}
  bool is_knight()const{return knight;}
  bool is_biship()const{return biship;}
  bool is_king()const{return king;}
  bool is_queen()const{retun queen;}


  bool is_empty()const{return blank;}

  void set_black(){black = true; blank = false;}
  void set_white(){white = true; blank = false;}
  void empty(){blank = true; white = false; black = false;}
  void set_pawn();
  void set_rook();
  void set_kight();
  void set_biship();
  void set_king();
  void set_queen();
  void capture();
  void display(const std::ostream& outs)const;

private:
  bool black;
  bool white;
  bool blank;
  bool pawn;
  bool king;
  bool queen;
  bool rook;
  bool knight;
  bool biship;
};
std::ostream& operator << (ostream& outs, const space& s);
#endif

// public:Copyright (c) 2017 Copyright Holder All Rights Reserved.
