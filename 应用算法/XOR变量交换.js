a = 12;
b = 123;

a = a ^ b;
b = a ^ b;
a = a ^ b;

console.log(a + ' ' + b)