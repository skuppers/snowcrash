# Level03

We copied the binary locally and loaded it in `Cutter`, a dissasembly and decompiling tool built on top of `Ghidra` and `Radare2`. Since the binary was doing a call to `system()`, which executed a call to `/usr/bin/env echo`, we replaced echo in our $PATH by a crafted binary executing "getflag". 