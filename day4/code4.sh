#/bin/bash

rm -f out_uniq.txt out.txt uniq2.txt sortline2.txt
while read line; do    
  # part one   
  sortline_uniq=$(echo "$line" | tr " " "\n" |sort | uniq | tr "\n" " ")   
  sortline=$(echo "$line" | tr " " "\n" |sort | tr "\n" " ")   
  echo $sortline_uniq >>out_uniq.txt   echo $sortline >>out.txt         
  
  # part two   
  sortline_uniq2=$(echo "$line" | tr " " "\n" |sort | uniq)   
  uniq2=""   
  for l in $sortline_uniq2; do      
    uniq2=$uniq2$(echo $l | grep -o . | sort | tr -d "\n")" "         
  done   
  echo $(echo "$uniq2" | tr " " "\n" |sort | uniq | tr "\n" " ") >>uniq2.txt         
  
  sortline_2=$(echo "$line" | tr " " "\n" |sort | tr "\n" " ")   
  sortline2=""   
  for l in $sortline_2; do      
    sortline2=$sortline2$(echo $l | grep -o . | sort | tr -d "\n")" "   
  done   
  echo $(echo "$sortline2" | tr " " "\n" |sort | tr "\n" " ") >>sortline2.txt    
done < input.txt

echo "Part one:"diff --side-by-side  out_uniq.txt out.txt | grep -v "|" | grep -v "^$" | wc -l
echo "Part two:"diff --side-by-side  uniq2.txt sortline2.txt | grep -v "|" | grep -v "^$" | wc -l
