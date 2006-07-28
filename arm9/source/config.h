/* config.h.  Generated by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */

#define PATH_MAX 1024

/* Uncomment this to exhaustively run memory checks while the game is running
   (this is EXTREMELY slow). */
#define CHECKHEAP 1 // TODO: DISABLE!!!

/* Define for support for MBF helper dogs */
#define DOGS 1

/* Define to be the path where Doom WADs are stored */
#define DOOMWADDIR "/"

/* Define if you want to build with OpenGL support */
#undef GL_DOOM

/* Define to 1 if you have the <asm/byteorder.h> header file. */
#undef HAVE_ASM_BYTEORDER_H

/* Define to 1 if you have the declaration of `sys_siglist', and to 0 if you
   don't. */
#undef HAVE_DECL_SYS_SIGLIST

/* Define to 1 if you have the `getopt' function. */
#undef HAVE_GETOPT

/* Define to 1 if you have the `inet_aton' function. */
#undef HAVE_INET_ATON

/* Define to 1 if you have the `inet_ntop' function. */
#undef HAVE_INET_NTOP

/* Define to 1 if you have the `inet_pton' function. */
#undef HAVE_INET_PTON

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define if you have struct sockaddr_in6 */
#undef HAVE_IPv6

/* Define to 1 if you have the `dmalloc' library (-ldmalloc). */
#undef HAVE_LIBDMALLOC

/* Define to 1 if you have the `m' library (-lm). */
#undef HAVE_LIBM

/* Define to 1 if you have the `png' library (-lpng). */
#undef HAVE_LIBPNG

/* Define if you have the SDL mixer library -lSDL_mixer */
#undef HAVE_LIBSDL_MIXER

/* Define if you have the SDL net library -lSDL_net */
#undef HAVE_LIBSDL_NET

/* Define to 1 if you have the <linux/joystick.h> header file. */
#undef HAVE_LINUX_JOYSTICK_H

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `mmap' function. */
#undef HAVE_MMAP

/* Define if you want network game support */
#undef HAVE_NET

/* Define to 1 if you have the `SDL_JoystickGetAxis' function. */
#undef HAVE_SDL_JOYSTICKGETAXIS

/* Define to 1 if you have the `snprintf' function. */
#undef HAVE_SNPRINTF

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#undef HAVE_SYS_WAIT_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the `usleep' function. */
#undef HAVE_USLEEP

/* Define to 1 if you have the `vsnprintf' function. */
#undef HAVE_VSNPRINTF

/* Uncomment this to cause heap dumps to be generated. Only useful if
   INSTRUMENTED is also defined. */
/* #undef HEAPDUMP */

/* Define for high resolution support */
#undef HIGHRES

/* Define on targets supporting 386 assembly */
#undef I386_ASM

/* Define this to see real-time memory allocation statistics, and enable extra
   debugging features */
#define INSTRUMENTED 1

/* Name of package */
#define PACKAGE "DS Doom"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Set to the attribute to apply to struct definitions to make them packed */
#define PACKEDATTR __attribute__((packed))

/* Define to enable internal range checking */
#define RANGECHECK 1

/* Define if you have an old SDL_net, such that the UDPpacket structure has a
   src member instead of an address member */
/* #undef SDL_NET_UDP_PACKET_SRC */

/* Defining this causes quick checks which only impose an overhead if a
   posible error is detected. */
#define SIMPLECHECKS 1

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Defining this causes time stamps to be created each time a lump is locked,
   and lumps locked for long periods of time are reported */
#undef TIMEDIAG

/* Define if you want to use gluImageScale */
#undef USE_GLU_IMAGESCALE

/* Define if you want to use gluBuild2DMipmaps */
#undef USE_GLU_MIPMAP

/* Define if you want to use the SDL net lib */
#undef USE_SDL_NET

/* Version number of package */
#define VERSION "2.4.2"

/* Define to 1 if your processor stores words with the most significant byte
   first (like Motorola and SPARC, unlike Intel and VAX). */
#undef WORDS_BIGENDIAN

/* Define to 1 if the X Window System is missing or not being used. */
/* #undef X_DISPLAY_MISSING */

/* Uncomment this to perform id checks on zone blocks, to detect corrupted and
   illegally freed blocks */
#define ZONEIDCHECK 1

/* Define to empty if `const' does not conform to ANSI C. */
/* #undef const */

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef gid_t */

/* Define to `__inline__' or `__inline' if that's what the C compiler
   calls it, or to nothing if 'inline' is not supported under any name.  */
#ifndef __cplusplus
/* #undef inline */
#endif

/* Define to `unsigned' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define to strcasecmp, if we have it */
#define stricmp strcasecmp

/* Define to strncasecmp, if we have it */
#define strnicmp strncasecmp

/* Define to `int' if <sys/types.h> doesn't define. */
/* #undef uid_t */
