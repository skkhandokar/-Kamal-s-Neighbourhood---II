# -Kamal-s-Neighbourhood---II
Output the number of houses that Kamal can go.
Kamal lives in mazenda city. In his neighbourhood there are several houses too. Some of them are directly connected to Kamal's house, and some of them are indirectly connected. If there are N houses and E roads in his area. Every house has a unique number from 0 to N-1. Can you tell how many houses Kamal can go directly or indirectly if Kamal's house if his house number is K?

Note: You can go in the road only in one direction.

Input Format

    First line will contain N and E, the number of houses and roads respectively.
    Next E lines will contain A and B, means there is a road between A house and B house. You can go only from A to B.
    Next line will contain K, the number of Kamal's house

Constraints

    0 < N <=20
    0 <= E <= 190
    0 <= A,B < N
        0 <= K < N

Output Format

    Output the number of houses that Kamal can go.

Sample Input 0

6 5
0 1
0 2
0 3
2 3
4 5
2

Sample Output 0

1

