#include "Harl.hpp"

int main(void)
{
  Harl myGoat;
  myGoat.complain("DEBUG");
  myGoat.complain("INFO");
  myGoat.complain("DEBUG");
  myGoat.complain("WARNING");
  myGoat.complain("WARNING");
  myGoat.complain("ERROR");
}
