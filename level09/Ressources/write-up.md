# Level09

We have two files: `level09` a binary, and `token` an ascii text file.

As we execute the `level09` binary, it ask us to provide an argument. We launch it with the token file straightaway, but it returns only 5 characters.

When opening the token file, we see many non-printable characters which are probably not evaluated by the binary.

Testing the binary with simple strings exposes a pattern:

If we enter `aaaaa`, the output is `abcde`.

The pattern corresponds with the first test, that we did with the token file.
As not all characters are evaluated, we need to bypass this with a little binary (found in the Ressources folder).

The binary reads all 25 characters from the token file and applies the reverse pattern, so instead of incrementing by one every char, we decrement it.
Which gives us the key.

