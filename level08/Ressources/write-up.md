# Level08

We analyzed the binary, and saw that the call to `open()` was not protected by a `O_NOFOLLOW` so we made a symlink pointing to the token file and passed it to the
binary:

`$ ln -s /home/user/level08/token /tmp/level08`

`$ ./level08 /tmp/level08`

It gave us the password to login as flag08.
