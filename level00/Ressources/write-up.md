# Level00

We searched the file system to indentify a match.

`ls -Rla / 2>&- | grep flag00`

We found the file "john", so we tried to locate it.

`find / -name "john" 2>&-`

The file was placed in `/usr/sbin/john`, which was out of place, so we looked into it

`cat /usr/sbin/john`

The output of the command was the following | cdiiddwpgswtgt

It looked like a simple aplphabetical permutation, we tried all 26 rotations on the website https://www.dcode.fr/caesar-cipher.

Indeed, the ROT+15 gave us the first result "nottoohardhere", which alowed us to login in the flag00 acount.
