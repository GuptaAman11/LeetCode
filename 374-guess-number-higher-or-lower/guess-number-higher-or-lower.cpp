/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long long high = n ;
        long long low = 1 ;
        while(high >= low){
            int num = (high + low)/2 ;
            if(guess(num) == 0){
                return num ;
            }
            else if(guess(num) == -1){

                high = num -1 ;
            }
            else{
                low = num +1 ;
            }
        }
        return -1 ;
    }
};