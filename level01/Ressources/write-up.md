# Level01

We tried to cat `/etc/passwd` to see if there was any information: the flag01 was stored in there. We then copied the file locally and passed it
through "john the ripper", a password cracker that returned us the correct string to log into the flag01 account: `abcdefg`.
