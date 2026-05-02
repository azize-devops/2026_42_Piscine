/* Dummy unistd.h for Windows VSCode - DELETE before submission */
#ifndef UNISTD_H
# define UNISTD_H

# include <io.h>
# include <stddef.h>

typedef long ssize_t;

ssize_t	write(int fd, const void *buf, size_t count);

#endif
