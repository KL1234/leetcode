## 题目地址

https://leetcode.com/problems/add-binary/

## 题目

Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

範例:

* Input: a = "11", b = "1"  
  Output: "100"

* Input: a = "1010", b = "1011"   
  Output: "10101"

## 程式
```js
/**
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 */
const twoSum = function (nums, target) {
  const map = new Map();
  for (let i = 0; i < nums.length; i++) {
    const diff = target - nums[i];
    if (map.has(diff)) {
      return [map.get(diff), i];
    }
    map.set(nums[i], i);
  }
};
```

