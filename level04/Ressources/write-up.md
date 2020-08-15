# Level04

A perl script is running and accessible on the port 4747 of our virtual machine. The call to `echo` is vulnerable, as the builtin is called
with backticks. We injected code through, to take advantage of the backticks and execute `getflag`, after encoding our command to pass it in the web
browser.
