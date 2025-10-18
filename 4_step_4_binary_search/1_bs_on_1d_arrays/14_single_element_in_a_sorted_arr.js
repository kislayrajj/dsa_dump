function singleNonDuplicate(arr) {
    let n = arr.length
    if (n == 1) return arr[0];
    if (arr[0] != arr[1]) return arr[0]
    if (arr[n - 1] != arr[n - 2]) return arr[n - 1]
    let low = 0
    let high = n - 1

    while (low <= high) {
        let mid = Math.floor(low + (high - low) / 2);
        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1]) return arr[mid]

        if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) || (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
            low = mid + 1;
        } else {
            high = mid - 1
        }
    }

    return -1
}


let arr = [1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6]
let result = singleNonDuplicate(arr)
console.log(result)
