// --------------------------------README--------------------------------------------------

// the following is written by Chase Bishop
// We are using this version because our clients requested a standardized object class.
// Piazza post: https://piazza.com/class/k51bluky59n2jr?cid=345
// github link: https://github.com/chasebish/cwc_object_string

// ----------------------------------------------------------------------------------------

//lang::CwC
#pragma once

#include "object.h"
#include <cstdlib>
#include <cstring>
#include <cstdio> 

/**
 * An immutable String class representing a char*
 * author: chasebish */
class String : public Object {
public:
  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Creates a String copying s */
  String(const char* s);

  /* Copies a String copying the value from s */
  String(String* const s);

  /* Clears String from memory */
  ~String();


  /** INHERITED METHODS **/

  /* Inherited from Object, generates a hash for a String */
  size_t hash();

  /* Inherited from Object, checks equality between an String and an Object */
  bool equals(Object* const obj);


  /** STRING METHODS **/
  
  /** Compares strings based on alphabetical order
   * < 0 -> this String is less than String s
   * = 0 -> this String is equal to String s
   * > 0 -> this String is greater than String s
   */
  int cmp(String* const s);

  /* Creates a new String by combining two existing Strings */
  String* concat(String* const s);

  /* Returns the current length of the String */
  size_t size();
};