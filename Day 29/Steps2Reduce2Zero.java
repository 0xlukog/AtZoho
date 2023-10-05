public class Steps2Reduce2Zero{
    public static void main(String[] args) {

    }
}

class Solution {
    public static int steps(int num,int count){
        if(num == 0){
            return count;}
        else if(num%2==0){
            return steps(num/2,++count);
        }
        else{
            return steps(num-1,++count);
        }
    }
    public int numberOfSteps(int num) {
        return steps(num, 0);
    }
}

///inheritance 
// 1. object 
// get object wiht set of characteristisc and 

//example Vehicle - bike/car
// mobiels 