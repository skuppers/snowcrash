# Level06

We analyzed the regex in the `level6.php` file. A regex with `/e` in php is vulnerable as it executes code, so after wrapping our command with the appropriates characters `"[x {${system(getflag) }}]"` and putting it into a file, we were able to execute arbitrary code and get the flag that way.
