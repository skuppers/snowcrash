# Level00

We searched the file system to indentify a match.

`ls -Rla / | grep flag00`

We found the file "john", so we tried to locate it.

`find / -name "john"`

The file was placed in `/usr/sbin/john`, which was out of place, so we looked into it

`cat john`

The output of the command was the following | cdiiddwpgswtgt

It looked like a simple string permutation, so we tried all the combinaisons on the website https://www.dcode.fr/caesar-cipher.

The first result was "nottoohardhere", which alowed us to login in the flag00 acount.
