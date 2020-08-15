# Level04

A perl script is running and accessible on the port 4747 of our virtual machine. The call to `echo` is vulnerable, as the builtin is called with backticks.

![image](https://user-images.githubusercontent.com/29956389/90311171-97e75f80-def8-11ea-8d77-0d178e0b3b2a.png)

We injected code through, to take advantage of the backticks and execute `getflag`, after html-encoding our command to pass it in the web browser.
