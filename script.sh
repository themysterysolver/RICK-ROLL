#!/bin/bash

input_file="rickroll.txt"
output_dir="FRAMES"
mkdir -p "$output_dir"

line_count=0
file_count=1
output_file=$(printf "%s/txt%06d.txt" "$output_dir" "$file_count")

buffer=""

while IFS= read -r line; do
    buffer+="$line"$'\n'
    ((line_count++))

    if [[ $line_count -eq 37 ]]; then
        echo -n "$buffer" > "$output_file"
        ((file_count++))
        output_file=$(printf "%s/txt%06d.txt" "$output_dir" "$file_count")
        line_count=0
        buffer=""
    fi
done < "$input_file"

if [[ -n $buffer ]]; then
    echo -n "$buffer" > "$output_file"
fi
echo "Splitting done"