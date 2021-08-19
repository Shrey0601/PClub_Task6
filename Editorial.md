# Fun With Numbers
It is given that a2 % a3 = 0. So take a2 = k1*a3. Also a1 % a2 = a3. So a1 = k2*a2 + a3. Here k1,k2 are arbitary psoitive constants. </br>
Consider the case where a2 > a1, so clearly, a1 = a3. Number of such trios is summation from i=1 to n of (n/i)-1 as n/i-1 are distinct values of a2 greater than a1 and with a3 as factor. </br>
Since a2 > 0, k1 >= 1 and also as a2 < a1, k2 >= 1 </br>
 So a1 = (k1*k2 + 1)*a3 and a1 <= n, <b> 1 <= a3 <=n/2 </b> </br> 
 Also, clearly a2 <= n, so <b> 1 <= k1 <= n/a3 </b> </br>
 So, a1 = (k1*k2 +1)*a3 <= n </br>
 So, <b>1 <= k2 <= (n/a3 -1)/k1 </b>
 So Final answer will be updated by using the nested for loops.
