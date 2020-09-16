# Level13

![image](https://user-images.githubusercontent.com/29956389/93333576-cc19ad00-f823-11ea-8e15-eee4e13dc27f.png)

After dissasembling the program, we have no other choice than injecting a crafted library, which overrides the libc `getuid()` function.

Compile the function with `gcc -shared getuid.c -o getuid.so`.

Do `export LD_PRELOAD=/tmp/level13/getuid.so`.

Launch the `level13` binary in gdb to get the flag.
