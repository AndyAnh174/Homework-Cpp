int min_diff = nums[1] - nums[0];
    pair<int, int> result;
    for (int i = 1; i < n; i++) {
        int diff = nums[i] - nums[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
            result = make_pair(nums[i - 1], nums[i]);
        }
    }

    return result;