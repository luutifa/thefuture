// Copyright 2015 Lauri Gustafsson
/*
This file is part of Low Quality is the Future.

    Low Quality is the Future is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Low Quality is the Future is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Low Quality is the Future, see COPYING. If not, see <http://www.gnu.org/licenses/>.
*/

#include "demo_timing.hpp"
#include <cstdlib>

float const PART_TIMES[] = {
    30.0f,
    1.2f,
    28.1f,
    1.0,
    10.0f,
    1.0f,
    3.0f,
    1.0f,
    1000.0f
};
int const PARTS = sizeof(PART_TIMES)/sizeof(PART_TIMES[0]);
