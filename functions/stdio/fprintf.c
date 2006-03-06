/* $Id$ */

/* Release $Name$ */

/* fprintf( FILE *, const char *, ... )

   This file is part of the Public Domain C Library (PDCLib).
   Permission is granted to use, modify, and / or redistribute at will.
*/

#include <stdio.h>
#include <stdarg.h>

#ifndef REGTEST

int fprintf( FILE * _PDCLIB_restrict stream, const char * _PDCLIB_restrict format, ... )
{
    va_list ap;
    va_start( ap, format );
    return vfprintf( stream, format, ap );
}

#endif

#ifdef TEST
#include <_PDCLIB_test.h>

int main( void )
{
    TESTCASE( NO_TESTDRIVER );
    return TEST_RESULTS;
}

#endif
