# Level14s

As we logged in, we don't see any files in the home directory that peek out.
So we searched for files with special permissions, checked running processes, services, network sockets, cron jobs, but we found nothing.

So we decided to reverse engineer the getflag binary with cutter.

At the end of the file we found the string which corresponds to the level 14, and  but it is encrypted using the ft_des function.

![image](https://user-images.githubusercontent.com/29956389/93334876-e48ac700-f825-11ea-8d3a-0146df8a9feb.png)

So we copied the entire function, rewrote it to understand it better, and added a main function to pass the first argument to ft_des and print the result. TA-DA!
