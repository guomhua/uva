$file = $args[0];
$file_output = "$file.out"
$file_error = "$file.err"

g++ -std=c++0x -g "$file.cpp" -o "$file"
#g++ -g $1.cpp -o $1
#./$1 < tests/$2.in
Get-Content .\input | .\temp.exe > $file_output 2> $file_error
compare-object (get-content output) (get-content $file_output)
#diff error $1.err
rm "$file.exe"
#rm *~