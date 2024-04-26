echo "Enter limit: "
read lim
n1=0
n2=1
count=0
echo "Fibonacci Series is: "
echo "$n1"
echo "$n2"
while [ $count -lt `expr $lim - 2` ]
do
n3=`expr $n1 + $n2`
n1=`expr $n2`
n2=`expr $n3`
count=`expr $count + 1`
echo "$n2"
done