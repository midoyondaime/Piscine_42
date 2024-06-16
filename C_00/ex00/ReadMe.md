# ReadMe
I am using the bult-in function **write** to print a char.
It is used to write data to a file descriptor.
this function is included in *unistd.h* library.

`write (int fd, const void *buf, size_t count);`

- fd : This is the file descriptor where the data should be written (0, 1 or 2 for terminal printing)
- buf : This is a pointer to the buffer.
- count : This specifies the number of bytes to write from the buffer.