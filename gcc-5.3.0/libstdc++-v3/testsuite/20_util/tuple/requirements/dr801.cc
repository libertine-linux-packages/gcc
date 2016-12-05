// { dg-do compile }
// { dg-options "-std=gnu++11" }

// Copyright (C) 2010-2015 Free Software Foundation, Inc.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING3.  If not see
// <http://www.gnu.org/licenses/>.

#include <tuple>
#include <type_traits>

// DR 801, pair and tuple vs. "passed in registers"
void test_trivial()
{
  // PODType, TType, NType, SLType, LType, NLType, LTypeDerived
  typedef std::tuple<int, int> tuple_type;
  // static_assert(std::is_literal_type<tuple_type>::value, "! literal");
  static_assert(std::is_trivially_copy_constructible<tuple_type>::value,
		"! triv copy");
  static_assert(std::is_trivially_destructible<tuple_type>::value,
		"! triv destructor");
  // static_assert(std::is_standard_layout<tuple_type>::value,
  //		   "! standard layout");

  // Negative
  /*
  static_assert(std::has_trivial_default_constructor<tuple_type>::value,
		"! triv default");
  static_assert(std::has_trivial_copy_assign<tuple_type>::value,
		"! triv assign");
  static_assert(std::is_trivial<tuple_type>::value, "! triv");
  static_assert(std::is_pod<tuple_type>::value, "! pod");
  */
}

int main()
{
  test_trivial();
  return 0;
}
