/*
Copyright 2022 ojthetiny

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "dd40.h"

led_config_t g_led_config = { {
    // Key Matrix to LED Index
    { 0 },
    { 1 },
    { 2 },
    { 3 },
    { 4 },
    { 5 },
    { 6 }
}, {
    // LED Index to Physical Position
    { 17, 10 }, 
    { 17, 13 }, 
    { 17, 16 },
    { 17, 19 },
    { 17, 22 },
    { 17, 25 },
    { 17, 28 }
}, {
    // LED Index to Flag
    1, 1, 1, 1, 1, 1, 1
}};