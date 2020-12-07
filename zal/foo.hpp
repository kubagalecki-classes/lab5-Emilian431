#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    std::vector<char> wektor;
    for ( std::list<Human>::reverse_iterator it = people.rbegin(); it != people.rend(); ++it)
    {
      it ->birthday();
      if ( it->isMonster() == true)
      {
        wektor.push_back('n');
      }
      else
      {
        wektor.push_back('y');
      }
    }
    return {wektor};
}
