#/bin/sh
cat /etc/passwd | sed '/^#/ d' | sed -n 'n;p' | sed 's/:.*//' | rev | sort -r | sed -n "3,10p" | sed 's/^/ /' | paste -d, -s - | cut -c 2- | tr "\n" "."
