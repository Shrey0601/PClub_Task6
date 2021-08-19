# Fun With Numbers - Tutorial
It is given that a2 % a3 = 0. So take a2 = (k1)*a3. Also a1 % a2 = a3. So a1 = k2*a2 + a3. Here k1,k2 are arbitary positive integers. </br>
Consider the case where a2 > a1, so clearly, a1 = a3. Number of such trios is summation from a3=1 to n of (n/a3)-1 as n/a3-1 are distinct values of a2 greater than a1 and with a3 as factor. </br>
Also a2 = a1 is not possible as a3 will be 0 in that case. </br>
Now, since a2 > 0, k1 >= 1 and also as a2 < a1, k2 >= 1 </br>
 So a1 = (k1*k2 + 1)*a3 and a1 <= n, <b> 1 <= a3 <=n/2 </b> as k1*k2 >= 1</br> 
 Also, clearly a2 <= n, so <b> 1 <= k1 <= n/a3 </b> </br>
 So, a1 = (k1*k2 +1)*a3 <= n </br>
 So, <b>1 <= k2 <= (n/a3 -1)/k1 </b> </br>
 So Final answer will be obtained by updating (n/a3-1)/k1 by using the nested for loops.
