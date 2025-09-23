function findFraud(arr) {
  const counts = {};

  // Count appearances as "follower"
  for (let i = 1; i < arr.length; i++) {
    const person = arr[i];
    counts[person] = (counts[person] || 0) + 1;
  }

  // Find max
  const [fraud, maxCount] = Object.entries(counts)
    .reduce((max, entry) => entry[1] > max[1] ? entry : max, [null, 0]);

  return maxCount >= 3 ? Number(fraud) : -1;
}

// Tests
console.log(findFraud([2,1,2,1,2,1,3])); // 1
console.log(findFraud([2,1,1,1,2,3,4]));   // -1
console.log(findFraud([2,1,1,1,1,1,3])); // 1
