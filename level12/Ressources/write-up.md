# In the perl script we see that it runs on localhost on port 4646
# Most of the code can be ignored, appart from those 3 lines:

`$xx =~ tr/a-z/A-Z/;`

`$xx =~ s/\s.*//;`

`@output = `egrep "^$xx" /tmp/xd 2>&1`;`

# Which turns all lowercase letters to uppercase
# Removes all whitespaces
# And execute the command between backquotes, where the user input is.

# It works the same way as level04 execpt for some minor changes:
# We need to create a file in the /tmp/ folder as we can not inject the command
directly, so we need to bypass it.
# A simple 'getflag' bash script put to /tmp/SCRIPT (remember the
uppercase regex)

# And then we need to bypass the /tmp/ put to uppercase, so we use the *
character.

# Which gives us /*/SCRIPT 
# Now URL-encode it with backtiks and send the request via browser or curl.