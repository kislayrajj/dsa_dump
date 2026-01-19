function getMaxElement(bloomDay) {
  let maxElement = bloomDay[0];

  for (let i = 0; i < bloomDay.length; i++) {
    if (bloomDay[i] > maxElement) {
      maxElement = bloomDay[i];
    }
  }

  return maxElement;
}

function getCurrentSum(bloomDay, x) {
  let currentSum = 0;

  for (let i = 0; i < bloomDay.length; i++) {
    currentSum += Math.ceil(bloomDay[i]/x);
  }

  return currentSum;
}

function getSmallestDivisor(bloomDay, threshold) {
  let low = 1;
  let high = getMaxElement(bloomDay);
  let ans = -1;

  while (low <= high) {
    let mid = Math.floor(low + (high - low) / 2);
    let currentSum = getCurrentSum(bloomDay, mid);

    if (currentSum <= threshold) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return ans;
}

const bloomDay= [44,22,33,11,1]
const threshold = 5;
// const bloomDay= [1,2,5,9]
// const threshold = 6;
let result = getSmallestDivisor(bloomDay, threshold)
console.log(result)