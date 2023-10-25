/* Copyright (C) 2023 ChenPi11.
   This file is not a part of the GNU LIBICONV Library, but it's a part of 'libiconv-for-Windows'.
   This 'config.h' is for MSVC build by sln file, if we use CMake for build, we do not use this file.

   */


/* Define to 1 to enable a few rarely used encodings. */
/* #undef ENABLE_EXTRA */

/* Define to 1 if the package shall run at any location in the filesystem. */
/* #undef ENABLE_RELOCATABLE */

/* We do not use 'const' for ICONV_CONST */
#define ICONV_CONST 

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
/* MSVC do not have nl_langinfo */
/* #undef HAVE_LANGINFO_CODESET */

/* Define if you have the mbrtowc() function. */
#define HAVE_MBRTOWC 1

/* Define to 1 or 0, depending whether the compiler supports simple visibility
   declarations. */
#define HAVE_VISIBILITY 0

/* Define if you have the wcrtomb() function. */
#define HAVE_WCRTOMB 1

/* Define if the machine's byte ordering is little endian. */
#define WORDS_LITTLEENDIAN 1
