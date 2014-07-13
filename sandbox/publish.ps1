cp temp.cpp ..\"$args[0].cpp"
cd ..
git add "$args[0].cpp"
git commit -a -m "$args[0]"
git push origin master
cd sandbox