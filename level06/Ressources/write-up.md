# Level06

We analyzed the regex in the `level6.php` file.

![image](https://user-images.githubusercontent.com/29956389/90311227-f9a7c980-def8-11ea-9d45-5048167364c3.png)

A regex with `/e` in php is vulnerable as it executes code, so after wrapping our command with the appropriates characters `"[x {${system(getflag) }}]"` and putting it into a file, we were able to execute arbitrary code and get the flag that way.
