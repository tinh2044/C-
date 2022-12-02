arr = [1, 2, 3, 4, 5, 6];
arr.reduce((crr, value) => {
  console.log(crr);
  return crr + value;
}, 0);
