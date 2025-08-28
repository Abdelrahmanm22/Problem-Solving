class Solution {

    /**
     * @param String[] $words
     * @return String[]
     */
    function commonChars($words) {
        $ans = [];
        $vec = array_fill(0, count($words), []);

        for ($i = 0; $i < count($words); ++$i) {
            foreach (str_split($words[$i]) as $ch) {
                if (!isset($vec[$i][$ch])) {
                    $vec[$i][$ch] = 0;
                }
                $vec[$i][$ch]++;
            }
        }
        $minCount = [];
        foreach ($vec[0] as $ch => $count) {
            for ($i = 1; $i < count($vec); ++$i) {
                if (isset($vec[$i][$ch])) {
                    $count = min($count, $vec[$i][$ch]);
                } else {
                    $count = 0;
                    break;
                }
            }
            if ($count > 0) {
                $minCount[$ch] = $count;
            }
        }

        foreach ($minCount as $ch => $count) {
            for ($i = 0; $i < $count; ++$i) {
                $ans[] = $ch;
            }
        }
        return $ans;
    }
}