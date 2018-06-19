const intersection = (list1, list2) => list1.filter(x => list2.indexOf(x) !== -1)
console.log(intersection([1, 2, 3], [3, 4, 5]))