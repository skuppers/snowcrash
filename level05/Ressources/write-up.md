# Level05

As we login we were told that we got mail, so we looked into `/var/mail/level05`. The content of the mail was a crontab command.

We put the entire command in the crontab for the `flag05` user. Which is executing `/opt/usr/openarenaserver`, which itself executes every file placed in `/opt/openarenaserver`.

From there we just had to put a script there to run `getflag` and write the output to a file that we had access to in `/tmp/level05`.

Don't forget to chmod +x the script.
