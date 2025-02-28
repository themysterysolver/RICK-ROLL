#!/bin/bash
for i in {1..999};do
    jp2a --chars=" ." --width=80 frames/frame$(printf "%04d" $i).png > frames/frame$(printf "%04d" $i).txt
done
echo "png-->txt"