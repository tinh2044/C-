arr = [1, 3, 2, [3, 4, [6, 7, [8]], 4, [5]], [3, 6], 7, 20];
function solution(arr) {
  if (typeof arr !== "object") return [arr];

  let newArr = arr.map((item) => {
    console.log();
    // return crr.push(...solution(value));
    // return crr.shift(1);
  }, []);
  return newArr;
}
console.log(solution(arr));
