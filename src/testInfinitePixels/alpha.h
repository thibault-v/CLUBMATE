int iter_1[20] = {
   19, 18, 17, 16,
   12, 13, 14, 15,
   11, 10,  9,  8,
    4,  5,  6,  7,
    3,  2,  1,  0
};

int iter_2[20] = {
   3,  2,  1,  0,
   4,  5,  6,  7,
  11, 10,  9,  8,
  12, 13, 14, 15,
  19, 18, 17, 16
};


int alpha[26][20] = {
// a
{0, 1, 1, 0,
 1, 0, 0, 1,
 1, 1, 1, 1,
 1, 0, 0, 1,
 1, 0, 0, 1},
 // b
{1, 1, 1, 0,
 1, 0, 0, 1,
 1, 1, 1, 0,
 1, 0, 0, 1,
 1, 1, 1, 0},
 // c
{1, 1, 1, 1,
 1, 0, 0, 0,
 1, 0, 0, 0,
 1, 0, 0, 0,
 1, 1, 1, 1},
 // d
{1, 1, 1, 0,
 1, 0, 0, 1,
 1, 0, 0, 1,
 1, 0, 0, 1,
 1, 1, 1, 0},
 // e
{1, 1, 1, 1,
 1, 0, 0, 0,
 1, 1, 1, 0,
 1, 0, 0, 0,
 1, 1, 1, 1},
 // f
{1, 1, 1, 1,
 1, 0, 0, 0,
 1, 1, 1, 0,
 1, 0, 0, 0,
 1, 0, 0, 0},
 // g
{1, 1, 1, 1,
 1, 0, 0, 0,
 1, 0, 1, 1,
 1, 0, 0, 1,
 1, 1, 1, 1},
 // h
{1, 0, 0, 1,
 1, 0, 0, 1,
 1, 1, 1, 1,
 1, 0, 0, 1,
 1, 0, 0, 1},
 // i
{0, 1, 0, 0,
 0, 0, 0, 0,
 0, 1, 0, 0,
 0, 1, 0, 0,
 0, 1, 0, 0},
 // j
{0, 1, 0, 0,
 0, 0, 0, 0,
 0, 1, 0, 0,
 0, 1, 0, 0,
 1, 1, 0, 0},
 // k
{1, 0, 0, 1,
 1, 0, 1, 0,
 1, 1, 0, 0,
 1, 0, 1, 0,
 1, 0, 0, 1},
 // l
{1, 0, 0, 0,
 0, 0, 0, 1,
 1, 0, 0, 0,
 0, 0, 0, 1,
 1, 1, 1, 1},
 // m
{1, 0, 0, 1,
 1, 1, 1, 1,
 1, 0, 0, 1,
 1, 0, 0, 1,
 1, 0, 0, 1},
 // n
{1, 0, 0, 1,
 1, 1, 0, 1,
 1, 0, 1, 1,
 1, 0, 0, 1,
 1, 0, 0, 1},
 // o
{1, 1, 1, 1,
 1, 0, 0, 1,
 1, 0, 0, 1,
 1, 0, 0, 1,
 1, 1, 1, 1},
 // p
{1, 1, 1, 1,
 1, 0, 0, 1,
 1, 1, 1, 1,
 1, 0, 0, 0,
 1, 0, 0, 0},
 // q
{1, 1, 1, 0,
 1, 0, 1, 0,
 1, 0, 1, 0,
 1, 1, 1, 0,
 0, 0, 0, 1},
 // r
{1, 1, 1, 0,
 1, 0, 0, 1,
 1, 1, 1, 0,
 0, 1, 0, 1,
 1, 0, 0, 1},
 // s
{1, 1, 1, 1,
 1, 0, 0, 0,
 1, 1, 1, 1,
 0, 0, 0, 1,
 1, 1, 1, 1},
 // t
{1, 1, 1, 0,
 0, 1, 0, 0,
 0, 1, 0, 0,
 0, 1, 0, 0,
 0, 1, 0, 0},
 // u
{1, 0, 0, 1,
 1, 0, 0, 1,
 1, 0, 0, 1,
 1, 0, 0, 1,
 1, 1, 1, 1},
 // v
{1, 0, 1, 0,
 1, 0, 1, 0,
 1, 0, 1, 0,
 1, 0, 1, 0,
 0, 1, 0, 0},
 // w
{1, 0, 0, 1,
 1, 0, 0, 1,
 1, 0, 0, 1,
 1, 1, 1, 1,
 1, 0, 0, 1},
 // x
{1, 0, 1, 0,
 1, 0, 1, 0,
 0, 1, 0, 0,
 1, 0, 1, 0,
 1, 0, 1, 0},
 // y
{1, 0, 1, 0,
 1, 0, 1, 0,
 1, 0, 1, 0,
 0, 1, 0, 0,
 0, 1, 0, 0},
 // z
{1, 1, 1, 1,
 0, 0, 1, 0,
 0, 1, 1, 0,
 0, 1, 0, 0,
 1, 1, 1, 1},
};
