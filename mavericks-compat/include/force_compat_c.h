#ifndef __ASSEMBLER__
#ifndef FORCE_COMPAT_C_H
#define FORCE_COMPAT_C_H
#include <sys/stat.h>
#include <dirent.h>
#include <time.h>

int clonefile(const char * src, const char * dst, int flags);

#ifndef AT_FDCWD
#define AT_FDCWD -2
#define AT_SYMLINK_NOFOLLOW 0x0020
#define AT_REMOVEDIR 0x0080
#endif

int openat(int fd, const char *path, int oflag, ...);
int fstatat(int fd, const char *path, struct stat *buf, int flag);
DIR *fdopendir(int fd);
int fchmodat(int fd, const char *path, mode_t mode, int flag);
int futimens(int fd, const struct timespec times[2]);
int utimensat(int fd, const char *path, const struct timespec times[2], int flag);

#ifdef IS_AWT
/* Маскируем новые платформы, чтобы Clang 17 не пугался их имен в режиме target 10.9 */
/* Мы подменяем их на macOS, которую компилятор точно знает */
#define visionOS macOS
#define watchOS macOS
#define tvOS macOS
#define macCatalyst macOS

#ifndef NSWindowTabbingModeAutomatic
typedef long NSInteger;
typedef long NSWindowTabbingMode;
#define NSWindowTabbingModeAutomatic 0
#define NSWindowTabbingModePreferred 1
#define NSWindowTabbingModeDisallowed 2
#endif
#endif
#endif
#endif
