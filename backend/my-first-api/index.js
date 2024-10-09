const express = require('express')

const app = new express()
const port = 3000

app.get('/', (req, res) => res.send('Lá máchina mas veloz de totti Itali'))

app.listen(port, () => {
    console.log(`example app listening at http://localhost:${port}`)
})