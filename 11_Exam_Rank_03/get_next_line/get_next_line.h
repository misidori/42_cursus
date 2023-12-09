#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

size_t	ft_strlen(const char *s);
char	*ft_strchr(char *s, int c);
char	*ft_strjoin(char *stash, char *buffer);
char	*ft_read_file(int fd, char *stash);
char	*ft_get_line(char *stash);
char	*ft_reduce_stash(char *stash);
char	*get_next_line(int fd);

#endif
