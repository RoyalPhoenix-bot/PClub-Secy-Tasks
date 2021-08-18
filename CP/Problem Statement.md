# Naruto and his Dream
###### Time limit: 1 second
###### Memory limit: 256MB


Modern-Age Naruto wants to become a Secretary at the Programming Club in his University. The Programming Club gave him **N** tasks, out of which he needs to solve at least **K** of them. Each task requires **A<sub>i</sub>** (1<=i<=N) amount of effort to be put in before the deadline.
Naruto had planned to start working **10** days prior to the deadline and put Infinite  amount of effort each day. However, he slacked off and put only **E<sub>i</sub>** (1<=i<=N) amount of effort.\
It is the final day and Naruto realizes he is in trouble. He asks the Programming Club to give him more time. The Programming Club, agreed and handed him a piece of paper, on which it was written:\
_Though we cannot extend the deadline we can give you access to_ **T** _time machines._ **T** _is the units digit of sum of the number of factors of all number less than or equal to_ **Q**. _Factors of a number include both 1 and the number itself._\
And gave him the value of **Q**.\
Naruto ,being the lazy guy he is, decides to create **T** shadow clones and send each of them in a time machine.\
The Time Machines are linked with each other and can only go to different days in the past, to avoid overlapping. Since Naruto only put in some efforts for the last 10 days, it only makes sense to send a time machine back to one of those days.\
Once a Shadow Clone is back in the past, he can only put as much effort as Naruto had initially put on that particular day. Their effort gets added to the net effort put in by Naruto.\
Naruto sends the time machines back optimally in order to maximise his effort.\
Naruto can complete a task before the deadline if the total effort he's put up to now, strictly exceeds the effort required to complete the task.\
Find if Naruto can become a Secretary or not.

## Input Format
The first line contains **X**(1<=**X**<=1000) test cases, each test case consists of 3 lines.\
The first line of each test case contains 3 space separated integers, **N**,**K**,**Q** respectively.(1<=N<=10<sup>5</sup>, 1<=K<=N, 1<=Q<=2000).\
The second line contains **N** space separated integers  **A<sub>i</sub>**.(0<=**A<sub>i</sub>**<=10<sup>9</sup>)\
The last line consists of **10** space separated integers **E<sub>i</sub>**.(0<=**E<sub>i</sub>**<=10<sup>9</sup>)\
It is guaranteed that sum of **N** over all the test cases does not exceed 2x10<sup>5</sup>.\

Since Input can be large, it is recommended to use Fast Input\Output Methods.

## Output Format
Print `Yes` if Naruto can become a Secretary or `No` if he can't.


#### Example 
###### Input

```
1
6 4 3
90 10 40 80 42 69
5 3 0 0 8 4 1 0 10 7
```  
###### Output
```
Yes
```
#### Note
In the given test case, the current net effort put in by Naruto is the sum of all **E<sub>i</sub>** which is 38.\
To find the number of time machines, we need to find the sum of the number of factors of all numbers **<=Q**. Given Q=3, we see i=1,2 and 3. The number of factors of 1,2,3 are 1,2 and 2 respectively. So, Naruto receives 1+2+2 = 5 time machines.\
In Order to maximize his efforts, Naruto sends the time machines back to day 1,5,6,9,10.\
And so his net effort increases by 5+8+4+10+7 = 34.\
So the total effort increases to **72**. (38+34)\
With a total effort of 72, Naruto can complete a total of 4 tasks (2<sup>nd</sup>, 3<sup>rd</sup>, 5<sup>th</sup> and 6<sup>th</sup>).\
So he has a chance to become a Secretary.