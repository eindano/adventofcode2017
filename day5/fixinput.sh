#!/bin/bash

for i in `cat input.txt`;do 
  o=$o$i","
done
echo $o
