# Level03

We find a binary called `level03` in our home.

`$ file level03` -> `level03: setgid ELF 32-bit LSB executable...`

`$ objdump -d level03` to disassemble the binary and look into it.

![image](https://user-images.githubusercontent.com/29956389/92146552-2d9c4d80-ee1a-11ea-9072-f955e2db83f9.png)

We observe calls to `setresgid`, `setresuid` and `system`.

`$ strings level03` to search for interesting strings:

![image](https://user-images.githubusercontent.com/29956389/92147158-fed2a700-ee1a-11ea-8c2e-f003a4b746b8.png)

`/usr/bin/env echo Exploit me` looks like a good one. It is probably the argument of the `system` call.

From then, we crafted a binary named `echo` with executes `getflag` for us, and added our current working directory to our `$PATH`.
