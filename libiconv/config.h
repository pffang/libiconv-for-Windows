/* Define to 1 to enable a few rarely used encodings. */
#define ENABLE_EXTRA 1

/* Define to 1 if the package shall run at any location in the filesystem. */
/* #undef ENABLE_RELOCATABLE */

/* Define to a type if <wchar.h> does not define. */
/* #undef mbstate_t */

/* Define if you have <iconv.h>, the iconv_t type, and the
   iconv_open, iconv, iconv_close functions. */
/* #undef HAVE_ICONV */
/* Define as const if the declaration of iconv() needs const. */
#define ICONV_CONST /* empty by default */

/* Define to 1 if you have the getc_unlocked() function. */
/* #undef HAVE_GETC_UNLOCKED */

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
/* #undef HAVE_LANGINFO_CODESET */

/* Define if you have the mbrtowc() function. */
#define HAVE_MBRTOWC 1

/* Define to 1 if you have the setlocale() function. */
#define HAVE_SETLOCALE 1

/* Define to 1 if you have the <stddef.h> header file. */
#define HAVE_STDDEF_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 or 0, depending whether the compiler supports simple visibility
   declarations. */
#define HAVE_VISIBILITY 0

/* Define if you have the wcrtomb() function. */
#define HAVE_WCRTOMB 1

/* Define to 1 if O_NOFOLLOW works. */
#define HAVE_WORKING_O_NOFOLLOW 0

/* Define if the machine's byte ordering is little endian. */
#define WORDS_LITTLEENDIAN 1

/* Define to the value of ${prefix}, as a string. */
/* #undef INSTALLPREFIX */

/* Define to '__inline__' or '__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to 'int' if <sys/types.h> does not define. */
/* #define mode_t int */

/* Define as a signed type of the same size as size_t. */
/* #define ssize_t long long */
