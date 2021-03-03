//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
  public:

  double p;
  double q;
  double r;
  double s;
  double t = 2.0;

  

  Quaternion (double p, double q, double r, double s){

    this->p = p;
    this->q = q;
    this->r = r;
    this->s = s;

  }

bool operator==(const Quaternion p){

  if ((p.p==this->p) && (p.q==this->r))
  return true;

  else
  return false;
}

Quaternion operator+(const Quaternion&) {

p += q;
return *this;

}

Quaternion operator-(const Quaternion&) {

  p-=q;
  return *this;
}

Quaternion operator*=(const Quaternion){

  q*=t;
  return *this;
}

Quaternion operator*=(const Quaternion &q){
  return *this;
}

};

//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
     }
      SECTION( "q3" ) {
Quaternion q{1.0, 2.0, 3.0, 4.0};
Quaternion r{2.0, 4.0, 6.0, 8.0};
 }
}
//------------------------------
