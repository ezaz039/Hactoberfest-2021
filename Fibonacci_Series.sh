echo "Enter the Number of Terms"
read a
i=1
x=1
y=0
while [ $i -le $a ]
do
echo $y
z=$((x + y))
y=$((x + 0))
x=$((z + 0))
i=$((i + 1))
done
