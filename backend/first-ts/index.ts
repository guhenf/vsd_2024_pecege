type carro = { brand: string, model: string, km?: number }

let fusca: carro = {
    brand: 'Volkswagem',
    model: 'Fusca',
}


let supra: carro = {
    brand: 'Toyota',
    model: 'Supra 2JZ',
    km: 157803
}

interface Person {
    name: string,
    age: number
    gender?: string
}

let Me: Person = {
    name: "Gustavo Franco",
    age: 26,
    gender: "Man"
}

class Car {
    brand: string
    model: string
    year: number
    constructor(brand: string, model: string, year: number) {
        this.brand = brand
        this.model = model
        this.year = year
    }

    Start = function (): boolean { return true }
}

const MyCar = new Car('Fiat', 'Palio', 1996)

console.log(MyCar.brand)
