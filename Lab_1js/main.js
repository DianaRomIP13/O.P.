alert("Задайте координати вершин трикутника на площині");
let x1 = prompt("Введіть значення x1");
let x2 = prompt("Введіть значення x2");
let x3 = prompt("Введіть значення x3");
let y1 = prompt("Введіть значення y1");
let y2 = prompt("Введіть значення y2");
let y3 = prompt("Введіть значення y3");
let A = Math.sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
let B = Math.sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
let C = Math.sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
let a = (Math.acos((B * B + C * C - A * A) / (2 * B * C))) * 180/Math.PI;
let b = (Math.acos((A * A + C * C - B * B) / (2 * A * C))) * 180/Math.PI;
let f = (Math.acos((B * B + A * A - C * C) / (2 * B * A))) * 180/Math.PI;
document.write("Сторона A = " + A + "</br>" + "Сторона B = " + B + "</br>" + "Сторона C = " + C + "</br>" +
"Кут a = " + a + "</br>" + "Кут b = " + b + "</br>" + "Кут f = " + f);