function getMaxElement(weights) {
  let maxElement = weights[0];

  for (let i = 0; i<weights.length; i++) {
    if (weights[i] > maxElement) {
      maxElement = weights[i];
    }
  }

  return maxElement;
}

function getTotalWeight(weights) {
  let totalWeight = 0;

  for (let i = 0; i < weights.length; i++) {
    totalWeight += weights[i];
  }

  return totalWeight;
}

function possibility(weights, capacity, totalDays) {
  let days = 1;
  let sum = 0;

  for (let w of weights) {
    if (sum + w <= capacity) {
      sum += w;
    } else {
      days++;
      sum = w;
    }
  }

  return days <= totalDays;
}

function leastWeightCapacityToShipPackages(weights, totalDays) {
  let low = getMaxElement(weights);
  let high = getTotalWeight(weights);
  let ans = -1;

  while (low <= high) {
    let mid = Math.floor(low + (high - low) / 2);

    if (possibility(weights, mid, totalDays)) {
      ans = mid;
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }

  return ans;
}

const weights = [1,2,3,4,5,6,7,8,9,10]
const totalDays = 5
let result = leastWeightCapacityToShipPackages(weights, totalDays)
console.log(result);
