#ifndef MY_CONSTANT_H
# define MY_CONSTANT_H

# define FALSE 0
# define TRUE 1
# define ZERO 0
# define BYTE 1

# define TO_UPPER - 32
# define TO_LOWER + 32
# define A_UPPER 65
# define Z_UPPER 90
# define A_LOWER 97
# define Z_LOWER 122
# define _1K 1000

/** SIZE_TYPES **/
# define U_CHAR_BITSIZE 8
# if UINT_MAX > 0xffff
#  define TAM_U_CHAR 16
# elif UINT_MAX > 0xffffffff
#  define TAM_U_CHAR 32
# else
#  define TAM_U_CHAR __CHAR_BIT__
# endif

#endif