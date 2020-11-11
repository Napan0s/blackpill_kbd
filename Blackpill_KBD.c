/* Copyright 2020 Daniel Reibl <janos.daniel.reibl@protonmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "blackpill_kbd.h"
#include  <print.h>

led_config_t g_led_config = { {
  { 0,      1,      2,      3,      4,      5,      6,      7,      8,      9,      10,     11,     12,     13,     14 },
  { 29,     28,     27,     26,     25,     24,     23,     22,     21,     20,     19,     18,     17,     16,     15 },
  { 30,     31,     32,     33,     34,     35,     36,     37,     38,     39,     40,     41,     42,     43,     44 },
  { 59,     58,     57,     56,     55,     54,     53,     52,     51,     50,     49,     48,     47,     46,     45 },
  { 60,     61,     62,     63,     64,     65,     66,     67,     68,     69,     70,     71,     72,     73,     74 }
  
}, {
    // Esc, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, -, =, Backspace
    {   0,   0 }, {  16,   0 }, {  32,   0 }, {  48,   0 }, {  64,   0 }, {  80,   0 }, {  96,   0 }, { 112,   0 }, { 128,   0 }, { 144,   0 }, { 160,   0 }, { 176,   0 }, { 192,   0 }, { 208,   0 }, { 224,   0 },
    // Tab, Q, W, E, R, T, Y, U, I, O, P, [, ],  ,
    {   0,   16 }, {  16,   16 }, {  32,   16 }, {  48,   16 }, {  64,   16 }, {  80,   16 }, {  96,   16 }, { 112,   16 }, { 128,   16 }, { 144,   16 }, { 160,   16 }, { 176,   16 }, { 192,   16 }, { 208,   16 }, { 224,   16 },
    // Capslock, A, S, D, F, G, H, J, K, L, ;, ', Enter
    {   0,   32 }, {  16,   32 }, {  32,   32 }, {  48,   32 }, {  64,   32 }, {  80,   32 }, {  96,   32 }, { 112,   32 }, { 128,   32 }, { 144,   32 }, { 160,   32 }, { 176,   32 }, { 192,   32 }, { 208,   32 }, { 224,   32 },
    // LShift, Z, X, C, V, B, N, M, ,, ., /, Shift, Up,
    {   0,   48 }, {  16,   48 }, {  32,   48 }, {  48,   48 }, {  64,   48 }, {  80,   48 }, {  96,   48 }, { 112,   48 }, { 128,   48 }, { 144,   48 }, { 160,   48 }, { 176,   48 }, { 192,   48 }, { 208,   48 }, { 224,   48 },
    // Ctrl, GUI, Alt, Space, RAlt, FN, Left, Down, Right
    {   0,   64 }, {  16,   64 }, {  32,   64 }, {  48,   64 }, {  64,   64 }, {  80,   64 }, {  96,   64 }, { 112,   64 }, { 128,   64 }, { 144,   64 }, { 160,   64 }, { 176,   64 }, { 192,   64 }, { 208,   64 }, { 224,   64 },
    // UNDERGLOW
    {   179, 16 }, {  134,  16 }, {  89, 16 }, { 44,  16 }, { 44,  48 }, { 89,  48 }, { 134,  48 }, { 179,  48 }
}, {
    // Esc, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, -, =, Backspace
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    // Tab, Q, W, E, R, T, Y, U, I, O, P, [, ],  ,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    // Capslock, A, S, D, F, G, H, J, K, L, ;, ', Enter
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    // LShift, Z, X, C, V, B, N, M, ,, ., /, Shift, Up,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    // Ctrl, GUI, Alt, Space, RAlt, FN, Left, Down, Right
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,

    // UNDERGLOW
    2, 2, 2, 2, 2, 2, 2, 2
} };
