#!/bin/sh

cat input.txt | sed -s 's/\t/,/g;s/^/{/;s/$/},/'
