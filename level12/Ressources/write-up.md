# Level12

![image](https://user-images.githubusercontent.com/29956389/93331999-c6ea3d00-f7e6-11ea-8e78-c89b2b63aa6e.png)

In the perl script we see that it runs on localhost on port 4646. Most of the code is straightforward, appart from those 3 lines:

`$xx =~ tr/a-z/A-Z/;`

`$xx =~ s/\s.*//;`

`@output = `egrep "^$xx" /tmp/xd 2>&1`;`

Which respectively turns all lowercase letters to uppercase; Removes all whitespaces; And execute the command between backquotes, where the user input is.

It works the same way as level04 except for some minor changes:

We need to create a file in the `/tmp/` folder as we can not inject the command directly, so we need to bypass it.
A simple 'getflag' bash script put to /tmp/SCRIPT (remember the uppercase regex)

And then we need to bypass the `/tmp/` put to uppercase, so we use the `*` character.

Which gives us /*/SCRIPT. Now URL-encode it with backtiks and send the request via browser or curl.
