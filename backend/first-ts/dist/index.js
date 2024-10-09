"use strict";
let fusca = {
    brand: 'Volkswagem',
    model: 'Fusca',
};
let supra = {
    brand: 'Toyota',
    model: 'Supra 2JZ',
    km: 157803
};
let Me = {
    name: "Gustavo Franco",
    age: 26,
    gender: "Man"
};
class Car {
    constructor(brand, model, year) {
        this.Start = function () { return true; };
        this.brand = brand;
        this.model = model;
        this.year = year;
    }
}
const MyCar = new Car('Fiat', 'Palio', 1996);
console.log(MyCar.brand);
