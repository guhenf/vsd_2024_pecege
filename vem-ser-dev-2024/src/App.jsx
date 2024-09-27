import './style.css'
import { useState } from "react"

export function App() {

  const [car, setCar] = useState('')
  const [carList, setCarList] = useState([])

  function handleInputCar(event){
    setCar(event.target.value)
  }

  function handleList(){
    setCarList([...carList, car])
    setCar('')
  }

  function removeLast(){
    carList.pop()
    setCarList([...carList])
  }

  return (
    <>
    <div>
      <h1>Garagem</h1>
      <input value={car} type="text" onChange={(event) => handleInputCar(event)}/>
      <button onClick={() => handleList()}>Adicionar</button>
      {(carList.length > 0) &&
          <button disabled>Remover o ultimo!<button>
      }
      <button onClick={()=> removeLast()}>Remover o ultimo!</button>
    </div>
    <ul>
      {
        carList.map((Car) => (
          <li key={Car}>{Car}</li>
        )
      )  
    }
    </ul>
    </>
  )
}