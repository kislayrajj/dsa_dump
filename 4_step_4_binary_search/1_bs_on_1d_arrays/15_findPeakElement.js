// brute force solution

function findPeakElement(arr) {
    let n = arr.length

    if (n == 1 || arr[0] > arr[1]) return 0
    if (arr[n - 2] < arr[n - 1]) return n - 1;

    for (let i = 0; i < n - 1; i++) {
        if (arr[i - 1] < arr[i] && arr[i + 1] < arr[i]) {
            return i
        }
    }
    return -1;

}   

let arr = [1,2,4,5,2,3,1]
let result = findPeakElement(arr);
console.log(result)
