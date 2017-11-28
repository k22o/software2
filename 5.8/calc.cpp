#include <iostream>

class Rat{
private:
  int numerator;
  int denominator;

public:
  Rat(){}
  Rat(int n,int d){
    numerator = n;
    denominator = d;
  }
  int GetNumer() const {return numerator;}//これは関数
  int GetDenom() const {return denominator;}//これは関数

  Rat operator+(const Rat& r)
  {
    return Rat(((GetNumer() * r.getDenom())+
		(getDenom() * r.getNumer())),
	       (GetDenom() * r.GetDenom()));
  }
  Rat operator*(const Rat& r)
  {
    return Rat((GetNumer() * r.getNumer()),
	       (GetDenom() * r.GetDenom()));
  }
};

std::ostream& operator<<(std::ostream& os, const Rat& r)
{
  return (os << r.GetNumer() << "/" << r.GetDenom();
}

template <class T> T liniar_combination(T a,T b, T x, T y){
    return (a*x + b*y);
}

int main()
{
  Rat one_half = Rat(1,2);
  Rat one_third = Rat(1,3);

  std::cerr << one_half << std::endl;
  std::cerr << one_third << std::endl;

  std::cerr << one_half + one_third << std::endl;
  std::cerr << one_half * one_third << std::endl;
  
  std::cerr<< linear_combination(1,2,3,4) << std::endl;
  std::cerr<< linear_combination(one_half,one_half,one_third,one_third) << std::endl;
}
