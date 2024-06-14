# ReadMe

Using the command *file* with the option *-m* referring to magic file.

```bash
file -m ft_magic testfile.bin
```

Magic file is a file used by UNIX-based operating systems to identify a file type by examining its content rather than relying on its file extension or metadata.

my magic file detect files of 42 file type, built with a "42" string at the 42nd byte.

```bash
Offset type value message
```
* Offset : where to start looking
* type : type of file
* value : value we are looking for
* message : message to display

For more information : https://0xpius.hashnode.dev/a-quick-guide-to-magic-files