#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void Harl::debug(void)
{
  std::cout << "\x1B[1;34m[DEBUG] "
    << "helo"
    << "\x1B[0m" << std::endl;
}

void Harl::info(void)
{
  std::cout << "\x1B[1;32m[INFO] "
    << "@everyone"
    << "\x1B[0m" << std::endl;
}

void Harl::warning(void)
{
  std::cout << "\x1B[1;33m[WARNING]"
    << "wahoo"
    << "\x1B[0m" << std::endl;
}

void Harl::error(void)
{
  std::cout << "\x1B[1;31m[ERROR] "
    << "sadge"
    << "\x1B[0m" << std::endl;
}

void Harl::complain(std::string level)
{
  void (Harl::*func_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
  std::string levels[4] = { "DEBUG", "INFO", "WARNING", "ERROR" };

  for (int i = 0; i < 4; i++)
   {
     if (level == levels[i])
	 (this->*func_ptr[i])();
   }
}
