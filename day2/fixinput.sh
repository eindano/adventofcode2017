#!/bin/sh

sed -s 's/\t/,/g;s/^/{/;s/$/},/' input.txt
