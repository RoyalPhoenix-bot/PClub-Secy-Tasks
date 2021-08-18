# Naruto and his Dream

In order to maximise his effort, it only makes sense to send the **T** time machines to the **T** days he has worked the most on.
However, we need to keep the time complexity of the code in mind. To calculate the sum of the number of factors of all number **<=Q** takes **O(n<sup>2</sup>) ** time. Given the constraints of **Q**, an **O(n<sup>2</sup>) ** solution for every test case, might exceed the given time limit.
Which is why, we must precompute the value for all **Q** (<=2000). After which we can find **T** in constant time(**O(1)**).
After adding the additional efforts put in by the shadow clones, we can find easily find the number of tasks he can complete.

**Time Complexity:** `O(n)`