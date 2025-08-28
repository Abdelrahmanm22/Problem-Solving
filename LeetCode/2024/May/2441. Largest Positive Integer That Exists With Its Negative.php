class Solution {

    /**
     * @param Integer[] $nums
     * @return Integer
     */
    function findMaxK($nums) {
        sort($nums);
        for($i=0;$i<count($nums);$i++){
            if($nums[$i]>0)break;
            for($j=$i+1;$j<count($nums);$j++){
                if((-1*$nums[$i])==$nums[$j])return $nums[$j];
            }
        }
        return -1;
    }
}